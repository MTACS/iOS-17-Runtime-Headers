
@interface WFDropboxSessionManager : NSObject <NSURLSessionTaskDelegate> {
    NSURL * _baseURL;
    NSURL * _contentBaseURL;
    WFOAuth2Credential * _credential;
    NSMapTable * _progressTable;
    NSURLSession * _session;
}

@property (nonatomic, readonly) NSURL *baseURL;
@property (nonatomic, readonly) NSURL *contentBaseURL;
@property (nonatomic, copy) WFOAuth2Credential *credential;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMapTable *progressTable;
@property (nonatomic, readonly) NSURLSession *session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (id)baseURL;
- (id)contentBaseURL;
- (void)createFolderAtPath:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)credential;
- (void)deleteItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)downloadFile:(id)arg1 ofType:(id)arg2 proposedFilename:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)getContentsOfFolderAtPath:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getContentsOfFolderWithParameters:(id)arg1 previous:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getExistingSharedLinkForFile:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getItemAtPath:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getSharedLinkForFile:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithSessionConfiguration:(id)arg1;
- (id)progressTable;
- (id)saveFile:(id)arg1 toPath:(id)arg2 overwrite:(bool)arg3 progress:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)searchFiles:(id)arg1 inPath:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)sendContentDownloadRequestWithPath:(id)arg1 ofType:(id)arg2 proposedFilename:(id)arg3 parameters:(id)arg4 progress:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)sendContentUploadRequestWithPath:(id)arg1 parameters:(id)arg2 data:(id)arg3 inputStream:(id)arg4 progress:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)sendRPCRequestWithPath:(id)arg1 parameters:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)session;
- (void)setCredential:(id)arg1;

@end
