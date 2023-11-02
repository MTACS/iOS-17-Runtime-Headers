
@interface CKWeakObjectCallbackProxy : NSObject {
    Protocol * _callbackProtocol;
    bool  _hadObject;
    id  _weakObject;
}

@property (nonatomic, readonly) Protocol *callbackProtocol;
@property (nonatomic, readonly) bool hadObject;
@property (nonatomic) id weakObject;

- (void).cxx_destruct;
- (id)callbackProtocol;
- (void)forwardInvocation:(id)arg1;
- (bool)hadObject;
- (id)initWithWeakObject:(id)arg1 callbackProtocol:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)setWeakObject:(id)arg1;
- (id)weakObject;

@end
