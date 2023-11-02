
@interface WLBookmarksMigrator : NSObject <WLAnalyticsDataSource, WLDataclassMigrating> {
    WebBookmarkCollection * _collection;
    WLFeaturePayload * _featurePayload;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) WLFeaturePayload *featurePayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_bookmarkFolderAtTitlePath:(id)arg1 withinBookmarkFolder:(id)arg2;
+ (id)_bookmarkFolderAtTitlePath:(id)arg1 withinRootFolder:(id)arg2;
+ (id)_createBookmarkFolderWithTitle:(id)arg1 UUID:(id)arg2;
+ (id)_createRootBookmarkFolder;
+ (id)contentType;

- (void).cxx_destruct;
- (bool)accountBased;
- (void)addWorkingTime:(unsigned long long)arg1;
- (id)contentType;
- (id)dataType;
- (void)enable;
- (void)estimateItemSizeForSummary:(id)arg1 account:(id)arg2;
- (id)featurePayload;
- (void)importDataFromProvider:(id /* block */)arg1 forSummaries:(id)arg2 summaryStart:(id /* block */)arg3 summaryCompletion:(id /* block */)arg4;
- (id)importDidEnd;
- (id)importWillBegin;
- (void)setEstimatedDataSize:(unsigned long long)arg1;
- (void)setFeaturePayload:(id)arg1;
- (void)setState:(id)arg1;
- (bool)storeRecordDataInDatabase;
- (bool)wantsSegmentedDownloads;

@end
