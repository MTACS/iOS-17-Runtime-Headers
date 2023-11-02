
@interface PXCMMInvitationViewModel : PXObservable {
    NSAttributedString * _attributedPosterTitle;
    NSAttributedString * _attributedSubtitle1;
    NSAttributedString * _attributedSubtitle2;
    NSAttributedString * _attributedTitle;
    bool  _highlighted;
    bool  _isNew;
    UIColor * _opaqueAncestorBackgroundColor;
    <PXDisplayAsset> * _posterAsset;
    <PXUIImageProvider> * _posterMediaProvider;
    NSString * _posterSubtitle;
    NSString * _posterTitle;
}

@property (nonatomic, readonly, copy) NSAttributedString *attributedPosterTitle;
@property (nonatomic, readonly, copy) NSAttributedString *attributedSubtitle1;
@property (nonatomic, readonly, copy) NSAttributedString *attributedSubtitle2;
@property (nonatomic, readonly, copy) NSAttributedString *attributedTitle;
@property (getter=isHighlighted, nonatomic, readonly) bool highlighted;
@property (nonatomic, readonly) bool isNew;
@property (nonatomic, readonly) UIColor *opaqueAncestorBackgroundColor;
@property (nonatomic, readonly, copy) <PXDisplayAsset> *posterAsset;
@property (nonatomic, readonly, copy) <PXUIImageProvider> *posterMediaProvider;
@property (nonatomic, readonly, copy) NSString *posterSubtitle;
@property (nonatomic, readonly, copy) NSString *posterTitle;

- (void).cxx_destruct;
- (id)attributedPosterTitle;
- (id)attributedSubtitle1;
- (id)attributedSubtitle2;
- (id)attributedTitle;
- (id)init;
- (bool)isHighlighted;
- (bool)isNew;
- (id)opaqueAncestorBackgroundColor;
- (void)performChanges:(id /* block */)arg1;
- (id)posterAsset;
- (id)posterMediaProvider;
- (id)posterSubtitle;
- (id)posterTitle;
- (void)setAttributedPosterTitle:(id)arg1;
- (void)setAttributedSubtitle1:(id)arg1;
- (void)setAttributedSubtitle2:(id)arg1;
- (void)setAttributedTitle:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setIsNew:(bool)arg1;
- (void)setOpaqueAncestorBackgroundColor:(id)arg1;
- (void)setPosterAsset:(id)arg1;
- (void)setPosterMediaProvider:(id)arg1;
- (void)setPosterSubtitle:(id)arg1;
- (void)setPosterTitle:(id)arg1;

@end
