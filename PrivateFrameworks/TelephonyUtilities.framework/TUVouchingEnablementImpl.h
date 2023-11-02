
@interface TUVouchingEnablementImpl : NSObject <TUVouchingEnablement> {
    FTServerBag * _serverBag;
    NSUserDefaults * _userDefaults;
}

@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, retain) FTServerBag *serverBag;
@property (nonatomic, readonly) bool shouldForceVerificationFailures;
@property (nonatomic, retain) NSUserDefaults *userDefaults;

- (void).cxx_destruct;
- (id)init;
- (id)initWithUserDefaults:(id)arg1 serverBag:(id)arg2;
- (bool)isEnabled;
- (id)serverBag;
- (bool)serverBagValueForKey:(id)arg1 withDefault:(bool)arg2;
- (void)setServerBag:(id)arg1;
- (void)setUserDefaults:(id)arg1;
- (bool)shouldForceVerificationFailures;
- (id)userDefaults;

@end
