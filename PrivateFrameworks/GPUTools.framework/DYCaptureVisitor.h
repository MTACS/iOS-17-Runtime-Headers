
@interface DYCaptureVisitor : NSObject {
    bool  _abort;
    NSError * _visitCaptureArchiveError;
    bool  _visitUnusedResoures;
}

@property (nonatomic, retain) NSError *visitCaptureArchiveError;
@property (nonatomic) bool visitUnusedResoures;

- (void)abort;
- (id)init;
- (void)setVisitCaptureArchiveError:(id)arg1;
- (void)setVisitUnusedResoures:(bool)arg1;
- (void)visitCaptureArchive:(id)arg1;
- (id)visitCaptureArchiveError;
- (void)visitCaptureArchiveStack:(id)arg1;
- (void)visitCaptureStore:(id)arg1;
- (void)visitDataFile:(id)arg1;
- (void)visitFunctionStreamFile:(id)arg1;
- (void)visitInternalFile:(id)arg1;
- (bool)visitUnusedResoures;

@end
