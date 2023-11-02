
@interface CKWolfEntryBackgroundView : UIView <CKMessageEntryBackgroundViewProtocol> {
    UIView * _blurView;
    NSString * backdropGroupName;
    UITraitCollection * entryViewTraitCollection;
    long long  style;
}

@property (nonatomic, retain) NSString *backdropGroupName;
@property (nonatomic, retain) UIView *blurView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UITraitCollection *entryViewTraitCollection;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)backdropGroupName;
- (id)blurView;
- (id)entryViewTraitCollection;
- (id)init;
- (id)inputAccessoryViewBackdropColor;
- (id)inputAccessoryViewBackdropEffects;
- (void)layoutSubviews;
- (void)setBackdropGroupName:(id)arg1;
- (void)setBlurView:(id)arg1;
- (void)setEntryViewTraitCollection:(id)arg1;
- (void)setStyle:(long long)arg1;
- (long long)style;

@end
