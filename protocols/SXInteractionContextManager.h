
@protocol SXInteractionContextManager <NSObject>

@required

- (void)addProvider:(id <SXInteractionContextProviding>)arg1;
- (<SXInteractionContextManagerDelegate> *)delegate;
- (void)registerOnView:(UIView *)arg1;
- (void)setDelegate:(id <SXInteractionContextManagerDelegate>)arg1;

@end
