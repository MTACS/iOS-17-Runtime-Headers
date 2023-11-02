
@interface ICASScrapPaperAttachmentItemData : NSObject <AADataEventType> {
    NSNumber * _totalCountOfScrapPapersWithAttachmentDeepLink;
    NSNumber * _totalCountOfScrapPapersWithAttachmentDocScan;
    NSNumber * _totalCountOfScrapPapersWithAttachmentFullscreenDrawing;
    NSNumber * _totalCountOfScrapPapersWithAttachmentInlineDrawingV1;
    NSNumber * _totalCountOfScrapPapersWithAttachmentInlineDrawingV2;
    NSNumber * _totalCountOfScrapPapersWithAttachmentMapLink;
    NSNumber * _totalCountOfScrapPapersWithAttachmentOther;
    NSNumber * _totalCountOfScrapPapersWithAttachmentPaperKit;
    NSNumber * _totalCountOfScrapPapersWithAttachmentRichUrl;
    NSNumber * _totalCountOfScrapPapersWithAttachmentTables;
}

@property (nonatomic, readonly) NSNumber *totalCountOfScrapPapersWithAttachmentDeepLink;
@property (nonatomic, readonly) NSNumber *totalCountOfScrapPapersWithAttachmentDocScan;
@property (nonatomic, readonly) NSNumber *totalCountOfScrapPapersWithAttachmentFullscreenDrawing;
@property (nonatomic, readonly) NSNumber *totalCountOfScrapPapersWithAttachmentInlineDrawingV1;
@property (nonatomic, readonly) NSNumber *totalCountOfScrapPapersWithAttachmentInlineDrawingV2;
@property (nonatomic, readonly) NSNumber *totalCountOfScrapPapersWithAttachmentMapLink;
@property (nonatomic, readonly) NSNumber *totalCountOfScrapPapersWithAttachmentOther;
@property (nonatomic, readonly) NSNumber *totalCountOfScrapPapersWithAttachmentPaperKit;
@property (nonatomic, readonly) NSNumber *totalCountOfScrapPapersWithAttachmentRichUrl;
@property (nonatomic, readonly) NSNumber *totalCountOfScrapPapersWithAttachmentTables;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithTotalCountOfScrapPapersWithAttachmentDocScan:(id)arg1 totalCountOfScrapPapersWithAttachmentInlineDrawingV1:(id)arg2 totalCountOfScrapPapersWithAttachmentInlineDrawingV2:(id)arg3 totalCountOfScrapPapersWithAttachmentPaperKit:(id)arg4 totalCountOfScrapPapersWithAttachmentFullscreenDrawing:(id)arg5 totalCountOfScrapPapersWithAttachmentTables:(id)arg6 totalCountOfScrapPapersWithAttachmentOther:(id)arg7 totalCountOfScrapPapersWithAttachmentRichUrl:(id)arg8 totalCountOfScrapPapersWithAttachmentMapLink:(id)arg9 totalCountOfScrapPapersWithAttachmentDeepLink:(id)arg10;
- (id)toDict;
- (id)totalCountOfScrapPapersWithAttachmentDeepLink;
- (id)totalCountOfScrapPapersWithAttachmentDocScan;
- (id)totalCountOfScrapPapersWithAttachmentFullscreenDrawing;
- (id)totalCountOfScrapPapersWithAttachmentInlineDrawingV1;
- (id)totalCountOfScrapPapersWithAttachmentInlineDrawingV2;
- (id)totalCountOfScrapPapersWithAttachmentMapLink;
- (id)totalCountOfScrapPapersWithAttachmentOther;
- (id)totalCountOfScrapPapersWithAttachmentPaperKit;
- (id)totalCountOfScrapPapersWithAttachmentRichUrl;
- (id)totalCountOfScrapPapersWithAttachmentTables;

@end
