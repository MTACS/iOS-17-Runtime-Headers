
@interface PXSharedLibraryAssetStatusProvider : PXObservable <PXChangeObserver, PXPhotoLibraryUIChangeObserver> {
    PHAsset * _asset;
    bool  _hasSharedLibraryOrPreview;
    NSString * _localizedContributionStatus;
    PHPhotoLibrary * _photoLibrary;
    PXSharedLibraryStatusProvider * _sharedLibraryStatusProvider;
    unsigned long long  _status;
}

@property (nonatomic, retain) PHAsset *asset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasSharedLibraryOrPreview;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *localizedContributionStatus;
@property (nonatomic) unsigned long long status;
@property (readonly) Class superclass;

+ (id)_appendMediaTypeForStatusStringFormat:(id)arg1 mediaType:(long long)arg2;
+ (id)_applyAttributesToTitle:(id)arg1;
+ (id)_displayNameFont;
+ (id)_libraryNameFont;
+ (id)_localizedContributionStatusForContributor:(id)arg1 status:(unsigned long long)arg2 assetMediaType:(long long)arg3;
+ (id)_primaryFont;
+ (id)localizedContributionStatusStringForParticipants:(id)arg1 assetMediaType:(long long)arg2 showOnlyOneNameToShortenStatus:(bool)arg3;

- (void).cxx_destruct;
- (void)_setPhotoLibrary:(id)arg1;
- (void)_updateProperties;
- (id)asset;
- (id)attributedLocalizedContributionStatusForPreferredWidth:(double)arg1 maximumNumberOfLines:(double)arg2;
- (id)fetchParticipants;
- (bool)hasSharedLibraryOrPreview;
- (id)localizedContributionStatus;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)setAsset:(id)arg1;
- (void)setHasSharedLibraryOrPreview:(bool)arg1;
- (void)setLocalizedContributionStatus:(id)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (unsigned long long)status;

@end
