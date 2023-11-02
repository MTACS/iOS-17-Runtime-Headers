
@interface CoreRepairHelper : NSObject <CoreRepairHelperProtocol, setupModuleChallengeCallBack> {
    bool  _factoryServiceOn;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool factoryServiceOn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (bool)_mount:(const char *)arg1 withFlag:(int)arg2;
- (void)daemonControl:(id)arg1 withReply:(id /* block */)arg2;
- (bool)factoryServiceOn;
- (id)init;
- (void)seal:(id)arg1 withReply:(id /* block */)arg2;
- (void)setFactoryServiceOn:(bool)arg1;
- (void)setupModuleChallengeCallBack:(struct __AMFDR { }*)arg1;

@end
