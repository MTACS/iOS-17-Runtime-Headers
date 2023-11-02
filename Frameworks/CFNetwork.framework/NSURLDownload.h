
@interface NSURLDownload : NSObject <NSURLAuthenticationChallengeSender> {
    NSURLDownloadInternal * _internal;
}

@property (readonly, copy) NSString *debugDescription;
@property bool deletesFileUponFailure;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSURLRequest *request;
@property (readonly, copy) NSData *resumeData;
@property (readonly) Class superclass;

+ (id)_downloadWithLoadingCFURLConnection:(struct _CFURLConnection { }*)arg1 request:(struct _CFURLRequest { }*)arg2 response:(struct _CFURLResponse { }*)arg3 delegate:(id)arg4 proxy:(id)arg5;
+ (id)_downloadWithLoadingConnection:(id)arg1 request:(id)arg2 response:(id)arg3 delegate:(id)arg4 proxy:(id)arg5;
+ (id)_downloadWithRequest:(id)arg1 delegate:(id)arg2 directory:(id)arg3;
+ (bool)canResumeDownloadDecodedWithEncodingMIMEType:(id)arg1;

- (id)_directoryPath;
- (id)_initWithLoadingCFURLConnection:(struct _CFURLConnection { }*)arg1 request:(struct _CFURLRequest { }*)arg2 response:(struct _CFURLResponse { }*)arg3 delegate:(id)arg4 proxy:(id)arg5;
- (id)_initWithLoadingConnection:(id)arg1 request:(id)arg2 response:(id)arg3 delegate:(id)arg4 proxy:(id)arg5;
- (id)_initWithRequest:(id)arg1 delegate:(id)arg2 directory:(id)arg3;
- (id)_initWithResumeInformation:(id)arg1 delegate:(id)arg2 path:(id)arg3;
- (id)_resumeInformation;
- (void)_setDelegate:(id)arg1;
- (void)_setDelegateQueue:(id)arg1;
- (void)_setDirectoryPath:(id)arg1;
- (void)cancel;
- (void)cancelAuthenticationChallenge:(id)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (void)dealloc;
- (bool)deletesFileUponFailure;
- (id)description;
- (id)init;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2;
- (id)initWithResumeData:(id)arg1 delegate:(id)arg2 path:(id)arg3;
- (id)request;
- (id)resumeData;
- (void)setDeletesFileUponFailure:(bool)arg1;
- (void)setDestination:(id)arg1 allowOverwrite:(bool)arg2;
- (id)url;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
- (void)withDelegate:(id /* block */)arg1;

@end
