
@protocol HDSPSystemReadyProvider <NSObject>

@required

- (<HDSPSystemReadyDelegate> *)delegate;
- (bool)isSystemReady;
- (void)setDelegate:(id <HDSPSystemReadyDelegate>)arg1;

@end
