
@interface DEDCloudKitFinisher : NSObject <DEDFinisher, DEDSecureArchiving, NSSecureCoding> {
    NSMutableArray * _attachments;
    DEDCloudKitClient * _cloudKitClient;
    ELSManager * _elsManager;
    int  _failedUploads;
    NSObject<OS_os_log> * _log;
    NSDictionary * _queuePayload;
    bool  _sandboxEnvironment;
    DEDBugSession * _session;
    int  _successfulUploads;
    NSString * _timberLorryUUID;
    unsigned long long  _totalUploadSize;
    NSMutableDictionary * _uploadedBytes;
}

@property (retain) NSMutableArray *attachments;
@property (nonatomic, retain) DEDCloudKitClient *cloudKitClient;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) ELSManager *elsManager;
@property (nonatomic) int failedUploads;
@property (readonly) unsigned long long hash;
@property (retain) NSObject<OS_os_log> *log;
@property (nonatomic, retain) NSDictionary *queuePayload;
@property (nonatomic) bool sandboxEnvironment;
@property DEDBugSession *session;
@property (nonatomic) int successfulUploads;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *timberLorryUUID;
@property unsigned long long totalUploadSize;
@property (retain) NSMutableDictionary *uploadedBytes;

+ (id)archivedClasses;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attachments;
- (id)cloudKitClient;
- (void)createAttachmentGroupStatusForAttachmentGroup:(id)arg1;
- (id)createAttachmentGroupStatusWithAttachmentGroupModel:(id)arg1;
- (id)createAttachmentGroupWithData:(id)arg1;
- (id)createAttachmentModelWithURL:(id)arg1 andQueueItem:(id)arg2 attachmentGroupModel:(id)arg3;
- (void)didCancelCollectionOnExtension:(id)arg1;
- (void)didCollectAttachmentGroup:(id)arg1;
- (void)didFinishAllCollections;
- (void)didStartCollectingDiagnosticExtensionWithIdentifier:(id)arg1;
- (id)elsManager;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptLogsForExtensionIdentifier:(id)arg1 withAttachmentUrl:(id)arg2;
- (id)encryptLogsIfNecessary:(id)arg1;
- (id)extractExtensionIdentifierFromAttachmentUrl:(id)arg1;
- (int)failedUploads;
- (void)finishSession:(id)arg1 withConfiguration:(id)arg2;
- (id)getAttachmentURLs;
- (id)getAttachmentURLsWithProgressHandler:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1 session:(id)arg2;
- (void)localCleanup;
- (id)log;
- (void)logError:(id)arg1 forRecord:(id)arg2;
- (id)parsePayloadData:(id)arg1 forIdentifier:(id)arg2;
- (void)postProcessRecord:(id)arg1 withError:(id)arg2 attachmentGroup:(id)arg3;
- (void)processAttachmentsWithRecord:(id)arg1 withProgress:(double)arg2;
- (id)queuePayload;
- (bool)sandboxEnvironment;
- (id)session;
- (void)setAttachments:(id)arg1;
- (void)setCloudKitClient:(id)arg1;
- (void)setElsManager:(id)arg1;
- (void)setFailedUploads:(int)arg1;
- (void)setLog:(id)arg1;
- (void)setQueuePayload:(id)arg1;
- (void)setSandboxEnvironment:(bool)arg1;
- (void)setSession:(id)arg1;
- (void)setSuccessfulUploads:(int)arg1;
- (void)setTimberLorryUUID:(id)arg1;
- (void)setTotalUploadSize:(unsigned long long)arg1;
- (void)setUploadedBytes:(id)arg1;
- (int)successfulUploads;
- (id)timberLorryUUID;
- (unsigned long long)totalUploadSize;
- (id)uploadedBytes;
- (void)writeData:(id)arg1 filename:(id)arg2;

@end
