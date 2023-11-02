
@interface PXGImageRequestSharedState : NSObject {
    <PXGDisplayAssetAdjustment> * _adjustment;
    bool  _applyCleanApertureCrop;
    <PXDisplayAssetFetchResult> * _displayAssetFetchResult;
    unsigned long long  _intent;
    PXMediaProvider * _mediaProvider;
    <PXGDisplayAssetRequestObserver> * _observer;
    unsigned long long  _presentationStyles;
    double  _screenScale;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetSize;
    bool  _useLowMemoryDecode;
}

@property (nonatomic, readonly) <PXGDisplayAssetAdjustment> *adjustment;
@property (nonatomic, readonly) bool applyCleanApertureCrop;
@property (nonatomic, readonly) <PXDisplayAssetFetchResult> *displayAssetFetchResult;
@property (nonatomic, readonly) unsigned long long intent;
@property (nonatomic, readonly) PXMediaProvider *mediaProvider;
@property (nonatomic, readonly) <PXGDisplayAssetRequestObserver> *observer;
@property (nonatomic, readonly) unsigned long long presentationStyles;
@property (nonatomic, readonly) double screenScale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } targetSize;
@property (nonatomic, readonly) bool useLowMemoryDecode;

- (void).cxx_destruct;
- (id)adjustment;
- (bool)applyCleanApertureCrop;
- (id)displayAssetFetchResult;
- (id)initWithDisplayAssetFetchResult:(id)arg1 observer:(id)arg2 presentationStyles:(unsigned long long)arg3 targetSize:(struct CGSize { double x1; double x2; })arg4 screenScale:(double)arg5 adjustment:(id)arg6 intent:(unsigned long long)arg7 useLowMemoryDecode:(bool)arg8 applyCleanApertureCrop:(bool)arg9 mediaProvider:(id)arg10;
- (unsigned long long)intent;
- (id)mediaProvider;
- (id)observer;
- (unsigned long long)presentationStyles;
- (double)screenScale;
- (struct CGSize { double x1; double x2; })targetSize;
- (bool)useLowMemoryDecode;

@end
