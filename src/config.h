#ifndef crash_config_h
#define crash_config_h

#include <map>
#include <cstdint>
#include <string>
#include <utility>

namespace config
{
	extern bool verbose, silent, v6, uid_change, wrap,
	            always_login, extract_blob, no_hk_check, no_net, socks5_dns;

	extern uint32_t traffic_flags;

	extern std::string keyfile, certfile, host, port, local_port, local_proxy_ip, sni, transport;
	extern std::string server_keys, user_keys, user, cmd;

	extern std::string tfile, tmsg, good_ip_file;

	extern std::map<std::string, std::string> tcp_listens, udp_listens;

	extern std::map<std::string, std::pair<std::string, uint16_t>> sni2node;

	extern int socks5_port, socks5_fd, socks4_port, socks4_fd;
}

#endif

