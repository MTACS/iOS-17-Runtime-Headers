
@protocol QLPreviewItemPrivateProtocol <QLPreviewItem>

@optional

- (NSString *)MIMEType;
- (NSURL *)alternateShareURL;
- (double)autoPlaybackPosition;
- (UIColor *)backgroundColorOverride;
- (bool)isPromisedItem;
- (NSString *)previewItemContentType;
- (NSDictionary *)previewItemDisplayState;
- (NSURL *)previewItemURLForDisplay;
- (NSDictionary *)previewOptions;
- (void)setPreviewItemDisplayState:(NSDictionary *)arg1;
- (void)setPreviewOptions:(NSDictionary *)arg1;

@end
