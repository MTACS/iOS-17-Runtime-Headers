
@interface WLStatistics : NSObject {
    NSString * _contentType;
    unsigned long long  _downloadByteCount;
    unsigned long long  _downloadDuration;
    unsigned long long  _importEndBytesFree;
    NSDate * _importEndDate;
    unsigned long long  _importFailedRecordCount;
    unsigned long long  _importRecordCount;
    unsigned long long  _importStartBytesFree;
    NSDate * _importStartDate;
    bool  _selectedForMigration;
}

@property (nonatomic, readonly) NSString *contentType;
@property (nonatomic) unsigned long long downloadByteCount;
@property (nonatomic) unsigned long long downloadDuration;
@property (nonatomic) unsigned long long importEndBytesFree;
@property (nonatomic, retain) NSDate *importEndDate;
@property (nonatomic) unsigned long long importFailedRecordCount;
@property (nonatomic) unsigned long long importRecordCount;
@property (nonatomic) unsigned long long importStartBytesFree;
@property (nonatomic, retain) NSDate *importStartDate;
@property (nonatomic) bool selectedForMigration;

+ (id)_statisticsWithContentType:(id)arg1;
+ (id)aggregateContentType;
+ (id)fetchContentType;

- (void).cxx_destruct;
- (void)addToFetchByteCount:(unsigned long long)arg1;
- (id)contentType;
- (id)description;
- (unsigned long long)downloadByteCount;
- (unsigned long long)downloadBytesPerSecond;
- (unsigned long long)downloadDuration;
- (id)fetchLogString;
- (long long)importBytesUsed;
- (unsigned long long)importDuration;
- (unsigned long long)importEndBytesFree;
- (id)importEndDate;
- (unsigned long long)importFailedRecordCount;
- (unsigned long long)importRecordCount;
- (unsigned long long)importStartBytesFree;
- (id)importStartDate;
- (void)incrementFetchFailedRequestCount;
- (void)incrementFetchRequestCount;
- (bool)selectedForMigration;
- (void)setDownloadByteCount:(unsigned long long)arg1;
- (void)setDownloadDuration:(unsigned long long)arg1;
- (void)setFetchDuration:(unsigned long long)arg1;
- (void)setFetchEndBytesFree:(unsigned long long)arg1;
- (void)setFetchStartBytesFree:(unsigned long long)arg1;
- (void)setImportEndBytesFree:(unsigned long long)arg1;
- (void)setImportEndDate:(id)arg1;
- (void)setImportFailedRecordCount:(unsigned long long)arg1;
- (void)setImportRecordCount:(unsigned long long)arg1;
- (void)setImportStartBytesFree:(unsigned long long)arg1;
- (void)setImportStartDate:(id)arg1;
- (void)setSelectedForMigration:(bool)arg1;

@end
