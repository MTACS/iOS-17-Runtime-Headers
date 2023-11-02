
@interface PRETrialCompletionResult : NSObject {
    NSError * _downloadError;
    bool  _isCompletionCalled;
    bool  _isSuccess;
}

@property (nonatomic, retain) NSError *downloadError;
@property (nonatomic) bool isCompletionCalled;
@property (nonatomic) bool isSuccess;

- (void).cxx_destruct;
- (id)downloadError;
- (bool)isCompletionCalled;
- (bool)isSuccess;
- (void)setDownloadError:(id)arg1;
- (void)setIsCompletionCalled:(bool)arg1;
- (void)setIsSuccess:(bool)arg1;

@end
