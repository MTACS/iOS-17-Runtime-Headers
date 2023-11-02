
@interface TITypologyProfileState : NSObject <NSSecureCoding> {
    NSDate * _profileInstallationDate;
    NSData * _salt;
    NSDate * _userNotificationDate;
    NSString * _userResponse;
}

@property (nonatomic, copy) NSDate *profileInstallationDate;
@property (nonatomic, retain) NSData *salt;
@property (nonatomic, copy) NSDate *userNotificationDate;
@property (nonatomic, copy) NSString *userResponse;

+ (bool)_removePersistedStateAtURL:(id)arg1;
+ (id)_typologyProfileStateFromURL:(id)arg1;
+ (id)defaultPersistentURL;
+ (bool)removePersistedState;
+ (bool)removePersistedStateAtURL:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)typologyProfileStateFromPersistedState;
+ (id)typologyProfileStateWithURL:(id)arg1;

- (void).cxx_destruct;
- (bool)_authenticateHashToken:(id)arg1 forProfileInstallationDate:(id)arg2 userNotificationDate:(id)arg3 userResponse:(id)arg4;
- (id)_hashTokenForProfileInstallationDate:(id)arg1 userNotificationDate:(id)arg2 userResponse:(id)arg3;
- (bool)_persistStateToURL:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)hashForString:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProfileInstallationDate:(id)arg1;
- (id)initWithProfileInstallationDate:(id)arg1 userNotificationDate:(id)arg2 userResponse:(id)arg3;
- (bool)persistState;
- (bool)persistStateToURL:(id)arg1;
- (id)profileInstallationDate;
- (id)salt;
- (void)setProfileInstallationDate:(id)arg1;
- (void)setSalt:(id)arg1;
- (void)setUserNotificationDate:(id)arg1;
- (void)setUserResponse:(id)arg1;
- (id)userNotificationDate;
- (id)userResponse;

@end
