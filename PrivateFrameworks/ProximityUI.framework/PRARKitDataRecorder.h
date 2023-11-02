
@interface PRARKitDataRecorder : PRDataRecorder {
    NSURL * _fileURL;
    NSString * _filename;
    ARSession * _session;
}

@property (nonatomic, retain) NSURL *fileURL;
@property (nonatomic, retain) NSString *filename;
@property (nonatomic, retain) ARSession *session;

- (void).cxx_destruct;
- (id)fileURL;
- (id)filename;
- (id)initWithARSession:(id)arg1;
- (id)session;
- (void)setFileURL:(id)arg1;
- (void)setFilename:(id)arg1;
- (void)setSession:(id)arg1;
- (void)start;
- (void)stopAndDiscard;
- (id)stopAndSave;

@end
