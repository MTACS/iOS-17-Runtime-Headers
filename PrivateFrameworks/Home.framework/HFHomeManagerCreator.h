
@interface HFHomeManagerCreator : NSObject {
    HMHomeManagerConfiguration * _configuration;
    unsigned long long  _creationPolicy;
    <HFHomeManagerCreatorDelegate> * _delegate;
    <HFHomeConfigurationStatus> * _homeStatus;
    long long  _hostProcessType;
}

@property (nonatomic, copy) HMHomeManagerConfiguration *configuration;
@property (nonatomic) unsigned long long creationPolicy;
@property (nonatomic) <HFHomeManagerCreatorDelegate> *delegate;
@property (nonatomic, retain) <HFHomeConfigurationStatus> *homeStatus;
@property (nonatomic) long long hostProcessType;

+ (bool)allowCreationInTest;
+ (void)setAllowCreationInTest:(bool)arg1;

- (void).cxx_destruct;
- (id)_createHomeManager;
- (void)_createHomeManagerOnQueue;
- (unsigned long long)_homeManagerCreationPolicy;
- (bool)_shouldCreateHomeManager;
- (bool)canCreateHomeManager;
- (id)configuration;
- (id)createHomeManagerIfNeeded;
- (unsigned long long)creationPolicy;
- (id)delegate;
- (id)homeStatus;
- (long long)hostProcessType;
- (id)init;
- (id)initWithHostProcess:(long long)arg1 configuration:(id)arg2 homeStatus:(id)arg3 delegate:(id)arg4;
- (void)setConfiguration:(id)arg1;
- (void)setCreationPolicy:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHomeStatus:(id)arg1;
- (void)setHostProcessType:(long long)arg1;

@end
