
@interface PXCMMPosterHeaderViewModel : PXObservable {
    <PXDisplayAsset> * _asset;
    bool  _highlighted;
    <PXUIImageProvider> * _mediaProvider;
    bool  _showStatusCheckmark;
    NSString * _statusString;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, readonly) <PXDisplayAsset> *asset;
@property (getter=isHighlighted, nonatomic, readonly) bool highlighted;
@property (nonatomic, readonly) <PXUIImageProvider> *mediaProvider;
@property (nonatomic, readonly) bool showStatusCheckmark;
@property (nonatomic, readonly, copy) NSString *statusString;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)asset;
- (id)init;
- (bool)isHighlighted;
- (id)mediaProvider;
- (void)performChanges:(id /* block */)arg1;
- (void)setAsset:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setMediaProvider:(id)arg1;
- (void)setShowStatusCheckmark:(bool)arg1;
- (void)setStatusString:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (bool)showStatusCheckmark;
- (id)statusString;
- (id)subtitle;
- (id)title;

@end
