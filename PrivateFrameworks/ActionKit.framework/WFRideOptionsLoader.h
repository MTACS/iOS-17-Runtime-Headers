
@interface WFRideOptionsLoader : NSObject <WFActionEventObserver, WFDynamicEnumerationDataSource> {
    NSString * _appBundleIdentifier;
    NSMutableArray * _completionBlocks;
    <WFRideOptionsLoaderDelegate> * _delegate;
    CLPlacemark * _dropOffLocation;
    WFIntentExecutor * _executor;
    NSError * _loadingOptionsError;
    NSObject<OS_dispatch_queue> * _loadingOptionsQueue;
    unsigned long long  _loadingState;
    WFPaymentMethodParameter * _paymentMethodParameterParameter;
    NSArray * _paymentMethods;
    CLPlacemark * _pickupLocation;
    WFRideOptionParameter * _rideOptionParameterParameter;
    NSArray * _rideOptions;
}

@property (nonatomic, copy) NSString *appBundleIdentifier;
@property (nonatomic, readonly) NSMutableArray *completionBlocks;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFRideOptionsLoaderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) CLPlacemark *dropOffLocation;
@property (nonatomic, retain) WFIntentExecutor *executor;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSError *loadingOptionsError;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *loadingOptionsQueue;
@property (nonatomic) unsigned long long loadingState;
@property (nonatomic, retain) WFPaymentMethodParameter *paymentMethodParameterParameter;
@property (nonatomic, copy) NSArray *paymentMethods;
@property (nonatomic, copy) CLPlacemark *pickupLocation;
@property (nonatomic, retain) WFRideOptionParameter *rideOptionParameterParameter;
@property (nonatomic, copy) NSArray *rideOptions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (id)appBundleIdentifier;
- (id)completionBlocks;
- (id)delegate;
- (id)dropOffLocation;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (id)executor;
- (id)init;
- (void)loadPossibleStatesForEnumeration:(id)arg1 searchTerm:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)loadRideOptionsValueWithCompletion:(id /* block */)arg1;
- (id)loadingOptionsError;
- (id)loadingOptionsQueue;
- (unsigned long long)loadingState;
- (id)paymentMethodParameterParameter;
- (id)paymentMethods;
- (id)pickupLocation;
- (id)rideOptionParameterParameter;
- (id)rideOptions;
- (void)setAppBundleIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDropOffLocation:(id)arg1;
- (void)setExecutor:(id)arg1;
- (void)setLoadingOptionsError:(id)arg1;
- (void)setLoadingState:(unsigned long long)arg1;
- (void)setPaymentMethodParameterParameter:(id)arg1;
- (void)setPaymentMethods:(id)arg1;
- (void)setPickupLocation:(id)arg1;
- (void)setRideOptionParameterParameter:(id)arg1;
- (void)setRideOptions:(id)arg1;

@end
