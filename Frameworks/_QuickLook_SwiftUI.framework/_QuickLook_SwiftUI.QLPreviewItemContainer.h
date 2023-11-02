
@interface _QuickLook_SwiftUI.QLPreviewItemContainer : NSObject <QLPreviewItem> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  previewItemURL;
}

@property (nonatomic, readonly) long long hash;
@property (nonatomic, copy) NSURL *previewItemURL;

- (void).cxx_destruct;
- (long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)previewItemURL;
- (void)setPreviewItemURL:(id)arg1;

@end
