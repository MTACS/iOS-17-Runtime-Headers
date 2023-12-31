
@protocol MTLCaptureScope <NSObject>

@required

- (void)beginScope;
- (<MTLCommandQueue> *)commandQueue;
- (<MTLDevice> *)device;
- (void)endScope;
- (NSString *)label;
- (void)setLabel:(NSString *)arg1;

@end
