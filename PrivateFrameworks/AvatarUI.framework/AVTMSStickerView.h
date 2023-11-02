
@interface AVTMSStickerView : MSStickerView <UIGestureRecognizerDelegate> {
    bool  _allowsPeel;
    <AVTMSStickerViewDelegate> * _delegate;
    <AVTStickerDisclosureValidationDelegate> * _disclosureValidationDelegate;
}

@property (nonatomic) bool allowsPeel;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVTMSStickerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) <AVTStickerDisclosureValidationDelegate> *disclosureValidationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_prepareForReuse;
- (bool)allowsPeel;
- (id)delegate;
- (id)disclosureValidationDelegate;
- (void)handleLongPress:(id)arg1;
- (void)handleTap:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAllowsPeel:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisclosureValidationDelegate:(id)arg1;

@end
