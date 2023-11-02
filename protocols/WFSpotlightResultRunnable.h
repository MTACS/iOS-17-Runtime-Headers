
@protocol WFSpotlightResultRunnable <NSSecureCoding, NSObject>

@required

- (WFWorkflowRunDescriptor *)runDescriptorForSurface:(unsigned long long)arg1;
- (WFWorkflowRunRequest *)runRequestForSurface:(unsigned long long)arg1;
- (NSString *)settingBiomeStreamIdentifier;

@end
