
@protocol MTLCommandEncoder <NSObject>

@required

- (<MTLDevice> *)device;
- (void)endEncoding;
- (void)insertDebugSignpost:(NSString *)arg1;
- (NSString *)label;
- (void)popDebugGroup;
- (void)pushDebugGroup:(NSString *)arg1;
- (void)setLabel:(NSString *)arg1;

@end
