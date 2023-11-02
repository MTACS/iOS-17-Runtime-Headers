
@interface CKVDonationManager : NSObject <CKVDonateRequestDelegate> {
    CKVDonateRequest * _activeRequest;
    double  _donationTimeout;
    unsigned int  _eventIdCounter;
    NSObject<OS_dispatch_queue> * _executionQueue;
    NSObject<OS_dispatch_queue> * _registryQueue;
    CKVQueue * _requestQueue;
    CKVDonateRequestValidator * _requestValidator;
    bool  _suspended;
    NSObject<OS_os_transaction> * _transaction;
    unsigned int  _transactionCounter;
    CKVIndexUpdaterFactory * _updaterFactory;
}

@property (nonatomic, readonly) CKVDonateRequestValidator *requestValidator;
@property (nonatomic, readonly) CKVIndexUpdaterFactory *updaterFactory;

- (void).cxx_destruct;
- (void)_beginTransaction;
- (void)_completeActiveRequest:(bool)arg1;
- (void)_endTransaction;
- (void)_handleNextRequest;
- (bool)_isActiveRequestId:(unsigned int)arg1;
- (void)completeRequest:(id)arg1;
- (id)init;
- (id)initWithDonationTimeout:(double)arg1 indexManager:(id)arg2 settings:(id)arg3;
- (id)requestValidator;
- (void)resume;
- (void)submitRequest:(id)arg1;
- (void)suspend;
- (id)updaterFactory;

@end
