
@interface GTCaptureCompletionState : NSObject {
    NSURL * _archiveURL;
    NSError * _error;
}

@property (nonatomic, retain) NSURL *archiveURL;
@property (nonatomic, retain) NSError *error;

- (void).cxx_destruct;
- (id)archiveURL;
- (id)error;
- (void)setArchiveURL:(id)arg1;
- (void)setError:(id)arg1;

@end
