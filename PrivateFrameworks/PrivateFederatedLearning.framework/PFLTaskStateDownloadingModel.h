
@interface PFLTaskStateDownloadingModel : NSObject <PFLTaskState> {
    NSURLSessionDownloadTask * _downloadTask;
    NSData * _resumeData;
}

@property (nonatomic, retain) NSURLSessionDownloadTask *downloadTask;
@property (nonatomic, retain) NSData *resumeData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)downloadTask;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)resume:(id)arg1 completion:(id /* block */)arg2;
- (id)resumeData;
- (void)setDownloadTask:(id)arg1;
- (void)setResumeData:(id)arg1;
- (void)suspend;
- (unsigned long long)tag;

@end
