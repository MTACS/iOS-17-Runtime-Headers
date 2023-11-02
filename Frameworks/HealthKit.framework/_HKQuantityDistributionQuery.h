
@interface _HKQuantityDistributionQuery : HKQuery <HKQuantityDistributionQueryClientInterface> {
    NSDate * _anchorDate;
    id /* block */  _completionHandler;
    long long  _contextStyle;
    NSDate * _endDate;
    HKQuantity * _histogramAnchor;
    HKQuantity * _histogramBucketSize;
    NSDateComponents * _intervalComponents;
    unsigned long long  _options;
    NSDate * _startDate;
}

@property (nonatomic, readonly) NSDate *anchorDate;
@property (nonatomic, readonly) id /* block */ completionHandler;
@property (nonatomic, readonly) long long contextStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKQuantity *histogramAnchor;
@property (nonatomic, readonly) HKQuantity *histogramBucketSize;
@property (nonatomic, readonly) NSDateComponents *intervalComponents;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) NSDate *startDate;
@property (readonly) Class superclass;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
+ (void)configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (id)anchorDate;
- (void)client_deliverDistributionCollection:(id)arg1 forQuery:(id)arg2;
- (id /* block */)completionHandler;
- (long long)contextStyle;
- (id)endDate;
- (id)histogramAnchor;
- (id)histogramBucketSize;
- (id)initWithQuantityType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 contextStyle:(long long)arg4 predicate:(id)arg5 anchorDate:(id)arg6 intervalComponents:(id)arg7 histogramAnchor:(id)arg8 histogramBucketSize:(id)arg9 options:(unsigned long long)arg10 completionHandler:(id /* block */)arg11;
- (id)intervalComponents;
- (unsigned long long)options;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (id)startDate;

@end
