
@interface HDDiagnosticExtension : DEExtensionProvider <HDDiagnosticOperationDelegate> {
    bool  _allowsSensitiveAttachments;
    double  _captureStartTime;
    NSMutableString * _collectionLog;
    int  _contentProtectionNotifyToken;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _logLock;
    NSURL * _temporaryDirectoryURL;
}

@property (nonatomic, readonly) bool allowsSensitiveAttachments;
@property (nonatomic, retain) NSMutableString *collectionLog;
@property (nonatomic, readonly, copy) NSURL *temporaryDirectoryURL;

- (void).cxx_destruct;
- (void)_beginMonitoringForContentProtectionStatus;
- (bool)_captureLog;
- (id)_currentProtectionStateString;
- (void)_endMonitoringForContentProtectionStatus;
- (id)_generateTemporaryAttachmentDirectory;
- (void)_log:(id)arg1;
- (bool)allowsSensitiveAttachments;
- (id)attachmentsForParameters:(id)arg1;
- (id)collectionLog;
- (void)diagnosticOperation:(id)arg1 logMessage:(id)arg2;
- (id)init;
- (void)setCollectionLog:(id)arg1;
- (id)temporaryDirectoryURL;

@end
