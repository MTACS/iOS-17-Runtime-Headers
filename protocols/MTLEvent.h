
@protocol MTLEvent <NSObject>

@required

- (<MTLDevice> *)device;
- (NSString *)label;
- (void)setLabel:(NSString *)arg1;

@end
