
@interface HMDDeviceSetupSessionInternal : HMFObject {
    HMDHomeManager * _homeManager;
    NSData * _sessionData;
    unsigned long long  _state;
    NSDictionary * _userInfo;
}

@property (readonly) HMDHomeManager *homeManager;
@property (nonatomic, retain) NSData *sessionData;
@property (nonatomic) unsigned long long state;
@property (nonatomic, retain) NSDictionary *userInfo;

+ (id)allowedClasses;
+ (bool)isSupported;
+ (long long)role;

- (void).cxx_destruct;
- (id)homeManager;
- (id)initWithHomeManager:(id)arg1;
- (bool)processSessionData:(id)arg1 fromBundle:(id)arg2 outAccessoryUUID:(id*)arg3 outAccessoryIDSIdentifier:(id*)arg4 error:(id*)arg5;
- (id)sessionData;
- (void)setSessionData:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setUserInfo:(id)arg1;
- (unsigned long long)state;
- (id)userInfo;

@end
