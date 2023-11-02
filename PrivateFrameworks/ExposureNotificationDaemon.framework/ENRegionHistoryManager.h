
@interface ENRegionHistoryManager : NSObject {
    <ENRegionHistoryManagerDelegate> * _delegate;
    NSString * _directoryPath;
    long long  _fileStatus;
    NSObject<OS_dispatch_queue> * _queue;
    ENRegionHistory * _regionHistory;
    ENSecureArchiveFileWrapper * _regionHistoryFileWrapper;
    int  _resetToken;
}

@property (nonatomic) <ENRegionHistoryManagerDelegate> *delegate;
@property (nonatomic, copy) NSString *directoryPath;
@property (nonatomic) long long fileStatus;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) ENRegionHistory *regionHistory;
@property (nonatomic, retain) ENSecureArchiveFileWrapper *regionHistoryFileWrapper;
@property (nonatomic) int resetToken;

+ (id)regionHistoryFileStatusToString:(long long)arg1;

- (void).cxx_destruct;
- (void)addRegionVisit:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)directoryPath;
- (long long)fileStatus;
- (id)getAllRegionVisits;
- (id)getAllRegions;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 directoryPath:(id)arg3;
- (id)mergeRegionHistoryOnDisk:(id)arg1 inMemory:(id)arg2;
- (bool)purgeAllRegionHistoryWithError:(id*)arg1;
- (bool)purgeRegionsOlderThanDate:(id)arg1 error:(id*)arg2;
- (id)queue;
- (id)regionHistory;
- (id)regionHistoryFileWrapper;
- (void)resetRegionHistory;
- (int)resetToken;
- (void)setDelegate:(id)arg1;
- (void)setDirectoryPath:(id)arg1;
- (void)setFileStatus:(long long)arg1;
- (void)setQueue:(id)arg1;
- (void)setRegionHistory:(id)arg1;
- (void)setRegionHistoryFileWrapper:(id)arg1;
- (void)setResetToken:(int)arg1;
- (void)setupPersistedRegionHistory;
- (void)updateFileStatus;

@end
