
@interface _ICNAAttachmentReportToNote : NSObject {
    NSMutableDictionary * _countOfAttachmentByUTI;
    unsigned long long  _countOfAttachments;
    unsigned long long  _countOfFullscreenDrawingStrokes;
    unsigned long long  _countOfInlineDrawingV1FingerStrokes;
    unsigned long long  _countOfInlineDrawingV1PencilStrokes;
    unsigned long long  _countOfInlineDrawingV2FingerStrokes;
    unsigned long long  _countOfInlineDrawingV2PencilStrokes;
    bool  _hasDeepLink;
    bool  _hasImages;
    bool  _hasSafariHighlight;
}

@property (nonatomic, retain) NSMutableDictionary *countOfAttachmentByUTI;
@property (nonatomic) unsigned long long countOfAttachments;
@property (nonatomic) unsigned long long countOfFullscreenDrawingStrokes;
@property (nonatomic) unsigned long long countOfInlineDrawingV1FingerStrokes;
@property (nonatomic) unsigned long long countOfInlineDrawingV1PencilStrokes;
@property (nonatomic) unsigned long long countOfInlineDrawingV2FingerStrokes;
@property (nonatomic) unsigned long long countOfInlineDrawingV2PencilStrokes;
@property (nonatomic) bool hasDeepLink;
@property (nonatomic) bool hasImages;
@property (nonatomic) bool hasSafariHighlight;

- (void).cxx_destruct;
- (id)countOfAttachmentByUTI;
- (unsigned long long)countOfAttachments;
- (unsigned long long)countOfFullscreenDrawingStrokes;
- (unsigned long long)countOfInlineDrawingV1FingerStrokes;
- (unsigned long long)countOfInlineDrawingV1PencilStrokes;
- (unsigned long long)countOfInlineDrawingV2FingerStrokes;
- (unsigned long long)countOfInlineDrawingV2PencilStrokes;
- (bool)hasDeepLink;
- (bool)hasImages;
- (bool)hasSafariHighlight;
- (id)init;
- (void)reportAttachmentTypeUTI:(id)arg1;
- (void)reportDrawingWithSnapshotData:(id)arg1;
- (void)setCountOfAttachmentByUTI:(id)arg1;
- (void)setCountOfAttachments:(unsigned long long)arg1;
- (void)setCountOfFullscreenDrawingStrokes:(unsigned long long)arg1;
- (void)setCountOfInlineDrawingV1FingerStrokes:(unsigned long long)arg1;
- (void)setCountOfInlineDrawingV1PencilStrokes:(unsigned long long)arg1;
- (void)setCountOfInlineDrawingV2FingerStrokes:(unsigned long long)arg1;
- (void)setCountOfInlineDrawingV2PencilStrokes:(unsigned long long)arg1;
- (void)setHasDeepLink:(bool)arg1;
- (void)setHasImages:(bool)arg1;
- (void)setHasSafariHighlight:(bool)arg1;

@end
