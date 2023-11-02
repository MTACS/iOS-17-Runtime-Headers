
@interface CKContactMediaObject : CKCardMediaObject {
    NSDictionary * _contactMediaInfo;
    unsigned long long  _oopPreviewRequestCount;
    UIImage * _vCardImage;
    bool  _vCardParsingFailed;
    CNContactVCardSummary * _vCardSummary;
}

@property (nonatomic, retain) NSDictionary *contactMediaInfo;
@property (nonatomic) unsigned long long oopPreviewRequestCount;
@property (nonatomic, retain) UIImage *vCardImage;
@property (nonatomic) bool vCardParsingFailed;
@property (nonatomic, retain) CNContactVCardSummary *vCardSummary;

+ (id)UTITypes;
+ (id)fallbackFilenamePrefix;
+ (bool)isPreviewable;
+ (bool)shouldUseTranscoderGeneratedPreviewSize;

- (void).cxx_destruct;
- (id)_transcodeControllerSharedInstance;
- (id)attachmentSummary:(unsigned long long)arg1;
- (Class)balloonViewClass;
- (struct CGSize { double x1; double x2; })bbSize;
- (id)contactCardPayloadFileURL:(id)arg1;
- (id)contactMediaInfo;
- (void)generateOOPPreview;
- (bool)generatePreviewOutOfProcess;
- (id)generateThumbnailFillToSize:(struct CGSize { double x1; double x2; })arg1 contentAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (id)generateThumbnailForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)icon;
- (int)mediaType;
- (id)metricsCollectorMediaType;
- (unsigned long long)oopPreviewRequestCount;
- (Class)placeholderBalloonViewClass;
- (Class)previewBalloonViewClass;
- (id)previewCacheKey;
- (id)previewDispatchCache;
- (id)previewItemTitle;
- (id)previewItemURL;
- (void)setContactMediaInfo:(id)arg1;
- (void)setOopPreviewRequestCount:(unsigned long long)arg1;
- (void)setVCardImage:(id)arg1;
- (void)setVCardParsingFailed:(bool)arg1;
- (void)setVCardSummary:(id)arg1;
- (id)subtitle;
- (bool)supportsBlastDoor;
- (id)title;
- (id)vCardImage;
- (id)vCardImageOfSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)vCardParsingFailed;
- (id)vCardSummary;

@end
