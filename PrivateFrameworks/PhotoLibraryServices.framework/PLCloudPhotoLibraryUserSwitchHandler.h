
@interface PLCloudPhotoLibraryUserSwitchHandler : NSObject <UMUserSwitchStakeholder> {
    <PLCloudUserSessionHandling> * _sessionHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) <PLCloudUserSessionHandling> *sessionHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)sessionHandler;
- (void)setSessionHandler:(id)arg1;
- (void)willSwitchUser;

@end
