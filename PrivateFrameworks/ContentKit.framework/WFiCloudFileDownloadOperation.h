
@interface WFiCloudFileDownloadOperation : NSOperation {
    NSError * _downloadError;
    NSArray * _downloadedFiles;
    bool  _executing;
    NSFileCoordinator * _fileCoordinator;
    NSURL * _fileURL;
    bool  _finished;
    NSProgress * _progress;
    bool  _retrieveFolderContents;
}

@property (nonatomic, readonly) NSError *downloadError;
@property (nonatomic, readonly) NSArray *downloadedFiles;
@property (getter=isExecuting, nonatomic) bool executing;
@property (nonatomic, readonly) NSFileCoordinator *fileCoordinator;
@property (nonatomic, readonly) NSURL *fileURL;
@property (getter=isFinished, nonatomic) bool finished;
@property (nonatomic, readonly) NSProgress *progress;
@property (nonatomic, readonly) bool retrieveFolderContents;

- (void).cxx_destruct;
- (void)downloadDirectoryAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)downloadError;
- (void)downloadItemAtFileURL:(id)arg1 ofSize:(id)arg2 fileIsUbiquitous:(bool)arg3 completionHandler:(id /* block */)arg4;
- (id)downloadedFiles;
- (id)fileCoordinator;
- (id)fileURL;
- (void)finishRunningWithFiles:(id)arg1 error:(id)arg2;
- (void)getFileInfoForURL:(id)arg1 fileIsUbiquitous:(bool*)arg2 fileIsDirectory:(bool*)arg3 fileSize:(id*)arg4 error:(id*)arg5;
- (id)initWithFileURL:(id)arg1 retrieveFolderContents:(bool)arg2 progress:(id)arg3;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (id)progress;
- (bool)retrieveFolderContents;
- (void)setExecuting:(bool)arg1;
- (void)setFinished:(bool)arg1;
- (void)start;

@end
