
@protocol MXSourceHandlerDelegate

@required

- (void)diagnosticPayloadDidCacheToSourceDirectory;
- (void)metricPayloadDidCacheToSourceDirectory;

@end
