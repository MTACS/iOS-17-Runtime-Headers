
@protocol GEOMotionContextProvider <NSObject>

@required

- (<GEOMotionContextProviderDelegate> *)motionDelegate;
- (void)setMotionDelegate:(id <GEOMotionContextProviderDelegate>)arg1;
- (void)startMotionUpdates;
- (void)stopMotionUpdates;

@end
