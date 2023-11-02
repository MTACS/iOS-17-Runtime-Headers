
@interface _SBHLibraryCollectionOfModelThings : NSObject {
    SBHLibraryCategoryMapProvider * _categoryMapProvider;
    SBFolderIconImageCache * _folderIconImageCache;
    SBHIconImageCache * _iconImageCache;
    SBHIconModel * _iconModel;
    <SBIconViewProviding> * _iconViewProvider;
    <SBIconListLayoutProvider> * _listLayoutProvider;
    SBRootFolder * _rootFolder;
}

@property (nonatomic, readonly) SBHLibraryCategoryMapProvider *categoryMapProvider;
@property (nonatomic, readonly) SBFolderIconImageCache *folderIconImageCache;
@property (nonatomic, readonly) SBHIconImageCache *iconImageCache;
@property (nonatomic, readonly) SBHIconModel *iconModel;
@property (nonatomic, readonly) <SBIconViewProviding> *iconViewProvider;
@property (nonatomic, readonly) <SBIconListLayoutProvider> *listLayoutProvider;
@property (nonatomic, readonly) SBRootFolder *rootFolder;

- (void).cxx_destruct;
- (id)categoryMapProvider;
- (bool)examineModelValidityWithError:(id*)arg1;
- (id)folderIconImageCache;
- (id)iconImageCache;
- (id)iconModel;
- (id)iconViewProvider;
- (id)initWithIconViewProvider:(id)arg1 iconModel:(id)arg2 rootFolder:(id)arg3 listLayoutProvider:(id)arg4 iconImageCache:(id)arg5 folderIconImageCache:(id)arg6 categoryMapProvider:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)listLayoutProvider;
- (id)rootFolder;

@end
