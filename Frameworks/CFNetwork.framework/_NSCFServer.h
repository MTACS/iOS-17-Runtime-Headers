
@interface _NSCFServer : NSObject {
    NSDictionary * _configuration;
    bool  _enableCoprocessorInterface;
    NSString * _interface;
    NSObject<OS_tcp_listener> * _listener;
    NSNumber * _listenerID;
    long long  _listenerPort;
    long long  _type;
}

@property (retain) NSDictionary *configuration;
@property (getter=isCoprocessorInterfaceEnabled) bool enableCoprocessorInterface;
@property (retain) NSString *interface;
@property long long listenerPort;
@property long long type;

+ (id)adressesForInterface:(id)arg1;
+ (bool)startSocksServerWithPort:(long long)arg1;
+ (bool)stopAll;

- (void).cxx_destruct;
- (id)configuration;
- (void)dealloc;
- (id)init;
- (id)initWithType:(long long)arg1;
- (id)initWithType:(long long)arg1 port:(long long)arg2;
- (id)initWithType:(long long)arg1 port:(long long)arg2 interface:(id)arg3;
- (id)interface;
- (bool)isCoprocessorInterfaceEnabled;
- (long long)listenerPort;
- (void)setConfiguration:(id)arg1;
- (void)setEnableCoprocessorInterface:(bool)arg1;
- (void)setInterface:(id)arg1;
- (void)setListenerPort:(long long)arg1;
- (void)setType:(long long)arg1;
- (bool)start;
- (bool)stop;
- (long long)type;

@end
