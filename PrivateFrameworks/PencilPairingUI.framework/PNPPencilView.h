
@interface PNPPencilView : UIView <PNPDeviceStateConfigurable, PNPPencilInteractionEventDestination> {
    <PNPPencilViewDelegate> * _delegate;
    PNPDeviceState * _deviceState;
    UIImageView * _pencilImageView;
    _PNPPencilMovieView * _pencilMovieView;
    bool  _spinning;
    double  _touchIndicatorPosition;
    bool  _touchIndicatorShown;
    UIView * _touchIndicatorView;
    unsigned long long  _variant;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PNPPencilViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) PNPDeviceState *deviceState;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool spinning;
@property (readonly) Class superclass;

+ (id)_hardwareImageForVariant:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_animateIndicatorToShown:(bool)arg1 withCompletionBlock:(id /* block */)arg2;
- (struct CGSize { double x1; double x2; })_edgeAccurateSizeForLength:(double)arg1 depth:(double)arg2 deviceState:(id)arg3;
- (void)_prepareMovieView;
- (void)_resetTouchIndicatorPosition;
- (void)cleanupSpinningResources;
- (struct CGSize { double x1; double x2; })comfortableContainingSizeForDeviceState:(id)arg1;
- (void)completeRevolutionWithCompletionBlock:(id /* block */)arg1;
- (id)delegate;
- (id)deviceState;
- (void)eventSource:(id)arg1 hadPencilDoubleTapped:(id /* block */)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithVariant:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (struct CGSize { double x1; double x2; })intrinsicSizeForDeviceState:(id)arg1;
- (void)layoutSubviews;
- (void)prepareMovieForSpinningPencil;
- (void)setDelegate:(id)arg1;
- (void)setDeviceState:(id)arg1;
- (void)setSpinning:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)spinning;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForDeviceState:(id)arg1;

@end
