
@interface HealthRecordsUI.DownloadableAttachmentStateChangeListener : NSObject <HKClinicalDocumentStoreStateChangeListener> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _latestChange;
    void handler;
}

- (void).cxx_destruct;
- (void)downloadableAttachmentDidChangeState:(id)arg1;
- (id)init;

@end
