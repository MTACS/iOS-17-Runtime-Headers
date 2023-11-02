
@interface PXContentSyndicationGadgetViewModel : PXObservable {
    UIImage * _avatarImage;
    long long  _keyImageCount;
    NSMutableDictionary * _keyImages;
    NSAttributedString * _overlayTitle;
    SLHighlight * _socialLayerHighlight;
}

@property (nonatomic, readonly, copy) UIImage *avatarImage;
@property (nonatomic, readonly) long long keyImageCount;
@property (nonatomic, readonly, copy) NSAttributedString *overlayTitle;
@property (nonatomic, readonly) SLHighlight *socialLayerHighlight;

- (void).cxx_destruct;
- (id)avatarImage;
- (id)keyImageAtIndex:(long long)arg1;
- (long long)keyImageCount;
- (id)overlayTitle;
- (void)performChanges:(id /* block */)arg1;
- (void)setAvatarImage:(id)arg1;
- (void)setKeyImage:(id)arg1 atIndex:(long long)arg2;
- (void)setKeyImageCount:(long long)arg1;
- (void)setOverlayTitle:(id)arg1;
- (void)setSocialLayerHighlight:(id)arg1;
- (id)socialLayerHighlight;

@end
