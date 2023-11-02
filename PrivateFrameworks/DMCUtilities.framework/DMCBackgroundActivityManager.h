
@interface DMCBackgroundActivityManager : NSObject {
    NSMutableDictionary * _activities;
}

@property (nonatomic, retain) NSMutableDictionary *activities;

+ (void)cancelActivity:(id)arg1;
+ (void)scheduleOneShotActivity:(id)arg1 interval:(double)arg2 gracePeriod:(double)arg3 callback:(id /* block */)arg4;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)activities;
- (id)initPrivate;
- (void)setActivities:(id)arg1;

@end
