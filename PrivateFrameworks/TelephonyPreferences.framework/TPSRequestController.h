
@interface TPSRequestController : NSObject {
    NSMapTable * _delegateToQueue;
    TPSRequest * _pendingRequest;
    NSMutableOrderedSet * _requests;
    NSObject<OS_dispatch_queue> * _serialDispatchQueue;
    CoreTelephonyClient * _telephonyClient;
}

@property (nonatomic, readonly) NSMapTable *delegateToQueue;
@property (nonatomic, retain) TPSRequest *pendingRequest;
@property (nonatomic, retain) NSMutableOrderedSet *requests;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialDispatchQueue;
@property (nonatomic, readonly) CoreTelephonyClient *telephonyClient;

- (void).cxx_destruct;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)addRequest:(id)arg1;
- (id)delegateToQueue;
- (void)execute;
- (void)executeRequest:(id)arg1;
- (id)init;
- (id)pendingRequest;
- (void)postResponse:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (id)requests;
- (id)serialDispatchQueue;
- (void)setPendingRequest:(id)arg1;
- (void)setRequests:(id)arg1;
- (id)telephonyClient;

@end
