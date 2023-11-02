
@protocol SXContentScaleManager <NSObject>

@required

- (long long)contentScale;
- (double)contentScaleFactor;
- (void)decrease;
- (<SXContentScaleManagerDelegate> *)delegate;
- (void)increase;
- (void)reset;
- (void)setDelegate:(id <SXContentScaleManagerDelegate>)arg1;

@end
