
@interface CDMDefaultAssetsManager : NSObject {
    NSString * _assetDirPath;
    NSFileManager * _fileManager;
    NSLocale * _locale;
}

@property (nonatomic, readonly) NSString *assetDirPath;
@property (nonatomic, readonly) NSLocale *locale;

- (void).cxx_destruct;
- (id)assetDirPath;
- (id)getAbsolutePathForAssetsRootFolder;
- (id)getAbsolutePathForLocalizedAssetsRootFolder;
- (id)getAbsolutePathForServiceAssetFolders:(id)arg1;
- (id)initWithLocale:(id)arg1;
- (id)initWithLocale:(id)arg1 assetDirPath:(id)arg2;
- (id)locale;
- (void)setAssetDirPath:(id)arg1;

@end
