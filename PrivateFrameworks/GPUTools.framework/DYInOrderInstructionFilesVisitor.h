
@interface DYInOrderInstructionFilesVisitor : DYCaptureVisitor {
    NSArray * _captureFiles;
    NSArray * _deltaFiles;
    NSArray * _initialPhaseFiles;
    bool  _unsorted;
    bool  _visitDeltaFiles;
}

@property (nonatomic) bool unsorted;
@property (nonatomic) bool visitDeltaFiles;

- (void)_closeFiles;
- (bool)_openFilenames:(id)arg1 store:(id)arg2 filesArray:(id)arg3;
- (bool)_openFiles:(id)arg1;
- (void)_performVisit:(id)arg1;
- (void)performPostCaptureVisitActions;
- (void)performPreCaptureVisitActions;
- (void)performPreVisitActions;
- (void)setUnsorted:(bool)arg1;
- (void)setVisitDeltaFiles:(bool)arg1;
- (bool)unsorted;
- (void)visitCaptureStore:(id)arg1;
- (bool)visitDeltaFiles;

@end
