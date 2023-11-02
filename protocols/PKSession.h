
@protocol PKSession <NSObject>

@required

- (<PKSessionDelegate> *)delegate;
- (void)endSession;
- (void)setDelegate:(id <PKSessionDelegate>)arg1;
- (unsigned long long)state;

@end
