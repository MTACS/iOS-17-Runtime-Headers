
@protocol MTLCommandBufferEncoderInfo <NSObject>

@required

- (NSArray *)debugSignposts;
- (long long)errorState;
- (NSString *)label;

@end
