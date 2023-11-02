
@interface PXZoomableInlineHeadersDataSource : PXSectionedDataSource {
    PXAssetsDataSource * _assetsDataSource;
    unsigned long long  _level;
    long long  _numberOfSections;
    struct { long long x1; long long x2; long long x3; double x4; } * _sectionInfos;
    unsigned long long  _type;
}

@property (nonatomic, readonly) PXAssetsDataSource *assetsDataSource;
@property (nonatomic, readonly) unsigned long long level;
@property (nonatomic, readonly) long long numberOfSections;
@property (nonatomic, readonly) struct { long long x1; long long x2; long long x3; double x4; }*sectionInfos;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)assetsDataSource;
- (void)dealloc;
- (id)initWithAssetsDataSource:(id)arg1 level:(unsigned long long)arg2 metaDataStore:(id)arg3;
- (unsigned long long)level;
- (long long)numberOfSections;
- (struct { long long x1; long long x2; long long x3; double x4; }*)sectionInfos;
- (unsigned long long)type;

@end
