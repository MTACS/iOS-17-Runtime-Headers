
@interface STStorageMediaMonitor : NSObject {
    NSDictionary * _atcDictionary;
    bool  _isAsynchronouslyLoaded;
    bool  _isMonitoring;
    bool  _isUpdating;
    id  _photosLibToken;
    NSObject<OS_dispatch_queue> * _refreshQueue;
    unsigned long long  _refreshStartTimestamp;
    NSObject<OS_dispatch_source> * _refreshTimer;
    NSArray * _usedDataClasses;
}

@property (nonatomic, copy) NSDictionary *atcDictionary;
@property (nonatomic) bool isAsynchronouslyLoaded;
@property (nonatomic) bool isMonitoring;
@property (nonatomic) bool isUpdating;
@property (nonatomic, retain) id photosLibToken;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *refreshQueue;
@property (nonatomic) unsigned long long refreshStartTimestamp;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *refreshTimer;
@property (nonatomic, copy) NSArray *usedDataClasses;

+ (id)listOfUsedDataClassesInOverrides:(id)arg1;
+ (id)sharedMonitor;

- (void).cxx_destruct;
- (void)_updateATCData;
- (id)atcDictionary;
- (id)init;
- (bool)isAsynchronouslyLoaded;
- (bool)isMonitoring;
- (bool)isUpdating;
- (void)loadingComplete:(id)arg1;
- (void)mpLibraryChanged:(id)arg1;
- (id)photosLibToken;
- (id)refreshQueue;
- (unsigned long long)refreshStartTimestamp;
- (id)refreshTimer;
- (void)setAtcDictionary:(id)arg1;
- (void)setIsAsynchronouslyLoaded:(bool)arg1;
- (void)setIsMonitoring:(bool)arg1;
- (void)setIsUpdating:(bool)arg1;
- (void)setPhotosLibToken:(id)arg1;
- (void)setRefreshQueue:(id)arg1;
- (void)setRefreshStartTimestamp:(unsigned long long)arg1;
- (void)setRefreshTimer:(id)arg1;
- (void)setUsedDataClasses:(id)arg1;
- (void)startMonitor;
- (void)stopMonitor;
- (void)sync;
- (void)updateATCData;
- (id)usedDataClasses;

@end
