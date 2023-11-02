
@interface ICASAttachmentSnapshotData : NSObject <AADataEventType> {
    NSArray * _attachmentSnapshotSummary;
    NSArray * _docScanSnapshotSummary;
    NSArray * _drawingSnapshotSummary;
    NSArray * _tableSnapshotSummary;
}

@property (nonatomic, readonly) NSArray *attachmentSnapshotSummary;
@property (nonatomic, readonly) NSArray *docScanSnapshotSummary;
@property (nonatomic, readonly) NSArray *drawingSnapshotSummary;
@property (nonatomic, readonly) NSArray *tableSnapshotSummary;

+ (id)dataName;

- (void).cxx_destruct;
- (id)attachmentSnapshotSummary;
- (id)docScanSnapshotSummary;
- (id)drawingSnapshotSummary;
- (id)initWithAttachmentSnapshotSummary:(id)arg1 docScanSnapshotSummary:(id)arg2 drawingSnapshotSummary:(id)arg3 tableSnapshotSummary:(id)arg4;
- (id)tableSnapshotSummary;
- (id)toDict;

@end
