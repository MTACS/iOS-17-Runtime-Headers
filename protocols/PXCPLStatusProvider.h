
@protocol PXCPLStatusProvider <NSObject>

@required

- (double)nextOverrideResumeTimeInterval;
- (PXCPLStatus *)status;

@end
