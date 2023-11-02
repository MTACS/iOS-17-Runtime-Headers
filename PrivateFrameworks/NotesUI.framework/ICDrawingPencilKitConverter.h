
@interface ICDrawingPencilKitConverter : NSObject {
    NSObject<OS_dispatch_queue> * _convertDispatchQueue;
    NSOperationQueue * _converterQueue;
    bool  _isThrowaway;
    NSMapTable * _lastOperationForAttachmentID;
    NSMutableArray * _mutableFailedSketches;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *convertDispatchQueue;
@property (nonatomic, retain) NSOperationQueue *converterQueue;
@property (nonatomic, readonly) NSArray *failedSketches;
@property (nonatomic) bool isThrowaway;
@property (nonatomic, retain) NSMapTable *lastOperationForAttachmentID;
@property (nonatomic, retain) NSMutableArray *mutableFailedSketches;

+ (bool)canUpdateFullscreenSketchAttachment:(id)arg1;
+ (bool)canUpdateInlineDrawingAttachment:(id)arg1;
+ (unsigned long long)countOfUpdatableDrawingsInNote:(id)arg1;
+ (id)newThrowawayConverter;
+ (id)sharedConverter;

- (void).cxx_destruct;
- (id)addOperationForAttachment:(id)arg1 automatic:(bool)arg2;
- (void)canAutoUpdateDrawingsInAccount:(id)arg1 completion:(id /* block */)arg2;
- (bool)compareDrawingAttachment:(id)arg1 withConvertedDrawing:(id)arg2;
- (void)convertAllDrawingsIfNeeded;
- (unsigned long long)convertAllSketchesInNote:(id)arg1;
- (void)convertAllSketchesWithProgress:(id)arg1;
- (void)convertAllSketchesWithProgress:(id)arg1 completion:(id /* block */)arg2;
- (id)convertDispatchQueue;
- (void)convertDrawingsInNote:(id)arg1 inWindow:(id)arg2 message:(id)arg3 completion:(id /* block */)arg4;
- (void)convertDrawingsInNote:(id)arg1 waitUntilFinished:(bool)arg2;
- (void)convertDrawingsInNoteIfNeeded:(id)arg1;
- (id)convertSketch:(id)arg1;
- (id)convertSketchAttachment:(id)arg1 toInlineDrawingAtRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 inNote:(id)arg3;
- (id)converterQueue;
- (unsigned long long)countOfDrawingsNeedingConversionInNote:(id)arg1;
- (id)failedSketches;
- (id)init;
- (bool)isThrowaway;
- (id)lastOperationForAttachmentID;
- (id)mutableFailedSketches;
- (void)operationComplete:(id)arg1;
- (void)setConvertDispatchQueue:(id)arg1;
- (void)setConverterQueue:(id)arg1;
- (void)setIsThrowaway:(bool)arg1;
- (void)setLastOperationForAttachmentID:(id)arg1;
- (void)setMutableFailedSketches:(id)arg1;
- (bool)shouldAutoConvertNote:(id)arg1;
- (bool)shouldConvertAllDrawingsIfNeeded;
- (id)updateInlineDrawingAttachment:(id)arg1;

@end
