
@interface CALNSnoozeCategory : NSObject {
    NSArray * _actions;
    double  _leeway;
    bool  _relativeToEnd;
    NSString * _suffix;
    double  _timedExpirationInterval;
    bool  _validForAllDay;
}

@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, readonly) double leeway;
@property (nonatomic, readonly) NSString *suffix;

+ (id)snoozeCategories;
+ (id)snoozeCategoryForEventWithStartDate:(id)arg1 endDate:(id)arg2 now:(id)arg3 isAllDay:(bool)arg4;

- (void).cxx_destruct;
- (id)actions;
- (id)expirationDateForEventWithStartDate:(id)arg1 endDate:(id)arg2 isAllDay:(bool)arg3;
- (id)initWithSuffix:(id)arg1 timedExpirationInterval:(double)arg2 leeway:(double)arg3 relativeToEnd:(bool)arg4 validForAllDay:(bool)arg5 actions:(id)arg6;
- (double)leeway;
- (id)suffix;

@end
