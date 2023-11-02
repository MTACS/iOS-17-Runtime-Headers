
@interface CKLocationMediaObject : CKContactMediaObject <MKAnnotation> {
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _coordinate;
}

@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)UTITypes;
+ (Class)__ck_attachmentItemClass;
+ (id)fallbackFilenamePrefix;
+ (bool)isPreviewable;
+ (id)placeholderPreviewCache;
+ (id)placeholderPreviewForWidth:(double)arg1 orientation:(BOOL)arg2;
+ (id)vcardDataFromCLLocation:(id)arg1;

- (id)attachmentSummary:(unsigned long long)arg1;
- (Class)balloonViewClass;
- (id)bbPreviewFillToSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })bbSize;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)generatePlaceholderThumbnailFillToSize:(struct CGSize { double x1; double x2; })arg1 contentAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (id)generatePlaceholderThumbnailForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)generateThumbnailFillToSize:(struct CGSize { double x1; double x2; })arg1 contentAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (id)initWithTransfer:(id)arg1 context:(id)arg2 forceInlinePreview:(bool)arg3;
- (bool)isDroppedPin;
- (id)mapItem;
- (int)mediaType;
- (id)metricsCollectorMediaType;
- (id)pasteboardItemProvider;
- (Class)placeholderBalloonViewClass;
- (Class)previewBalloonViewClass;
- (id)previewCacheKeyWithOrientation:(BOOL)arg1;
- (id)previewCachesFileURLWithOrientation:(BOOL)arg1 extension:(id)arg2 generateIntermediaries:(bool)arg3;
- (id)previewForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)previewItemTitle;
- (id)rtfDocumentItemsWithFormatString:(id)arg1 selectedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (id)title;
- (id)transcriptTraitCollection;
- (id)vCardURLProperties;

@end