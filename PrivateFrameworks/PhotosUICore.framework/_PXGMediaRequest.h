
@interface _PXGMediaRequest : NSObject {
    <PXGDisplayAssetAdjustment> * _adjustment;
    <PXDisplayAsset> * _asset;
    struct CGSize { 
        double width; 
        double height; 
    }  _bestReceivedSize;
    bool  _gotAnyResult;
    <PXGDisplayAssetRequestObserver> * _observer;
    unsigned long long  _postProcessOptions;
}

@property (nonatomic, retain) <PXGDisplayAssetAdjustment> *adjustment;
@property (nonatomic, readonly) <PXDisplayAsset> *asset;
@property (nonatomic) struct CGSize { double x1; double x2; } bestReceivedSize;
@property (nonatomic) bool gotAnyResult;
@property (nonatomic, readonly) <PXGDisplayAssetRequestObserver> *observer;
@property (nonatomic, readonly) unsigned long long postProcessOptions;

- (void).cxx_destruct;
- (id)adjustment;
- (id)asset;
- (struct CGSize { double x1; double x2; })bestReceivedSize;
- (bool)gotAnyResult;
- (id)initWithAsset:(id)arg1 observer:(id)arg2 postProcessOptions:(unsigned long long)arg3;
- (id)observer;
- (unsigned long long)postProcessOptions;
- (void)setAdjustment:(id)arg1;
- (void)setBestReceivedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setGotAnyResult:(bool)arg1;

@end
