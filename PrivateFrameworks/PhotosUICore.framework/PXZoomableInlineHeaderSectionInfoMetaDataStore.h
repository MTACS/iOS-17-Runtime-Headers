
@interface PXZoomableInlineHeaderSectionInfoMetaDataStore : NSObject {
    PXAssetsDataSource * _dataSource;
    struct { /* ? */ } * _sectionInfosByLevel;
    long long  _sectionsCapacityByLevel;
    long long  _sectionsCountByLevel;
}

@property (nonatomic, readonly) PXAssetsDataSource *dataSource;

- (void).cxx_destruct;
- (void)_resizeStorageIfNeededForNumberOfSections:(long long)arg1 level:(unsigned long long)arg2;
- (void)addSectionInfo:(struct { long long x1; long long x2; long long x3; double x4; })arg1 forLevel:(unsigned long long)arg2;
- (id)dataSource;
- (void)dealloc;
- (id)description;
- (id)initWithDataSource:(id)arg1;
- (long long)numberOfSectionInfosForLevel:(unsigned long long)arg1;
- (void)resetSectionInfos;
- (const struct { long long x1; long long x2; long long x3; double x4; }*)sectionInfosForLevel:(unsigned long long)arg1;
- (bool)updateWithDataSourceAfterChanges:(id)arg1 changeDetails:(id)arg2;

@end
