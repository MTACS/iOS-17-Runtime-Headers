
@interface IRMiLoConnectionBridge : NSObject {
    CLMiLoConnection * _miloConnection;
    <CLMiLoConnectionDelegate> * _miloConnectionDelegate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) CLMiLoConnection *miloConnection;
@property (nonatomic) <CLMiLoConnectionDelegate> *miloConnectionDelegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)connectServiceWithIdentifier:(id)arg1;
- (void)createMiLoConnection;
- (void)createServiceWithServiceType:(unsigned long long)arg1 locationTypes:(id)arg2;
- (void)deleteServiceWithIdentifier:(id)arg1;
- (void)disconnectServiceWithIdentifier:(id)arg1;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (id)labelObservationWithRequestIdentifier:(id)arg1 withPlaceIdentifier:(id)arg2;
- (id)miloConnection;
- (id)miloConnectionDelegate;
- (id)queue;
- (id)requestMiLoPrediction;
- (void)resetMiLoConnection;
- (void)setMiloConnection:(id)arg1;
- (void)setMiloConnectionDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (id)startUpdatingMicroLocationWithConfiguration:(id)arg1;

@end
