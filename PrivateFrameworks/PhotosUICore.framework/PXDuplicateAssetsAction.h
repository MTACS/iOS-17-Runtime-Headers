
@interface PXDuplicateAssetsAction : PXAssetsSelectionAction {
    NSProgress * _actionProgress;
    long long  _assetCount;
    bool  _canExtractStill;
    NSArray * _createdAssetLocalIdentifiers;
    PHFetchResult * _createdAssets;
    bool  _didCheckDuplicateCapabilities;
    id /* block */  _downloadCompletionHandler;
    bool  _duplicatesAsStill;
    bool  _duplicatesOriginal;
    NSMutableArray * _originalAssets;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stillImageTime;
}

@property (nonatomic, retain) NSProgress *actionProgress;
@property (nonatomic, readonly) bool canExtractStill;
@property (nonatomic, readonly) PHFetchResult *createdAssets;
@property (nonatomic, copy) id /* block */ downloadCompletionHandler;
@property (nonatomic) bool duplicatesAsStill;
@property (nonatomic) bool duplicatesOriginal;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } stillImageTime;

+ (bool)canPerformOnAllAssets:(id)arg1;
+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;

- (void).cxx_destruct;
- (void)_checkDuplicateCapabilities;
- (id)actionNameLocalizationKey;
- (id)actionProgress;
- (long long)assetCount;
- (bool)canExtractStill;
- (id)createdAssets;
- (id /* block */)downloadCompletionHandler;
- (bool)duplicatesAsStill;
- (bool)duplicatesOriginal;
- (id)initWithSelectionSnapshot:(id)arg1;
- (void)performAction:(id /* block */)arg1;
- (void)performUndo:(id /* block */)arg1;
- (void)setActionProgress:(id)arg1;
- (void)setDownloadCompletionHandler:(id /* block */)arg1;
- (void)setDuplicatesAsStill:(bool)arg1;
- (void)setDuplicatesOriginal:(bool)arg1;
- (void)setStillImageTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })stillImageTime;

@end
