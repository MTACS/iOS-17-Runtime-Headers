
@interface ICNASnapshotReporter : ICNAEventReporter {
    ICNAHistogramManager * _accountHistogramManager;
    long long  _contextHolderCount;
    <ICLegacyContext> * _htmlContext;
    bool  _isPerformingSnapshot;
    NSManagedObjectContext * _modernContext;
}

@property (nonatomic, retain) ICNAHistogramManager *accountHistogramManager;
@property long long contextHolderCount;
@property (nonatomic, retain) <ICLegacyContext> *htmlContext;
@property bool isPerformingSnapshot;
@property (nonatomic, retain) NSManagedObjectContext *modernContext;

+ (id)sharedReporter;

- (void).cxx_destruct;
- (id)accountHistogramManager;
- (id)accountPurposeForHTMLAccount;
- (id)accountPurposeForModernAccount:(id)arg1;
- (void)checkIfSnapshotNotFiredForALongTime;
- (long long)contextHolderCount;
- (id)deviceSnapshotSummaryForDataType:(Class)arg1;
- (id)drawingSnapshotItemDataForDrawingAttachment:(id)arg1;
- (id)htmlContext;
- (bool)isPerformingSnapshot;
- (id)lastSnapshotRunningTimeStamp;
- (id)lastSnapshotScheduleTimeStamp;
- (id)modernContext;
- (unsigned long long)pageCountForDocScanAttachment:(id)arg1;
- (void)performBlockForHTMLManagedObjectContext:(id /* block */)arg1;
- (void)performBlockForModernManagedObjectContext:(id /* block */)arg1;
- (void)reallyPerformSnapshotWithCompletionHandler:(id /* block */)arg1;
- (void)scheduleSnapshotIfNecessary;
- (void)setAccountHistogramManager:(id)arg1;
- (void)setContextHolderCount:(long long)arg1;
- (void)setHtmlContext:(id)arg1;
- (void)setIsPerformingSnapshot:(bool)arg1;
- (void)setModernContext:(id)arg1;
- (void)setupContextsIfNecessary;
- (bool)shouldRunSnapshotManually;
- (bool)shouldScheduleSnapshot;
- (bool)shouldSnapshot;
- (void)snapshotAttachment:(id)arg1 reportedDataToNote:(id)arg2 reportedDataToAccount:(id)arg3;
- (void)snapshotDevice;
- (void)snapshotHTMLAccount:(id)arg1 reportedDataToDevice:(id)arg2 reportedDataFromFolderToDevice:(id)arg3 reportedDataFromNoteToDevice:(id)arg4;
- (void)snapshotHTMLFolder:(id)arg1 reportedDataToAccount:(id)arg2 reportedDataToDevice:(id)arg3 noteReportToAccount:(id)arg4 reportedDataFromNoteToDevice:(id)arg5;
- (void)snapshotHTMLNote:(id)arg1 reportedDataToAccount:(id)arg2 reportedDataToDevice:(id)arg3;
- (id)snapshotItemDataForHTMLAccount:(id)arg1;
- (id)snapshotItemDataForModernAccount:(id)arg1;
- (void)snapshotModernAccount:(id)arg1 reportedDataToDevice:(id)arg2 reportedDataFromFolderToDevice:(id)arg3 reportedDataFromNoteToDevice:(id)arg4;
- (void)snapshotModernFolder:(id)arg1 reportedDataToParentFolder:(id)arg2 reportedDataToAccount:(id)arg3 reportedDataToDevice:(id)arg4 reportedDataFromNotesToAccount:(id)arg5 reportedDataFromAttachmentToAccount:(id)arg6 reportedDataFromNoteToDevice:(id)arg7;
- (void)snapshotModernNote:(id)arg1 reportedDataToAccount:(id)arg2 reportToDevice:(id)arg3 reportedDataFromAttachmentToAccount:(id)arg4;
- (id)sortedFoldersForAccount:(id)arg1;
- (void)submitMiniSnapshot;
- (void)submitSnapshotScheduleEventWithResult:(long long)arg1 error:(id)arg2 lastScheduledTime:(id)arg3;
- (id)tableSnapshotItemDataForTableAttachment:(id)arg1;
- (void)tearDownContextsIfNecessary;
- (double)timeStampOfDate:(id)arg1;
- (id)userSnapshotSummaryForDataType:(Class)arg1;

@end
