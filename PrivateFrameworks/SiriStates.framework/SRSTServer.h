
@interface SRSTServer : NSObject {
    _SRSTServer * _underlyingObject;
}

@property (nonatomic, readonly) SRSTState *currentState;
@property (readonly) _SRSTServer *underlyingObject;

- (void).cxx_destruct;
- (id)currentState;
- (id)init;
- (id)underlyingObject;

@end
