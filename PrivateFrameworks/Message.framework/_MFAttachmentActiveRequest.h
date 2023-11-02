
@interface _MFAttachmentActiveRequest : NSObject {
    MFAttachment * _attachment;
    NSProgress * _downloadProgress;
    id /* block */  _fetchCompletionBlock;
    long long  _lastProgressBytes;
    double  _lastProgressTime;
    bool  _wantsCompletionBlockOffMainThread;
}

@property (nonatomic, readonly) MFAttachment *attachment;
@property (nonatomic, readonly) NSProgress *downloadProgress;
@property (nonatomic, readonly, copy) id /* block */ fetchCompletionBlock;
@property (nonatomic) long long lastProgressBytes;
@property (nonatomic) double lastProgressTime;
@property (nonatomic, readonly) bool wantsCompletionBlockOffMainThread;

- (void).cxx_destruct;
- (id)attachment;
- (void)completeWithData:(id)arg1 error:(id)arg2;
- (id)downloadProgress;
- (id /* block */)fetchCompletionBlock;
- (id)initWithAttachment:(id)arg1;
- (long long)lastProgressBytes;
- (double)lastProgressTime;
- (void)setLastProgressBytes:(long long)arg1;
- (void)setLastProgressTime:(double)arg1;
- (bool)wantsCompletionBlockOffMainThread;

@end
