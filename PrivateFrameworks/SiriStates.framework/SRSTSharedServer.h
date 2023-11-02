
@interface SRSTSharedServer : NSObject {
    _SRSTSharedServer * _underlyingObject;
}

@property (nonatomic, readonly) SRSTSharedState *currentState;
@property (readonly) _SRSTSharedServer *underlyingObject;

- (void).cxx_destruct;
- (id)currentState;
- (id)init;
- (id)underlyingObject;

@end
