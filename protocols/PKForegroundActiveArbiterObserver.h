
@protocol PKForegroundActiveArbiterObserver <NSObject>

@required

- (void)foregroundActiveArbiter:(id <PKForegroundActiveArbiter>)arg1 didUpdateForegroundActiveState:(struct { bool x1; bool x2; })arg2;

@end
