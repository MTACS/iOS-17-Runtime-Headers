
@interface HDDiagnosticOperation : NSOperation {
    NSURL * _attachmentDirectoryURL;
    NSMutableArray * _attachments;
    <HDDiagnosticOperationDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableString * _reportContents;
}

@property (nonatomic, readonly, copy) NSURL *attachmentDirectoryURL;
@property (readonly, copy) NSArray *attachments;
@property (nonatomic) <HDDiagnosticOperationDelegate> *delegate;
@property (readonly, copy) NSURL *healthDirectoryURL;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSMutableString *reportContents;
@property (readonly, copy) NSString *reportFilename;

+ (id)operationWithAttachmentDirectoryURL:(id)arg1;

- (void).cxx_destruct;
- (void)_appendString:(id)arg1 newLine:(bool)arg2;
- (bool)_copyDatabase:(struct sqlite3 { }*)arg1 toDatabase:(struct sqlite3 { }*)arg2;
- (id)_fileAttributesAtURL:(id)arg1;
- (id)_headerString;
- (void)_queue_submitAttachment:(id)arg1;
- (long long)_reportCountOfObjectsForEntityClass:(Class)arg1 database:(id)arg2;
- (long long)_reportCountOfObjectsInTable:(id)arg1 database:(id)arg2;
- (double)absoluteTimeForTimespec:(struct timespec { long long x1; long long x2; })arg1;
- (void)appendFormat:(id)arg1;
- (void)appendNewline;
- (void)appendSeparator;
- (void)appendString:(id)arg1;
- (void)appendStrongSeparator;
- (id)attachmentDirectoryURL;
- (id)attachments;
- (void)checkSchemaVersionForDatabase:(id)arg1 currentSchema:(int)arg2 futureSchema:(int)arg3;
- (bool)copyDatabaseFromURL:(id)arg1 toURL:(id)arg2;
- (id)delegate;
- (id)fileCreationDateForURL:(id)arg1;
- (id)fileModificationDateForURL:(id)arg1;
- (long long)fileSizeForURL:(id)arg1;
- (unsigned long long)getFileStatisticsForDirectoryWithURL:(id)arg1 earliestModificationDate:(double*)arg2 totalFileSize:(long long*)arg3 maxFileSize:(long long*)arg4;
- (id)healthDirectoryURL;
- (id)initWithAttachmentDirectoryURL:(id)arg1;
- (void)log:(id)arg1;
- (void)main;
- (id)openReadOnlyDatabaseAtURL:(id)arg1;
- (id)prettyPrintFileSize:(long long)arg1;
- (id)queue;
- (id)reportContents;
- (void)reportCountsForDatabase:(id)arg1 entityClasses:(id)arg2;
- (id)reportFilename;
- (void)reportIntegrityForDatabase:(id)arg1;
- (void)reportStatsForDatabaseAtURL:(id)arg1;
- (void)run;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setReportContents:(id)arg1;
- (id)stringFromDate:(id)arg1;
- (void)submitAttachment:(id)arg1;
- (void)submitAttachments:(id)arg1;
- (void)verifyPermissionsForFileAtURL:(id)arg1;

@end
