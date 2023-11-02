
@interface _PXBrowserDataSourceVisibleContentSnapshot : PXBrowserVisibleContentSnapshot {
    <PXDisplayAssetDataSource> * _dataSource;
    unsigned long long  _dateType;
    NSArray * _indexPaths;
}

@property (nonatomic, readonly) <PXDisplayAssetDataSource> *dataSource;
@property (nonatomic, readonly) unsigned long long dateType;
@property (nonatomic, readonly, copy) NSArray *indexPaths;

- (void).cxx_destruct;
- (id)dataSource;
- (id)dateInterval;
- (unsigned long long)dateType;
- (id)indexPaths;
- (id)initWithDateIntervalGranularity:(unsigned long long)arg1;
- (id)initWithIndexPaths:(id)arg1 dataSource:(id)arg2 dateIntervalGranularity:(unsigned long long)arg3 dateType:(unsigned long long)arg4;

@end
