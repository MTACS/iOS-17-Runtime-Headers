
@interface PXCMMImageViewModel : PXObservable {
    <PXDisplayAsset> * _asset;
    bool  _highlighted;
    <PXUIImageProvider> * _mediaProvider;
}

@property (nonatomic, readonly) <PXDisplayAsset> *asset;
@property (getter=isHighlighted, nonatomic, readonly) bool highlighted;
@property (nonatomic, readonly) <PXUIImageProvider> *mediaProvider;

- (void).cxx_destruct;
- (id)asset;
- (bool)isHighlighted;
- (id)mediaProvider;
- (void)performChanges:(id /* block */)arg1;
- (void)setAsset:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setMediaProvider:(id)arg1;

@end
