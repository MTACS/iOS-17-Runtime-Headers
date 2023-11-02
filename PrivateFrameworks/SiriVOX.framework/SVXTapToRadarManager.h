
@interface SVXTapToRadarManager : NSObject {
    NSString * _recognitionText;
    NSUUID * _requestID;
    NSString * _timeZone;
    NSUserDefaults * _ttrHistory;
    NSObject<OS_dispatch_queue> * _ttrQueue;
    NSISO8601DateFormatter * _ttrTimeFormatter;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_fileRadar:(id)arg1 extraContent:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)_hasFileTTRWithIssue:(id)arg1;
- (bool)_hasFileTTRWithRequestID:(id)arg1;
- (id)_init;
- (void)_updateRequestID:(id)arg1;
- (void)_updateTTRHistory:(id)arg1;
- (void)createProblem:(id)arg1 extraContent:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)getDomainFatalIssueDialogIdentifiers;
- (id)getEarlyCutoffUtterances;
- (id)getRMVIssueDialogIdentifiers;
- (id)getRecognitionText;
- (id)getWebSearchIssueDialogIdentifiers;
- (void)setRecognitionText:(id)arg1;

@end
