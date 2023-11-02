
@protocol SXVisibilityReporting <NSObject>

@required

- (void)lock;
- (void)unlock;
- (void)updateVisibility;

@end
