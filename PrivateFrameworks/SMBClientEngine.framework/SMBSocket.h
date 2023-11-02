
@interface SMBSocket : NSObject {
    unsigned int  _connectTimeOut;
    NSObject<OS_nw_connection> * _connection;
    struct timespec { 
        long long tv_sec; 
        long long tv_nsec; 
    }  _last_echo;
    struct timespec { 
        long long tv_sec; 
        long long tv_nsec; 
    }  _last_recv;
    NSString * _netBiosName;
    unsigned short  _port;
    NSObject<OS_dispatch_queue> * _recv_queue;
    unsigned int  _resp_wait_timeout;
    NSString * _serverName;
    NSObject<OS_dispatch_queue> * _signing_queue;
    NSObject<OS_nw_endpoint> * endpoint;
    id /* block */  event_handler_callback;
    NSObject<OS_dispatch_semaphore> * event_semaphore;
    NSMutableArray * io_rqlist;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  io_rqlock;
    unsigned char  ipv4v6DotName;
    unsigned int  is_NetBIOS;
    NSObject<OS_dispatch_queue> * nw_conn_queue;
    int  nw_conn_state;
    SMBPiston * pd;
    NSObject<OS_nw_endpoint> * remote_endpoint;
    NSObject<OS_dispatch_queue> * send_queue;
    const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; } * server_addr;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  skt_lock;
    unsigned long long  state;
    NSObject<OS_dispatch_source> * timer;
    NSObject<OS_dispatch_queue> * timer_queue;
    unsigned int  timer_running;
    NSObject<OS_dispatch_semaphore> * timer_semaphore;
}

@property unsigned int connectTimeOut;
@property (retain) NSObject<OS_nw_connection> *connection;
@property struct timespec { long long x1; long long x2; } last_echo;
@property struct timespec { long long x1; long long x2; } last_recv;
@property (retain) NSString *netBiosName;
@property unsigned short port;
@property (retain) NSObject<OS_dispatch_queue> *recv_queue;
@property unsigned int resp_wait_timeout;
@property (retain) NSString *serverName;
@property (retain) NSObject<OS_dispatch_queue> *signing_queue;

- (void).cxx_destruct;
- (void)callEventHandler:(unsigned int)arg1 contextPtr:(id)arg2 returnValue:(unsigned int)arg3;
- (void)closeSocket;
- (int)connectSocket;
- (unsigned int)connectTimeOut;
- (id)connection;
- (id /* block */)getEventHandler;
- (char *)getIPv4IPv6DotName;
- (unsigned int)getIPv4IPv6DotNameMaxLength;
- (const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)getServerAddress;
- (unsigned int)isPerAppVPN;
- (struct timespec { long long x1; long long x2; })last_echo;
- (struct timespec { long long x1; long long x2; })last_recv;
- (id)netBiosName;
- (int)openSocket:(id)arg1;
- (unsigned short)port;
- (int)processReply:(void*)arg1;
- (void)readData:(const void*)arg1;
- (void)readNBHeader;
- (id)recv_queue;
- (unsigned int)resp_wait_timeout;
- (int)send:(id)arg1;
- (int)sendRequest:(id)arg1;
- (id)serverName;
- (void)setConnectTimeOut:(unsigned int)arg1;
- (void)setConnection:(id)arg1;
- (void)setEventHandler:(id /* block */)arg1;
- (void)setLast_echo:(struct timespec { long long x1; long long x2; })arg1;
- (void)setLast_recv:(struct timespec { long long x1; long long x2; })arg1;
- (void)setNetBIOSHeader:(unsigned int*)arg1 nbType:(unsigned char)arg2 length:(unsigned int)arg3;
- (void)setNetBiosName:(id)arg1;
- (void)setPort:(unsigned short)arg1;
- (void)setRecv_queue:(id)arg1;
- (void)setResp_wait_timeout:(unsigned int)arg1;
- (void)setServerName:(id)arg1;
- (void)setSigning_queue:(id)arg1;
- (id)signing_queue;
- (void)timeOutCheck;
- (int)writeEnabled;

@end
