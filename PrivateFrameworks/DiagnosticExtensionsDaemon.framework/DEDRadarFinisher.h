
@interface DEDRadarFinisher : NSObject <DEDFinisher, DEDSecureArchiving, NSSecureCoding, NSURLSessionDataDelegate> {
    DEDBugSessionConfiguration * _configuration;
    NSObject<OS_os_log> * _log;
    float  _percentComplete;
    int  _retryAttemptCount;
    DEDBugSession * _session;
    NSMutableSet * _uploadItems;
    NSURLSession * _urlSession;
    NSMutableSet * _verificationTasks;
}

@property DEDBugSessionConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSObject<OS_os_log> *log;
@property float percentComplete;
@property int retryAttemptCount;
@property DEDBugSession *session;
@property (readonly) Class superclass;
@property (retain) NSMutableSet *uploadItems;
@property (retain) NSURLSession *urlSession;
@property (retain) NSMutableSet *verificationTasks;

+ (id)archivedClasses;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (bool)allUploadsComplete;
- (bool)allVerificationTasksComplete;
- (id)configuration;
- (id)createUploadTaskForAttachment:(id)arg1 atRadarURL:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)finishRadarUploadSession;
- (void)finishSession:(id)arg1 withConfiguration:(id)arg2;
- (id)folderNameForAttachmentGroup:(id)arg1;
- (id)getUploadItemForTask:(id)arg1;
- (id)getVerificationTaskForDataTask:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1 session:(id)arg2;
- (id)log;
- (float)percentComplete;
- (void)processVerifyTaskResults;
- (int)retryAttemptCount;
- (id)session;
- (void)setConfiguration:(id)arg1;
- (void)setLog:(id)arg1;
- (void)setPercentComplete:(float)arg1;
- (void)setRetryAttemptCount:(int)arg1;
- (void)setSession:(id)arg1;
- (void)setUploadItems:(id)arg1;
- (void)setUrlSession:(id)arg1;
- (void)setVerificationTasks:(id)arg1;
- (void)startAttachmentVerificationTasks;
- (id)uploadItems;
- (id)urlSession;
- (id)verificationTasks;

@end
