
@interface STCommunicationLimitsCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent> {
    bool  _communicationLimited;
    bool  _contactEditingAllowed;
    bool  _contactManagementEnabled;
    long long  _userAgeGroup;
    bool  _userIsRemote;
}

@property (readonly) bool communicationLimited;
@property (readonly) bool contactEditingAllowed;
@property (readonly) bool contactManagementEnabled;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSDictionary *payload;
@property (readonly) long long userAgeGroup;
@property (readonly) bool userIsRemote;

+ (id)description;

- (bool)communicationLimited;
- (bool)contactEditingAllowed;
- (bool)contactManagementEnabled;
- (id)initWithCommunicationLimited:(bool)arg1 contactManagementEnabled:(bool)arg2 contactEditingAllowed:(bool)arg3 userAgeGroup:(long long)arg4 userIsRemote:(bool)arg5;
- (id)name;
- (id)payload;
- (long long)userAgeGroup;
- (bool)userIsRemote;

@end
