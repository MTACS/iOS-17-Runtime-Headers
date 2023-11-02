
@interface PRBTGroupLocalizer : NSObject <PRBTLocalizerDelegate> {
    <PRBTGroupLocalizerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSMutableArray * _localizerArray;
    NSMutableArray * _localizerShouldRangeArray;
    NSMutableArray * _localizerStateArray;
    NSObject<OS_os_log> * _logger;
    NSObject<OS_dispatch_queue> * _proximityQueue;
    NSMutableDictionary * _uuidIndexMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PRBTGroupLocalizerDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *localizerArray;
@property (nonatomic, retain) NSMutableArray *localizerShouldRangeArray;
@property (nonatomic, retain) NSMutableArray *localizerStateArray;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *proximityQueue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableDictionary *uuidIndexMap;

- (void).cxx_destruct;
- (void)btLocalizerChangedState:(unsigned long long)arg1 onItem:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (void)didFailWithError:(id)arg1 onItem:(id)arg2;
- (void)didUpdateBTProximity:(id)arg1;
- (void)informDelegateRangingStarted:(id)arg1 withError:(id)arg2;
- (void)informDelegateRangingStopped:(id)arg1 withError:(id)arg2;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 id:(id)arg3;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 id:(id)arg3 isUT:(bool)arg4;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 id:(id)arg3 isUT:(bool)arg4 withAnalytics:(bool)arg5;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 id:(id)arg3 withAnalytics:(bool)arg4;
- (id)localizerArray;
- (id)localizerShouldRangeArray;
- (id)localizerStateArray;
- (id)proximityQueue;
- (bool)restartRangingOn:(id)arg1 withError:(id*)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setLocalizerArray:(id)arg1;
- (void)setLocalizerShouldRangeArray:(id)arg1;
- (void)setLocalizerStateArray:(id)arg1;
- (void)setProximityQueue:(id)arg1;
- (void)setUuidIndexMap:(id)arg1;
- (bool)startRangingOn:(id)arg1 withError:(id*)arg2;
- (bool)stopRangingOn:(id)arg1 withError:(id*)arg2;
- (void)updateDelegateWithSelector:(SEL)arg1 object:(id)arg2;
- (id)uuidIndexMap;
- (void)willIntegrateBTRSSI:(id)arg1;

@end
