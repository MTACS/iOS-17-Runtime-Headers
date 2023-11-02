
@interface PKFieldDetector : NSObject <NFDigitalCarKeySessionDelegate, NFFieldDetectSessionDelegate, NFLoyaltyAndPaymentSessionDelegate> {
    <PKFieldDetectorDelegate> * _delegate;
    unsigned long long  _enablePersistentFieldDetectionReasons;
    NFFieldDetectSession * _fieldDetectSession;
    bool  _fieldDetectSessionRequested;
    unsigned long long  _fieldDetectSessionRetryCount;
    NSObject<OS_dispatch_queue> * _fieldDetectorSerialQueue;
    PKFieldProperties * _fieldProperties;
    NFDigitalCarKeySession * _fieldPropertiesLookupDigitalCarKeySession;
    NFLoyaltyAndPaymentSession * _fieldPropertiesLookupLoyaltySession;
    NSObject<NFSession> * _fieldPropertiesLookupSessionHandle;
    NSObject<OS_dispatch_source> * _fieldPropertiesLookupTimer;
    PKFieldProperties * _fieldPropertiesToLookup;
    unsigned long long  _fieldPropertieslookupSynchronizer;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _nfcRadioEnabled;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _replyQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKFieldDetectorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PKFieldProperties *fieldProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_endLookup;
- (void)_endLookupAndNotify;
- (void)_evaulatePersistentFieldDetectionEnablementReasons;
- (void)_invalidateFieldDetectSession;
- (void)_restartFieldDetectSession;
- (void)_setPersistentFieldDetectionEnabled:(bool)arg1;
- (void)_startFieldDetectSession;
- (void)_startLookup;
- (void)dealloc;
- (id)delegate;
- (void)fieldDetectSession:(id)arg1 didEnterFieldWithNotification:(id)arg2;
- (void)fieldDetectSessionDidEndUnexpectedly:(id)arg1;
- (void)fieldDetectSessionDidExitField:(id)arg1;
- (id)fieldProperties;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)loyaltyAndPaymentSession:(id)arg1 didEndTransaction:(id)arg2;
- (void)loyaltyAndPaymentSession:(id)arg1 didPerformValueAddedServiceTransactions:(id)arg2;
- (void)loyaltyAndPaymentSessionDidEndUnexpectedly:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)requestPersistentFieldDetectionEnabled:(bool)arg1 withReason:(unsigned long long)arg2;
- (void)session:(id)arg1 didEndTransaction:(id)arg2;
- (void)sessionDidEndUnexpectedly:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPersistentFieldDetectionEnabled:(bool)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)updateRadioState;

@end
