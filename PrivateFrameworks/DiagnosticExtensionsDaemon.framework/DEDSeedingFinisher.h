
@interface DEDSeedingFinisher : NSObject <DEDFinisher, DEDFinisherState, DEDSecureArchiving, DEDSeedingClientDelegate, NSSecureCoding> {
    long long  _bytesUploadedFromAllFiles;
    DEDSeedingClient * _client;
    DEDBugSessionConfiguration * _config;
    bool  _isPreparing;
    long long  _lastUploadPercentageReported;
    NSObject<OS_os_log> * _log;
    NSMutableDictionary * _promises;
    DEDBugSession * _session;
    long long  _totalUploadSize;
    NSObject<OS_os_transaction> * _transaction;
    int  _uploadProgressCounter;
    NSMutableSet * _uploads;
}

@property long long bytesUploadedFromAllFiles;
@property (retain) DEDSeedingClient *client;
@property (retain) DEDBugSessionConfiguration *config;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isPreparing;
@property long long lastUploadPercentageReported;
@property (retain) NSObject<OS_os_log> *log;
@property (retain) NSMutableDictionary *promises;
@property DEDBugSession *session;
@property (readonly) Class superclass;
@property long long totalUploadSize;
@property (retain) NSObject<OS_os_transaction> *transaction;
@property (nonatomic) int uploadProgressCounter;
@property (retain) NSMutableSet *uploads;

+ (id)archivedClasses;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalStateInfo;
- (id)archiveItemsInDirectory:(id)arg1;
- (id)attachmentHandler;
- (long long)bytesUploadedFromAllFiles;
- (void)cleanup;
- (id)client;
- (id)config;
- (void)didAdoptAttachmentGroup:(id)arg1;
- (void)didCancelCollectionOnExtension:(id)arg1;
- (void)didCollectAttachmentGroup:(id)arg1;
- (void)didStartCollectingDiagnosticExtensionWithIdentifier:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)finishSession:(id)arg1 withConfiguration:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1 session:(id)arg2;
- (bool)isCompressing;
- (bool)isPreparing;
- (bool)isUploading;
- (long long)lastUploadPercentageReported;
- (id)log;
- (id)prepareSessionDirectoryForSubmission:(id)arg1;
- (id)prepareUpload:(id)arg1 forSubmissionWithSession:(id)arg2 metadata:(id)arg3;
- (id)promises;
- (void)save;
- (id)session;
- (void)setBytesUploadedFromAllFiles:(long long)arg1;
- (void)setClient:(id)arg1;
- (void)setConfig:(id)arg1;
- (void)setIsPreparing:(bool)arg1;
- (void)setLastUploadPercentageReported:(long long)arg1;
- (void)setLog:(id)arg1;
- (void)setPromises:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setTotalUploadSize:(long long)arg1;
- (void)setTransaction:(id)arg1;
- (void)setUploadProgressCounter:(int)arg1;
- (void)setUploads:(id)arg1;
- (bool)shouldReportProgress;
- (long long)totalUploadSize;
- (id)transaction;
- (void)updateUploadProgressOnSessionIfNeeded;
- (bool)uploadFinished;
- (id)uploadItemForTask:(id)arg1;
- (int)uploadProgressCounter;
- (void)uploadTask:(id)arg1 didCompleteWithError:(id)arg2;
- (void)uploadTask:(id)arg1 didSendBytes:(long long)arg2 totalBytesExpectedToSend:(long long)arg3;
- (id)uploads;
- (bool)uploadsAreComplete;

@end
