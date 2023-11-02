
@interface MTRDevice : NSObject {
    MTRAsyncCallbackWorkQueue * _asyncCallbackWorkQueue;
    void * _currentReadClient;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    MTRDeviceController * _deviceController;
    NSDate * _estimatedStartTime;
    NSDate * _estimatedStartTimeFromGeneralDiagnosticsUpTime;
    NSMutableDictionary * _expectedValueCache;
    unsigned long long  _expectedValueNextID;
    bool  _expirationCheckScheduled;
    unsigned char  _fabricIndex;
    unsigned int  _lastSubscriptionAttemptWait;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSNumber * _nodeID;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _readCache;
    bool  _reattemptingSubscription;
    unsigned long long  _state;
    bool  _subscriptionActive;
    NSArray * _unreportedEvents;
    MTRWeakReference * _weakDelegate;
}

@property (nonatomic, readonly) MTRAsyncCallbackWorkQueue *asyncCallbackWorkQueue;
@property (nonatomic) void*currentReadClient;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic, readonly) MTRDeviceController *deviceController;
@property (nonatomic, readonly) NSDate *estimatedStartTime;
@property (nonatomic, retain) NSDate *estimatedStartTimeFromGeneralDiagnosticsUpTime;
@property (nonatomic, retain) NSMutableDictionary *expectedValueCache;
@property (nonatomic) unsigned long long expectedValueNextID;
@property (nonatomic) bool expirationCheckScheduled;
@property (nonatomic) unsigned char fabricIndex;
@property (nonatomic) unsigned int lastSubscriptionAttemptWait;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, readonly, copy) NSNumber *nodeID;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSMutableDictionary *readCache;
@property (nonatomic) bool reattemptingSubscription;
@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic) bool subscriptionActive;
@property (nonatomic, retain) NSArray *unreportedEvents;
@property (nonatomic, retain) MTRWeakReference *weakDelegate;

+ (id)deviceWithNodeID:(id)arg1 controller:(id)arg2;
+ (id)deviceWithNodeID:(unsigned long long)arg1 deviceController:(id)arg2;

- (void).cxx_destruct;
- (bool)_attributeDataValue:(id)arg1 isEqualToDataValue:(id)arg2;
- (id)_attributeValueDictionaryForAttributePath:(id)arg1;
- (void)_changeState:(unsigned long long)arg1;
- (void)_checkExpiredExpectedValues;
- (id)_getAttributesToReportWithNewExpectedValues:(id)arg1 expirationTime:(id)arg2 expectedValueID:(unsigned long long*)arg3;
- (id)_getAttributesToReportWithReportedValues:(id)arg1;
- (void)_handleAttributeReport:(id)arg1;
- (void)_handleEventReport:(id)arg1;
- (void)_handleResubscriptionNeeded;
- (void)_handleSubscriptionError:(id)arg1;
- (void)_handleSubscriptionEstablished;
- (void)_handleSubscriptionReset;
- (void)_handleUnsolicitedMessageFromPublisher;
- (void)_performScheduledExpirationCheck;
- (void)_reattemptSubscriptionNowIfNeeded;
- (void)_removeExpectedValueForAttributePath:(id)arg1 expectedValueID:(unsigned long long)arg2;
- (void)_reportAttributes:(id)arg1;
- (void)_setExpectedValue:(id)arg1 attributePath:(id)arg2 expirationTime:(id)arg3 shouldReportValue:(bool*)arg4 attributeValueToReport:(id*)arg5 expectedValueID:(unsigned long long)arg6;
- (void)_setupSubscription;
- (bool)_subscriptionAbleToReport;
- (id)asyncCallbackWorkQueue;
- (void*)currentReadClient;
- (id)delegateQueue;
- (id)description;
- (id)deviceController;
- (id)estimatedStartTime;
- (id)estimatedStartTimeFromGeneralDiagnosticsUpTime;
- (id)expectedValueCache;
- (unsigned long long)expectedValueNextID;
- (bool)expirationCheckScheduled;
- (unsigned char)fabricIndex;
- (id)initWithNodeID:(id)arg1 controller:(id)arg2;
- (void)invalidate;
- (void)invokeCommandWithEndpointID:(id)arg1 clusterID:(id)arg2 commandID:(id)arg3 commandFields:(id)arg4 expectedValues:(id)arg5 expectedValueInterval:(id)arg6 timedInvokeTimeout:(id)arg7 clientQueue:(id)arg8 completion:(id /* block */)arg9;
- (void)invokeCommandWithEndpointID:(id)arg1 clusterID:(id)arg2 commandID:(id)arg3 commandFields:(id)arg4 expectedValues:(id)arg5 expectedValueInterval:(id)arg6 timedInvokeTimeout:(id)arg7 queue:(id)arg8 completion:(id /* block */)arg9;
- (unsigned int)lastSubscriptionAttemptWait;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)newBaseDevice;
- (id)nodeID;
- (void)nodeMayBeAdvertisingOperational;
- (void)openCommissioningWindowWithDiscriminator:(id)arg1 duration:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)openCommissioningWindowWithSetupPasscode:(id)arg1 discriminator:(id)arg2 duration:(id)arg3 queue:(id)arg4 completion:(id /* block */)arg5;
- (id)queue;
- (id)readAttributeWithEndpointID:(id)arg1 clusterID:(id)arg2 attributeID:(id)arg3 params:(id)arg4;
- (id)readCache;
- (bool)reattemptingSubscription;
- (void)removeExpectedValueForAttributePath:(id)arg1 expectedValueID:(unsigned long long)arg2;
- (void)removeExpectedValuesForAttributePaths:(id)arg1 expectedValueID:(unsigned long long)arg2;
- (void)setCurrentReadClient:(void*)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setDelegateQueue:(id)arg1;
- (void)setEstimatedStartTimeFromGeneralDiagnosticsUpTime:(id)arg1;
- (void)setExpectedValueCache:(id)arg1;
- (void)setExpectedValueNextID:(unsigned long long)arg1;
- (void)setExpectedValues:(id)arg1 expectedValueInterval:(id)arg2;
- (void)setExpectedValues:(id)arg1 expectedValueInterval:(id)arg2 expectedValueID:(unsigned long long*)arg3;
- (void)setExpirationCheckScheduled:(bool)arg1;
- (void)setFabricIndex:(unsigned char)arg1;
- (void)setLastSubscriptionAttemptWait:(unsigned int)arg1;
- (void)setQueue:(id)arg1;
- (void)setReadCache:(id)arg1;
- (void)setReattemptingSubscription:(bool)arg1;
- (void)setSubscriptionActive:(bool)arg1;
- (void)setUnreportedEvents:(id)arg1;
- (void)setWeakDelegate:(id)arg1;
- (unsigned long long)state;
- (bool)subscriptionActive;
- (id)unreportedEvents;
- (id)weakDelegate;
- (void)writeAttributeWithEndpointID:(id)arg1 clusterID:(id)arg2 attributeID:(id)arg3 value:(id)arg4 expectedValueInterval:(id)arg5 timedWriteTimeout:(id)arg6;

@end