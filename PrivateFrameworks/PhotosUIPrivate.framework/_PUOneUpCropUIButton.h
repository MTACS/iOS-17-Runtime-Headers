
@interface _PUOneUpCropUIButton : UIButton {
    bool  _beingTouched;
    <_PUOneUpCropUIButtonDelegate> * _delegate;
}

@property (getter=isBeingTouched, nonatomic) bool beingTouched;
@property (nonatomic) <_PUOneUpCropUIButtonDelegate> *delegate;

- (void).cxx_destruct;
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (id)delegate;
- (bool)isBeingTouched;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setBeingTouched:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
