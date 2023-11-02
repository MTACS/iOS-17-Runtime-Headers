
@interface SRSTCallServer : NSObject {
    _SRSTCallServer * _underlyingObject;
}

@property (nonatomic, readonly) SRSTCallState *currentState;
@property (readonly) _SRSTCallServer *underlyingObject;

- (void).cxx_destruct;
- (id)currentState;
- (id)init;
- (id)underlyingObject;

@end
