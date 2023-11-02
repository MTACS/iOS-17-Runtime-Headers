
@protocol MUExternalActionHandling <NSObject>

@required

- (void)handleAppClip:(GEOAppStoreAppClip *)arg1 options:(MUExternalActionHandlingOptions *)arg2;
- (void)handleMapsExtension:(_MXExtension *)arg1 usingAppStoreApp:(GEOAppleMediaServicesResult *)arg2 options:(MUExternalActionHandlingOptions *)arg3;
- (void)handleQuickLink:(GEOQuickLink *)arg1 options:(MUExternalActionHandlingOptions *)arg2;

@end
