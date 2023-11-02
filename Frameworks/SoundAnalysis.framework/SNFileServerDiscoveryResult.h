
@interface SNFileServerDiscoveryResult : NSObject <SNResult> {
    void serverInfo;
    void state;
}

@property (nonatomic, retain) SNFileServerInfo *serverInfo;
@property (nonatomic) unsigned long long state;

- (void).cxx_destruct;
- (id)init;
- (id)initWithServerInfo:(id)arg1 state:(unsigned long long)arg2;
- (id)serverInfo;
- (void)setServerInfo:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;

@end
