
@protocol _MXExtensionHostContextType <_MXExtensionContextType, _MXExtensionURLHandling>

@required

- (<_MXExtensionURLHandling> *)URLHandlingDelegate;
- (void)setURLHandlingDelegate:(id <_MXExtensionURLHandling>)arg1;

@end
