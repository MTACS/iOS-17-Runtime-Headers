
@interface __NSCFBackgroundUploadTask : __NSCFBackgroundDataTask {
    NSURL * _uploadFile;
}

- (void)_onqueue_didFinishWithError:(id)arg1;
- (void)cancelByProducingResumeData:(id /* block */)arg1;
- (void)dealloc;
- (bool)isKindOfClass:(Class)arg1;

@end
