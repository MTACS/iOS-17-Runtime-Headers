
@interface DASDelegate : NSObject {
    NSXPCConnection * _connectionToService;
    NSObject<OS_os_log> * _log;
}

@property (nonatomic, retain) NSXPCConnection *connectionToService;
@property (nonatomic, retain) NSObject<OS_os_log> *log;

- (void).cxx_destruct;
- (void)appLaunchResumeInfoWithStartDate:(id)arg1 withEndDate:(id)arg2 withReply:(id /* block */)arg3;
- (void)connect;
- (id)connectionToService;
- (void)disconnect;
- (id)init;
- (id)log;
- (void)setConnectionToService:(id)arg1;
- (void)setLog:(id)arg1;

@end
