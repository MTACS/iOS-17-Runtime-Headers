
@interface MOEffectiveSettings : NSObject {
    MOEffectiveAccountSettings * _account;
    MOEffectiveAllowedClientSettings * _allowedClient;
    MOEffectiveShieldSettings * _shield;
    MOEffectiveUserSettings * _user;
}

@property (readonly) MOEffectiveAccountSettings *account;
@property (readonly) MOEffectiveAllowedClientSettings *allowedClient;
@property (readonly) MOEffectiveShieldSettings *shield;
@property (readonly) MOEffectiveUserSettings *user;

+ (void)startObservingChangesWithHandler:(id /* block */)arg1;
+ (void)subscribeForChangesInGroups:(id)arg1 eventName:(id)arg2;

- (void).cxx_destruct;
- (id)account;
- (id)allowedClient;
- (id)init;
- (id)shield;
- (id)user;

@end
