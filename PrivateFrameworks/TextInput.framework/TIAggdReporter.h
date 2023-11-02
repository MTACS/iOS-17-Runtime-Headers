
@interface TIAggdReporter : NSObject <TIAggdReporting>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)getDefaultSoftwareLayout;
+ (void)setSharedAggdReporter:(id)arg1;
+ (id)sharedAggdReporter;
+ (id)singletonInstance;

- (void)addValue:(long long)arg1 forKey:(id)arg2;
- (void)clearDistributionKey:(id)arg1;
- (void)clearScalarKey:(id)arg1;
- (int)commit;
- (void)decrementKey:(id)arg1;
- (void)incrementKey:(id)arg1;
- (void)pushValue:(double)arg1 forKey:(id)arg2;
- (void)setValue:(double)arg1 forDistributionKey:(id)arg2;
- (void)setValue:(long long)arg1 forScalarKey:(id)arg2;
- (void)significantTimeChanged;
- (void)subtractValue:(long long)arg1 forKey:(id)arg2;

@end
