
@interface ICASNoteAttachmentItemData : NSObject <AADataEventType> {
    NSNumber * _totalCountOfNotesWithAttachmentDeepLink;
    NSNumber * _totalCountOfNotesWithAttachmentDocScan;
    NSNumber * _totalCountOfNotesWithAttachmentFullscreenDrawing;
    NSNumber * _totalCountOfNotesWithAttachmentInlineDrawingV1;
    NSNumber * _totalCountOfNotesWithAttachmentInlineDrawingV2;
    NSNumber * _totalCountOfNotesWithAttachmentMapLink;
    NSNumber * _totalCountOfNotesWithAttachmentOther;
    NSNumber * _totalCountOfNotesWithAttachmentPaperKit;
    NSNumber * _totalCountOfNotesWithAttachmentRichUrl;
    NSNumber * _totalCountOfNotesWithAttachmentTables;
    NSNumber * _totalCountOfNotesWithFolderLinks;
    NSNumber * _totalCountOfNotesWithNoteLinks;
    NSNumber * _totalCountOfNotesWithPaperDocument;
    NSNumber * _totalCountOfNotesWithPdfDocument;
}

@property (nonatomic, readonly) NSNumber *totalCountOfNotesWithAttachmentDeepLink;
@property (nonatomic, readonly) NSNumber *totalCountOfNotesWithAttachmentDocScan;
@property (nonatomic, readonly) NSNumber *totalCountOfNotesWithAttachmentFullscreenDrawing;
@property (nonatomic, readonly) NSNumber *totalCountOfNotesWithAttachmentInlineDrawingV1;
@property (nonatomic, readonly) NSNumber *totalCountOfNotesWithAttachmentInlineDrawingV2;
@property (nonatomic, readonly) NSNumber *totalCountOfNotesWithAttachmentMapLink;
@property (nonatomic, readonly) NSNumber *totalCountOfNotesWithAttachmentOther;
@property (nonatomic, readonly) NSNumber *totalCountOfNotesWithAttachmentPaperKit;
@property (nonatomic, readonly) NSNumber *totalCountOfNotesWithAttachmentRichUrl;
@property (nonatomic, readonly) NSNumber *totalCountOfNotesWithAttachmentTables;
@property (nonatomic, readonly) NSNumber *totalCountOfNotesWithFolderLinks;
@property (nonatomic, readonly) NSNumber *totalCountOfNotesWithNoteLinks;
@property (nonatomic, readonly) NSNumber *totalCountOfNotesWithPaperDocument;
@property (nonatomic, readonly) NSNumber *totalCountOfNotesWithPdfDocument;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithTotalCountOfNotesWithAttachmentDocScan:(id)arg1 totalCountOfNotesWithAttachmentInlineDrawingV1:(id)arg2 totalCountOfNotesWithAttachmentInlineDrawingV2:(id)arg3 totalCountOfNotesWithAttachmentPaperKit:(id)arg4 totalCountOfNotesWithAttachmentFullscreenDrawing:(id)arg5 totalCountOfNotesWithAttachmentTables:(id)arg6 totalCountOfNotesWithAttachmentOther:(id)arg7 totalCountOfNotesWithAttachmentRichUrl:(id)arg8 totalCountOfNotesWithAttachmentMapLink:(id)arg9 totalCountOfNotesWithAttachmentDeepLink:(id)arg10 totalCountOfNotesWithPaperDocument:(id)arg11 totalCountOfNotesWithPdfDocument:(id)arg12 totalCountOfNotesWithNoteLinks:(id)arg13 totalCountOfNotesWithFolderLinks:(id)arg14;
- (id)toDict;
- (id)totalCountOfNotesWithAttachmentDeepLink;
- (id)totalCountOfNotesWithAttachmentDocScan;
- (id)totalCountOfNotesWithAttachmentFullscreenDrawing;
- (id)totalCountOfNotesWithAttachmentInlineDrawingV1;
- (id)totalCountOfNotesWithAttachmentInlineDrawingV2;
- (id)totalCountOfNotesWithAttachmentMapLink;
- (id)totalCountOfNotesWithAttachmentOther;
- (id)totalCountOfNotesWithAttachmentPaperKit;
- (id)totalCountOfNotesWithAttachmentRichUrl;
- (id)totalCountOfNotesWithAttachmentTables;
- (id)totalCountOfNotesWithFolderLinks;
- (id)totalCountOfNotesWithNoteLinks;
- (id)totalCountOfNotesWithPaperDocument;
- (id)totalCountOfNotesWithPdfDocument;

@end
