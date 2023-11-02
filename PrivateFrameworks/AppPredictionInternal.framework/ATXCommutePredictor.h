
@interface ATXCommutePredictor : NSObject <ATXCachedTransitionPredictorProtocol> {
    ATXPredictedTransitionsCache * _cache;
    <ATXLocationManagerProtocol> * _manager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getNextTransitionOnActivity:(id)arg1;
- (id)init;
- (id)initWithTransitionsCache:(id)arg1 locationManager:(id)arg2;
- (void)prewarmOnActivity:(id)arg1;

@end
