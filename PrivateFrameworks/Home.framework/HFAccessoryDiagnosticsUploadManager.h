
@interface HFAccessoryDiagnosticsUploadManager : NSObject <NSURLSessionDelegate> {
    NSURLSession * _backgroundSession;
    id /* block */  _backgroundUrlSessionCompletionHandler;
    NSMutableDictionary * _diagnosticItems;
    NSMutableSet * _failedUploadIdentifiers;
    NSMutableOrderedSet * _pendingIdentifiers;
    NSMutableSet * _uploadedIdentifiers;
}

@property (nonatomic, retain) NSURLSession *backgroundSession;
@property (nonatomic, copy) id /* block */ backgroundUrlSessionCompletionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *diagnosticItems;
@property (nonatomic, retain) NSMutableSet *failedUploadIdentifiers;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableOrderedSet *pendingIdentifiers;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableSet *uploadedIdentifiers;

+ (id)backgroundURLSessionIdentifier;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (void)_addToPendingUploads:(id)arg1;
- (void)_cleanUpLocalFilesForIdentifier:(id)arg1;
- (bool)_didPreviouslySubmitLog:(id)arg1;
- (void)_failAttemptToUploadCurrentIdentifier;
- (void)_finalizeHandlingOfIdentifier:(id)arg1;
- (bool)_isValidFilenameIdentifier:(id)arg1;
- (bool)_needsToPurgeOldLogs;
- (id)_nextFilenameIdentifierToProcess;
- (void)_submitNextPendingLog;
- (void)_updatePreviousLogIdentifiers:(id)arg1 forKey:(id)arg2;
- (id)backgroundSession;
- (id /* block */)backgroundUrlSessionCompletionHandler;
- (id)diagnosticItems;
- (id)failedUploadIdentifiers;
- (id)filePathForIdentifier:(id)arg1;
- (id)fileURLForIdentifier:(id)arg1;
- (id)init;
- (id)pendingIdentifiers;
- (void)purgeStaleSubmittedLogs;
- (void)resumeServiceForURLSessionIdentifier:(id)arg1;
- (void)setBackgroundSession:(id)arg1;
- (void)setBackgroundUrlSessionCompletionHandler:(id /* block */)arg1;
- (void)setDiagnosticItems:(id)arg1;
- (void)setFailedUploadIdentifiers:(id)arg1;
- (void)setPendingIdentifiers:(id)arg1;
- (void)setUploadedIdentifiers:(id)arg1;
- (void)updateLastPurgeDate;
- (void)uploadDiagnosticLogUsingItem:(id)arg1;
- (id)uploadedIdentifiers;
- (void)willResignActive:(id)arg1;

@end
