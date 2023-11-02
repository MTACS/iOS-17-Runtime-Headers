
@interface MUPlacePhotoGalleryAttributionView : UIView <MUActivityObserving, UITextViewDelegate> {
    UIButton * _accessoryButton;
    UILabel * _captionLabel;
    NSLayoutConstraint * _captionToPrimaryLabelConstraint;
    <MUPlacePhotoGalleryAttributionViewDelegate> * _delegate;
    UIVisualEffectView * _effectView;
    UIMenu * _menu;
    MULinkView * _primaryLabel;
    UILabel * _secondaryLabel;
    MUPlacePhotoGalleryAttributionViewModel * _viewModel;
}

@property (nonatomic, retain) UIButton *accessoryButton;
@property (nonatomic, readonly) UIView *accessoryView;
@property (nonatomic, retain) UILabel *captionLabel;
@property (nonatomic, retain) NSLayoutConstraint *captionToPrimaryLabelConstraint;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MUPlacePhotoGalleryAttributionViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIVisualEffectView *effectView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIMenu *menu;
@property (nonatomic, retain) MULinkView *primaryLabel;
@property (nonatomic, retain) UILabel *secondaryLabel;
@property (readonly) Class superclass;
@property (nonatomic, retain) MUPlacePhotoGalleryAttributionViewModel *viewModel;

- (void).cxx_destruct;
- (void)_accessoryViewTapped;
- (void)_attributionTapped;
- (void)_buildAndUpdateDescription;
- (void)_updateAppearance;
- (id)accessoryButton;
- (id)accessoryView;
- (void)beginAnimatingActivityIndicator;
- (id)captionLabel;
- (id)captionToPrimaryLabelConstraint;
- (id)delegate;
- (id)effectView;
- (void)endAnimatingActivityIndicatorWithError:(id)arg1;
- (id)init;
- (id)menu;
- (id)primaryLabel;
- (id)secondaryLabel;
- (void)setAccessoryButton:(id)arg1;
- (void)setCaptionLabel:(id)arg1;
- (void)setCaptionToPrimaryLabelConstraint:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEffectView:(id)arg1;
- (void)setMenu:(id)arg1;
- (void)setPrimaryLabel:(id)arg1;
- (void)setSecondaryLabel:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)setupSubviews;
- (id)viewModel;

@end
