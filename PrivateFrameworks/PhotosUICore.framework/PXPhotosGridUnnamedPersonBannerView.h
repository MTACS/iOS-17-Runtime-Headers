
@interface PXPhotosGridUnnamedPersonBannerView : UIView <PXPhotosBannerView> {
    NSShadow * _buttonShadow;
    <PXPhotosGridUnnamedPersonBannerDelegate> * _delegate;
    UIButton * _primaryActionButton;
    PXFeatureSpec * _spec;
    long long  _type;
}

@property (nonatomic, readonly) NSString *actionString;
@property (nonatomic, readonly) NSShadow *buttonShadow;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXPhotosGridUnnamedPersonBannerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIButton *primaryActionButton;
@property (nonatomic, retain) PXFeatureSpec *spec;
@property (readonly) Class superclass;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (void)_handlePrimaryAction;
- (void)_updateButtonConfiguration;
- (id)actionString;
- (id)buttonShadow;
- (id)delegate;
- (id)initWithType:(long long)arg1;
- (void)layoutSubviews;
- (id)primaryActionButton;
- (void)setDelegate:(id)arg1;
- (void)setSpec:(id)arg1;
- (void)setType:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)spec;
- (long long)type;

@end
