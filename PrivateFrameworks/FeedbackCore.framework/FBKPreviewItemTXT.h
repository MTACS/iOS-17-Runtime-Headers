
@interface FBKPreviewItemTXT : NSURL <QLPreviewItem>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *previewItemTitle;
@property (nonatomic, readonly) NSURL *previewItemURL;
@property (readonly) Class superclass;

- (id)previewItemContentType;
- (id)previewItemURL;

@end
