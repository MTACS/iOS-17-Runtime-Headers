
@interface PHAssetCrashRecoveryUnarchiver : NSKeyedUnarchiver <PLXPCCoder> {
    <NSObject> * _userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (retain) <NSObject> *userInfo;

- (void).cxx_destruct;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
