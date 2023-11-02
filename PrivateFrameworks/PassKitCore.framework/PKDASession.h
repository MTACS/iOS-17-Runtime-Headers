
@interface PKDASession : NSObject <DASessionDelegate, PKSession> {
    <PKSessionDelegate> * _delegate;
    DASession * _session;
    _Atomic unsigned int  _sessionState;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) DASession *session;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)daSession:(id)arg1 didBecomeActive:(id)arg2;
- (void)daSession:(id)arg1 didEnd:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)endSession;
- (id)initWithDelegate:(id)arg1;
- (id)session;
- (void)setDelegate:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (bool)startSession;
- (unsigned long long)state;

@end
