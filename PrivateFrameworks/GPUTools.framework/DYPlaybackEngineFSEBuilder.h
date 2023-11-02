
@interface DYPlaybackEngineFSEBuilder : DYInOrderInstructionFilesVisitor {
    bool  _buildDecodedFunctionStreams;
    void * _cache;
    <DYCaptureStore> * _store;
}

- (id)init;
- (id)initWithPlaybackEngineCache:(void*)arg1;
- (void)performPostCaptureVisitActions;
- (void)performPreCaptureVisitActions;
- (void)performPreVisitActions;
- (void)visitCaptureStore:(id)arg1;
- (void)visitFunctionStreamFile:(id)arg1;

@end
