
@interface APOdmlFeatureCalculatorManager : NSObject {
    NSArray * _assetManagerTypes;
    NSMutableArray * _calculatorErrors;
    APOdmlXpcLifecycleHandler * _lifeCycleHandler;
    NSOperationQueue * _operationQueue;
    NSArray * _placementTypes;
    NSMutableArray * _validFeatureCalculators;
    NSObject<OS_xpc_object> * _xpc_activity;
}

@property (nonatomic, retain) NSArray *assetManagerTypes;
@property (nonatomic, retain) NSMutableArray *calculatorErrors;
@property (nonatomic, retain) APOdmlXpcLifecycleHandler *lifeCycleHandler;
@property (nonatomic, readonly) NSOperationQueue *operationQueue;
@property (nonatomic, retain) NSArray *placementTypes;
@property (nonatomic, retain) NSMutableArray *validFeatureCalculators;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpc_activity;

- (void).cxx_destruct;
- (id)assetManagerTypes;
- (void)calculateAllFeatures:(id /* block */)arg1;
- (id)calculatorErrors;
- (id)initWithActivity:(id)arg1;
- (void)iterateThroughCalculators:(id /* block */)arg1;
- (id)lifeCycleHandler;
- (id)operationQueue;
- (id)parseErrorInfo:(id)arg1 calculator:(id)arg2;
- (id)placementTypes;
- (void)runFeatureCalculator:(id)arg1;
- (void)setAssetManagerTypes:(id)arg1;
- (void)setCalculatorErrors:(id)arg1;
- (void)setLifeCycleHandler:(id)arg1;
- (void)setPlacementTypes:(id)arg1;
- (void)setValidFeatureCalculators:(id)arg1;
- (void)setXpc_activity:(id)arg1;
- (id)taskDeferred;
- (id)validFeatureCalculators;
- (id)xpc_activity;

@end
