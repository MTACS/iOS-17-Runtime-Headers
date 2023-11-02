
@interface PXCMMInvitationsDataSourceManager : PXSectionedDataSourceManager {
    long long  _filter;
}

@property (nonatomic, readonly) PXCMMInvitationsDataSource *dataSource;
@property (nonatomic) long long filter;
@property (nonatomic, readonly, copy) PXMediaProvider *mediaProvider;

+ (id)currentDataSourceManager;
+ (id)currentDataSourceManagerForPhotoLibrary:(id)arg1 momentSharePhotoLibrary:(id)arg2;
+ (id)emptyDataSourceManager;
+ (id)keyPathsAffectingCurrentDataSourceManager;

- (long long)filter;
- (id)mediaProvider;
- (void)setFilter:(long long)arg1;

@end
