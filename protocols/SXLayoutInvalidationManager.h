
@protocol SXLayoutInvalidationManager <SXLayoutInvalidator>

@required

- (<SXLayoutInvalidationManagerDelegate> *)delegate;
- (void)setDelegate:(id <SXLayoutInvalidationManagerDelegate>)arg1;

@end
