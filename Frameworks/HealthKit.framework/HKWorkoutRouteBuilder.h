
@interface HKWorkoutRouteBuilder : HKSeriesBuilder <HKSeriesBuilderClientInterface>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)clientInterface;
+ (void)configureClientInterface:(id)arg1;
+ (void)configureServerInterface:(id)arg1;
+ (id)serverInterface;
+ (id)taskServerIdentifier;

- (void)_resourceQueue_finishRouteWithWorkout:(id)arg1 metadata:(id)arg2 completion:(id /* block */)arg3;
- (void)_resourceQueue_insertRouteData:(id)arg1 completion:(id /* block */)arg2;
- (void)addMetadata:(id)arg1 completion:(id /* block */)arg2;
- (id)exportedInterface;
- (void)finishRouteWithWorkout:(id)arg1 metadata:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (id)initWithHealthStore:(id)arg1 device:(id)arg2;
- (id)initWithHealthStore:(id)arg1 identifier:(id)arg2 device:(id)arg3 workoutBuilderID:(id)arg4;
- (void)insertRouteData:(id)arg1 completion:(id /* block */)arg2;
- (id)remoteInterface;

@end
