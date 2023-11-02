
@interface MDARSessionObserver : NSObject <ARSessionDelegate> {
    NSObject<OS_dispatch_queue> * _delegateQueue;
    struct ARSessionObserver { int (**x1)(); } * _observer;
    ARSession * _session;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct ARSessionObserver { int (**x1)(); }*observer;
@property (nonatomic) ARSession *session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithObserver:(struct ARSessionObserver { int (**x1)(); }*)arg1 onQueue:(id)arg2;
- (struct ARSessionObserver { int (**x1)(); }*)observer;
- (id)session;
- (void)session:(id)arg1 didChangeGeoTrackingStatus:(id)arg2;
- (void)session:(id)arg1 didUpdateAnchors:(id)arg2;
- (void)session:(id)arg1 didUpdateFrame:(id)arg2;
- (void)setObserver:(struct ARSessionObserver { int (**x1)(); }*)arg1;
- (void)setSession:(id)arg1;

@end
