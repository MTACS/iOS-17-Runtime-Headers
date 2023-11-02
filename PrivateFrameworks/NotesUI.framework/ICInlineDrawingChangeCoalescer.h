
@interface ICInlineDrawingChangeCoalescer : NSObject {
    ICAttachment * _attachment;
    NSManagedObjectContext * _handwritingRecognitionContext;
    PKDrawing * _latestDrawing;
    NSManagedObjectContext * _mainContext;
    unsigned long long  _numberOfChanges;
    ICSelectorDelayer * _processChangesSelectorDelayer;
    NSManagedObjectContext * _workerContext;
}

@property (nonatomic, retain) ICAttachment *attachment;
@property (nonatomic, retain) NSManagedObjectContext *handwritingRecognitionContext;
@property (nonatomic, retain) PKDrawing *latestDrawing;
@property (nonatomic, retain) NSManagedObjectContext *mainContext;
@property (nonatomic) unsigned long long numberOfChanges;
@property (nonatomic, retain) ICSelectorDelayer *processChangesSelectorDelayer;
@property (nonatomic, retain) NSManagedObjectContext *workerContext;

+ (void)fetchMissingOrOutdatedHandwritingSummaryAttachmentIDsInContext:(id)arg1 completion:(id /* block */)arg2;
+ (void)generateMissingOrOutdatedHandwritingSummariesInContext:(id)arg1;
+ (id)handwritingSummaryAttachmentsInContext:(id)arg1;
+ (void)purgeHandwritingSummariesInContext:(id)arg1;

- (void).cxx_destruct;
- (id)attachment;
- (void)dealloc;
- (void)drawingDataDidChange:(id)arg1;
- (id)handwritingRecognitionContext;
- (bool)hasChanges;
- (id)initWithAttachment:(id)arg1;
- (id)latestDrawing;
- (id)mainContext;
- (void)mergeDrawingChanges;
- (void)mergeDrawingWithDrawing:(id)arg1;
- (unsigned long long)numberOfChanges;
- (id)processChangesSelectorDelayer;
- (void)processIndexableContentWithCompletion:(id /* block */)arg1;
- (id)retrieveAndClearLatestDrawingToMerge;
- (void)setAttachment:(id)arg1;
- (void)setHandwritingRecognitionContext:(id)arg1;
- (void)setLatestDrawing:(id)arg1;
- (void)setMainContext:(id)arg1;
- (void)setNumberOfChanges:(unsigned long long)arg1;
- (void)setProcessChangesSelectorDelayer:(id)arg1;
- (void)setWorkerContext:(id)arg1;
- (void)updateNowIfNecessary;
- (void)updateVersionIfNeededForAttachment:(id)arg1 withDrawing:(id)arg2;
- (id)workerContext;

@end
