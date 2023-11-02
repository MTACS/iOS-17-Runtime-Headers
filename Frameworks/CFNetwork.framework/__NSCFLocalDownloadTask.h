
@interface __NSCFLocalDownloadTask : __NSCFLocalSessionTask <NSURLSessionDownloadTaskSubclass, __NSCFLocalDownloadFileOpener> {
    id /* block */  _afterDidReportProgressOnQueue;
    bool  _canWrite;
    id /* block */  _dataAckCompletion;
    bool  _didIssueNeedFinish;
    __NSCFLocalDownloadFile * _downloadFile;
    id /* block */  _fileCompletion;
    long long  _initialResumeSize;
    unsigned long long  _ioSuspend;
    bool  _needFinish;
    NSDictionary * _originalResumeInfo;
    id /* block */  _resumeCallback;
    int  _seqNo;
    bool  _suppressProgress;
    long long  _totalWrote;
    unsigned long long  _transientWriteProgress;
    NSObject<OS_dispatch_data> * _writeBuffer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) __NSCFLocalDownloadFile *downloadFile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_expandResumeData:(id)arg1;

- (struct __CFDictionary { }*)_copySocketStreamProperties;
- (bool)_keepDownloadTaskFile;
- (void)_onqueue_cancelByProducingResumeData:(id /* block */)arg1;
- (void)_onqueue_completeInitialization;
- (void)_onqueue_didReceiveResponse:(id)arg1 completion:(id /* block */)arg2;
- (void)_onqueue_willCacheResponse:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_task_onqueue_didFinish;
- (void)_task_onqueue_didReceiveDispatchData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cancelByProducingResumeData:(id /* block */)arg1;
- (id)createResumeInformation:(id)arg1;
- (void)dealloc;
- (id)downloadFile;
- (bool)isKindOfClass:(Class)arg1;
- (int)openItemForPath:(id)arg1 mode:(int)arg2;
- (void)setDownloadFile:(id)arg1;
- (void)set_keepDownloadTaskFile:(bool)arg1;
- (void)terminateExtractorWithError:(id)arg1 completion:(id /* block */)arg2;

@end
