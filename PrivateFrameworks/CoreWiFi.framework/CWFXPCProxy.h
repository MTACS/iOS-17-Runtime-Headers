
@interface CWFXPCProxy : NSProxy {
    bool  _synchronous;
    id  _target;
}

@property (getter=isSynchronous, nonatomic) bool synchronous;
@property (nonatomic, retain) id target;

- (void).cxx_destruct;
- (id)__copyReplyBlockFromInvocation:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (bool)isSynchronous;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)setSynchronous:(bool)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
