
@interface CKImageMediaObject : CKMediaObject <NSSecureCoding> {
    NSURL * _appendedBundleURL;
    CKImageData * _backgroundImageData;
    CKImageData * _imageData;
    NSString * _irisVideoPath;
    bool  _isSticker;
    PHLivePhoto * _livePhoto;
    struct CGSize { 
        double width; 
        double height; 
    }  _originalSize;
    IMSticker * _sticker;
    UIImage * _thumbnail;
}

@property (nonatomic, readonly) CKImageData *imageData;
@property (nonatomic, readonly) bool isIrisAsset;
@property (nonatomic, readonly) bool isSticker;
@property (nonatomic, readonly) PHLivePhoto *livePhoto;
@property (getter=isScreenshot, nonatomic, readonly) bool screenshot;
@property (nonatomic, retain) IMSticker *sticker;
@property (nonatomic, retain) UIImage *thumbnail;

+ (id)UTITypes;
+ (Class)__ck_attachmentItemClass;
+ (id)fallbackFilenamePrefix;
+ (Class)imageDataClass;
+ (bool)isPreviewable;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attachmentSummary:(unsigned long long)arg1;
- (id)bbPreviewFillToSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })bbSize;
- (id)calculateIrisVideoPath;
- (bool)canExport;
- (bool)canShareItem;
- (void)encodeWithCoder:(id)arg1;
- (id)generatePreviewFromThumbnail:(id)arg1 width:(double)arg2 orientation:(BOOL)arg3;
- (id)generateThumbnailFillToSize:(struct CGSize { double x1; double x2; })arg1 contentAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (id)generateThumbnailForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)getIrisVideoPath;
- (id)imageData;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransfer:(id)arg1 context:(id)arg2 forceInlinePreview:(bool)arg3;
- (bool)isIrisAsset;
- (bool)isPhotosCompatible;
- (bool)isScreenshot;
- (bool)isSticker;
- (void)legacyExport;
- (id)livePhoto;
- (id)location;
- (int)mediaType;
- (id)metricsCollectorMediaType;
- (struct CGSize { double x1; double x2; })originalSize;
- (id)pasteboardItemProvider;
- (id)previewItemTitle;
- (id)previewItemURL;
- (id)rtfDocumentItemsWithFormatString:(id)arg1 selectedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setSticker:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (id)sticker;
- (bool)supportsUnknownSenderPreview;
- (id)thumbnail;
- (bool)validatePreviewFormat;

@end
