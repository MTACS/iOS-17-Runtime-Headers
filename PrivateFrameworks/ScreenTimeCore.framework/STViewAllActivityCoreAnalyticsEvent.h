
@interface STViewAllActivityCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent> {
    long long  _daysSinceLastView;
    long long  _userAgeGroup;
    bool  _userIsManaged;
    bool  _userIsRemote;
}

@property (readonly) long long daysSinceLastView;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSDictionary *payload;
@property (readonly) long long userAgeGroup;
@property (readonly) bool userIsManaged;
@property (readonly) bool userIsRemote;

+ (id)description;

- (long long)daysSinceLastView;
- (id)initWithDaysSinceLastView:(long long)arg1 userAgeGroup:(long long)arg2 userIsManaged:(bool)arg3 userIsRemote:(bool)arg4;
- (id)name;
- (id)payload;
- (long long)userAgeGroup;
- (bool)userIsManaged;
- (bool)userIsRemote;

@end
