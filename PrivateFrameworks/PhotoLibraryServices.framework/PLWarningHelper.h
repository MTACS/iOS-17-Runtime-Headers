
@interface PLWarningHelper : NSObject {
    NSArray * __assets;
    NSString * __clientName;
    long long  __duplicatePhotoStreamCount;
    long long  __style;
    long long  __syndicationAssetCount;
    PLPhotoLibrary * _photoLibrary;
}

@property (nonatomic, retain) NSArray *_assets;
@property (nonatomic, retain) NSString *_clientName;
@property (nonatomic) long long _duplicatePhotoStreamCount;
@property (nonatomic) long long _style;
@property (nonatomic) long long _syndicationAssetCount;
@property (nonatomic, retain) PLPhotoLibrary *photoLibrary;

- (void).cxx_destruct;
- (id)_assets;
- (unsigned long long)_assetsInLibraryScopeCountFromAssets:(id)arg1;
- (id)_avalancheDeleteWarningForAvalancheStacksCount:(long long)arg1 nonAvalancheItemsToDeleteCount:(long long)arg2 nonAvalancheItemsToDeleteType:(short)arg3 avalanchePhotosToDeleteCount:(long long)arg4 survivingAvalancheFavoritesCount:(long long)arg5 avalancheUnrelatedFavoritesCount:(long long)arg6 assetCount:(long long)arg7;
- (id)_clientName;
- (id)_cloudSharedWarningTextForAssetCount:(long long)arg1 assetType:(short)arg2 albumTitle:(id)arg3;
- (id)_cloudSharedWarningTextForAssets:(id)arg1;
- (id)_contributorsForAssets:(id)arg1;
- (long long)_duplicatePhotoStreamCount;
- (void)_enumerateTestAssetTypesUsingBlock:(id /* block */)arg1;
- (void)_enumerateTestBooleansUsingBlock:(id /* block */)arg1;
- (void)_enumerateTestDeviceModelNamesUsingBlock:(id /* block */)arg1;
- (void)_enumerateTestItemCountsUsingBlock:(id /* block */)arg1;
- (void)_enumerateTestOtherItemCountsUsingBlock:(id /* block */)arg1;
- (void)_enumerateWarningMessagesUsingBlock:(id /* block */)arg1 sectionBlock:(id /* block */)arg2;
- (void)_getDeletionWarningTitle:(id*)arg1 message:(id*)arg2 buttonTitle:(id*)arg3;
- (void)_getExpungeWarningMessage:(id*)arg1 buttonTitle:(id*)arg2 forAssetCount:(long long)arg3 assetType:(short)arg4 iCPLEnabled:(bool)arg5 contributors:(id)arg6 deviceModelName:(id)arg7;
- (void)_getWarningTitle:(id*)arg1 message:(id*)arg2 buttonTitle:(id*)arg3 forItemSuffix:(id)arg4 count:(unsigned long long)arg5 operation:(long long)arg6 clientName:(id)arg7;
- (bool)_hasAssetsInLibraryScope:(id)arg1;
- (bool)_isExitingSharedLibrary;
- (id)_myAssetsFromAssets:(id)arg1;
- (long long)_style;
- (long long)_syndicationAssetCount;
- (id)_usedElsewhereWarningTextForAssetCount:(long long)arg1 inLibraryScopeCount:(long long)arg2 myAssets:(id)arg3 contributors:(id)arg4 inPhotoStreamCount:(long long)arg5 iniPhotoCount:(long long)arg6 inSomeAlbumCount:(long long)arg7 affectedLocalAlbumsCount:(long long)arg8 assetType:(short)arg9 actualDeletionCount:(long long)arg10 syndicationAssetCount:(long long)arg11;
- (id)_usedElsewhereWarningTextForAssets:(id)arg1 duplicatePhotoStreamCount:(long long)arg2 actualDeletionCount:(long long)arg3;
- (id)allWarningMessageCombinations;
- (void)enumerateWarningMessagesUsingBlock:(id /* block */)arg1;
- (void)getAvalancheDeleteWarning:(id*)arg1 actualDeletionCount:(long long*)arg2 forAssets:(id)arg3;
- (void)getDeletionWarningTitle:(id*)arg1 message:(id*)arg2 buttonTitle:(id*)arg3 forAlbums:(id)arg4 folders:(id)arg5 clientName:(id)arg6 style:(long long)arg7;
- (void)getDeletionWarningTitle:(id*)arg1 message:(id*)arg2 buttonTitle:(id*)arg3 forAssets:(id)arg4 duplicatePhotoStreamCount:(long long)arg5 syndicationAssetCount:(long long)arg6 clientName:(id)arg7 style:(long long)arg8;
- (void)getExpungeWarningMessage:(id*)arg1 buttonTitle:(id*)arg2 forAssets:(id)arg3;
- (void)getWarningTitle:(id*)arg1 message:(id*)arg2 buttonTitle:(id*)arg3 forAssets:(id)arg4 operation:(long long)arg5 clientName:(id)arg6;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)photoLibrary;
- (void)setPhotoLibrary:(id)arg1;
- (void)set_assets:(id)arg1;
- (void)set_clientName:(id)arg1;
- (void)set_duplicatePhotoStreamCount:(long long)arg1;
- (void)set_style:(long long)arg1;
- (void)set_syndicationAssetCount:(long long)arg1;

@end
