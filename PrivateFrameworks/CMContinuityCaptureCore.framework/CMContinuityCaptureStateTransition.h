
@interface CMContinuityCaptureStateTransition : NSObject {
    id /* block */  _action;
    CMContinuityCaptureState * _dstState;
    CMContinuityCaptureStateMachineEvent * _event;
    id /* block */  _guard;
    CMContinuityCaptureState * _srcState;
}

@property (nonatomic, copy) id /* block */ action;
@property (nonatomic, retain) CMContinuityCaptureState *dstState;
@property (nonatomic, retain) CMContinuityCaptureStateMachineEvent *event;
@property (nonatomic, copy) id /* block */ guard;
@property (nonatomic, retain) CMContinuityCaptureState *srcState;

- (void).cxx_destruct;
- (id /* block */)action;
- (id)dstState;
- (id)event;
- (id /* block */)guard;
- (id)initWithAttributes:(id)arg1 dstState:(id)arg2 event:(id)arg3 guard:(id /* block */)arg4 action:(id /* block */)arg5;
- (void)setAction:(id /* block */)arg1;
- (void)setDstState:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)setGuard:(id /* block */)arg1;
- (void)setSrcState:(id)arg1;
- (id)srcState;
- (id)transactionFromStateOnEvent:(id)arg1 event:(id)arg2;

@end
