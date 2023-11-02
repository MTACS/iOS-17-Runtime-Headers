
@interface JFXAnalyticsManager : NSObject <JFXAnalytics>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)allIncrementScalarEvents;
+ (id)bundleForAnalytics;
+ (id)sharedInstance;

- (bool)checkIfEventExistsWithName:(id)arg1;
- (id)dictionaryWithEventName:(id)arg1 value:(double)arg2;
- (id)fullKeyFromEvent:(id)arg1;
- (id)init;
- (bool)isIncrementScalar:(id)arg1;
- (void)trackEventWithName:(id)arg1;
- (void)trackKey:(id)arg1 withCount:(unsigned long long)arg2;
- (void)trackKey:(id)arg1 withPayload:(id)arg2;

@end
