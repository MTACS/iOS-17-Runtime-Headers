
@interface PHContentEditingInputRequestOptions : NSObject <PHMediaRequestThreadingOptions> {
    id /* block */  _canHandleAdjustmentData;
    id /* block */  _canHandleRAW;
    long long  _contentMode;
    bool  _dontAllowRAW;
    long long  _downloadIntent;
    bool  _editAsOvercapture;
    bool  _forcePrepareCurrentBaseVersionInAddition;
    bool  _forceReturnFullLivePhoto;
    bool  _forceRunAsUnadjustedAsset;
    bool  _loadResourcesToFlip;
    bool  _networkAccessAllowed;
    unsigned long long  _originalChoice;
    id /* block */  _progressHandler;
    NSObject<OS_dispatch_queue> * _resultHandlerQueue;
    bool  _shouldForceOriginalChoice;
    bool  _skipDisplaySizeImage;
    bool  _skipLivePhotoImageAndAVAsset;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetSize;
}

@property (nonatomic, copy) id /* block */ canHandleAdjustmentData;
@property (nonatomic, copy) id /* block */ canHandleRAW;
@property (nonatomic) long long contentMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool dontAllowRAW;
@property (nonatomic) long long downloadIntent;
@property (nonatomic) bool editAsOvercapture;
@property (nonatomic) bool forcePrepareCurrentBaseVersionInAddition;
@property (nonatomic) bool forceReturnFullLivePhoto;
@property (nonatomic) bool forceRunAsUnadjustedAsset;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool loadResourcesToFlip;
@property (getter=isNetworkAccessAllowed, nonatomic) bool networkAccessAllowed;
@property (nonatomic) unsigned long long originalChoice;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *resultHandlerQueue;
@property (nonatomic) bool shouldForceOriginalChoice;
@property (nonatomic) bool skipDisplaySizeImage;
@property (nonatomic) bool skipLivePhotoImageAndAVAsset;
@property (readonly) Class superclass;
@property (nonatomic) struct CGSize { double x1; double x2; } targetSize;

- (void).cxx_destruct;
- (id /* block */)canHandleAdjustmentData;
- (id /* block */)canHandleRAW;
- (long long)contentMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)dontAllowRAW;
- (long long)downloadIntent;
- (bool)editAsOvercapture;
- (bool)forcePrepareCurrentBaseVersionInAddition;
- (bool)forceReturnFullLivePhoto;
- (bool)forceRunAsUnadjustedAsset;
- (bool)isNetworkAccessAllowed;
- (bool)isSynchronous;
- (bool)loadResourcesToFlip;
- (unsigned long long)originalChoice;
- (id /* block */)progressHandler;
- (id)resultHandlerQueue;
- (void)setCanHandleAdjustmentData:(id /* block */)arg1;
- (void)setCanHandleRAW:(id /* block */)arg1;
- (void)setContentMode:(long long)arg1;
- (void)setDontAllowRAW:(bool)arg1;
- (void)setDownloadIntent:(long long)arg1;
- (void)setEditAsOvercapture:(bool)arg1;
- (void)setForcePrepareCurrentBaseVersionInAddition:(bool)arg1;
- (void)setForceReturnFullLivePhoto:(bool)arg1;
- (void)setForceRunAsUnadjustedAsset:(bool)arg1;
- (void)setLoadResourcesToFlip:(bool)arg1;
- (void)setNetworkAccessAllowed:(bool)arg1;
- (void)setOriginalChoice:(unsigned long long)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setResultHandlerQueue:(id)arg1;
- (void)setShouldForceOriginalChoice:(bool)arg1;
- (void)setSkipDisplaySizeImage:(bool)arg1;
- (void)setSkipLivePhotoImageAndAVAsset:(bool)arg1;
- (void)setTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)shouldForceOriginalChoice;
- (bool)skipDisplaySizeImage;
- (bool)skipLivePhotoImageAndAVAsset;
- (struct CGSize { double x1; double x2; })targetSize;

@end
