
@interface WBSSafariSandboxBroker : NSObject <WBSSafariSandboxBrokerProtocol> {
    struct { 
        unsigned int val[8]; 
    }  _auditToken;
    NSObject<OS_os_log> * _log;
    int  _pid;
}

@property (nonatomic, readonly) struct { unsigned int x1[8]; } auditToken;
@property (nonatomic, readonly) NSObject<OS_os_log> *log;
@property (nonatomic, readonly) int pid;

- (void).cxx_destruct;
- (struct { unsigned int x1[8]; })auditToken;
- (id)initWithPID:(int)arg1 auditToken:(struct { unsigned int x1[8]; })arg2;
- (id)log;
- (int)pid;

@end
