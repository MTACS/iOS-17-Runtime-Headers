
@interface SFAuthenticateAccountHomeUserInfo : NSObject {
    NSUUID * _homeUniqueIdentifier;
    bool  _isRMVEnabled;
    NSUUID * _userUniqueIdentifier;
}

@property (nonatomic, readonly) NSUUID *homeUniqueIdentifier;
@property (nonatomic, readonly) bool isRMVEnabled;
@property (nonatomic, readonly) NSUUID *userUniqueIdentifier;

- (void).cxx_destruct;
- (id)homeUniqueIdentifier;
- (id)initWithHomeUUID:(id)arg1 userUUID:(id)arg2 isRMVEnabled:(bool)arg3;
- (bool)isRMVEnabled;
- (id)userUniqueIdentifier;

@end
