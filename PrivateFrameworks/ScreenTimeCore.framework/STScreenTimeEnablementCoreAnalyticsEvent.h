
@interface STScreenTimeEnablementCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent> {
    long long  _numberOfGuardians;
    bool  _pinSet;
    bool  _screenTimeEnabled;
    long long  _userAgeGroup;
    bool  _userIsRemote;
}

@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *name;
@property (readonly) long long numberOfGuardians;
@property (readonly, copy) NSDictionary *payload;
@property (readonly) bool pinSet;
@property (readonly) bool screenTimeEnabled;
@property (readonly) long long userAgeGroup;
@property (readonly) bool userIsRemote;

+ (id)description;

- (id)initWithScreenTimeEnabled:(bool)arg1 numberOfGuardians:(long long)arg2 pinSet:(bool)arg3 userAgeGroup:(long long)arg4 userIsRemote:(bool)arg5;
- (id)name;
- (long long)numberOfGuardians;
- (id)payload;
- (bool)pinSet;
- (bool)screenTimeEnabled;
- (long long)userAgeGroup;
- (bool)userIsRemote;

@end
