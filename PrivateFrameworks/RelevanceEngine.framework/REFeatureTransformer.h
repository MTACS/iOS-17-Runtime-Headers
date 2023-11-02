
@interface REFeatureTransformer : NSObject <NSCopying> {
    <REFeatureTransformerInvalidationDelegate> * _invalidationDelegate;
    NSString * _name;
    REPriorityQueue * _scheduledUpdates;
    REUpNextTimer * _updateTimer;
}

@property (nonatomic, copy) NSString *name;

+ (id)binaryTransformerWithThreshold:(id)arg1;
+ (id)bucketTransformerWithBitWidth:(unsigned long long)arg1;
+ (id)bucketTransformerWithCount:(unsigned long long)arg1 minValue:(id)arg2 maxValue:(id)arg3;
+ (id)changedTransform;
+ (id)changedTransformWithImpulseDuration:(double)arg1;
+ (id)customCategoricalTransformerWithName:(id)arg1 block:(id /* block */)arg2;
+ (id)customCategoricalTransformerWithName:(id)arg1 featureCount:(unsigned long long)arg2 transformation:(id /* block */)arg3;
+ (id)customTransformerWithName:(id)arg1 outputType:(unsigned long long)arg2 block:(id /* block */)arg3;
+ (id)customTransformerWithName:(id)arg1 outputType:(unsigned long long)arg2 featureCount:(unsigned long long)arg3 transformation:(id /* block */)arg4;
+ (id)featureTransformerClasses;
+ (id)functionName;
+ (id)hashTransform;
+ (id)logTransformerWithBase:(id)arg1;
+ (id)maskAndShiftTransformWithStartIndex:(unsigned long long)arg1 endIndex:(unsigned long long)arg2;
+ (id)maskTransformWithWidth:(unsigned long long)arg1;
+ (id)recentTransformerWithCount:(unsigned long long)arg1;
+ (id)roundTransformer;
+ (bool)supportsInvalidation;
+ (bool)supportsPersistence;

- (void).cxx_destruct;
- (void)_invalidate;
- (id)_invalidationQueue;
- (void)_invalidationQueue_scheduleInvalidation:(id)arg1;
- (void)_performAndScheduleTimer;
- (void)configureWithInvocation:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)invalidateWithContext:(id)arg1;
- (id)invalidationDelegate;
- (id)name;
- (bool)readFromURL:(id)arg1 error:(id*)arg2;
- (void)setInvalidationDelegate:(id)arg1;
- (void)setName:(id)arg1;
- (bool)writeToURL:(id)arg1 error:(id*)arg2;

@end
