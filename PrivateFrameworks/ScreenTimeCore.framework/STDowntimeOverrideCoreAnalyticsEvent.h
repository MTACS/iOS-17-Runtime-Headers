
@interface STDowntimeOverrideCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent> {
    bool  _downtimeEnabled;
    bool  _gracePeriodUsed;
    long long  _hourOfDay;
    bool  _scheduleEnabled;
    bool  _userIsManaged;
}

@property (readonly, copy) NSString *description;
@property (readonly) bool downtimeEnabled;
@property (readonly) bool gracePeriodUsed;
@property (readonly) long long hourOfDay;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSDictionary *payload;
@property (readonly) bool scheduleEnabled;
@property (readonly) bool userIsManaged;

+ (id)description;

- (bool)downtimeEnabled;
- (bool)gracePeriodUsed;
- (long long)hourOfDay;
- (id)initWithDowntimeEnabled:(bool)arg1 gracePeriodUsed:(bool)arg2 scheduleEnabled:(bool)arg3 hourOfDay:(long long)arg4 userIsManaged:(bool)arg5;
- (id)name;
- (id)payload;
- (bool)scheduleEnabled;
- (bool)userIsManaged;

@end
