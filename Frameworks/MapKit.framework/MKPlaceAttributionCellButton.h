
@interface MKPlaceAttributionCellButton : UIButton {
    <MKPlaceAttributionCellButtonDelegate> * _buttonDelegate;
    bool  _highlighted;
}

@property (nonatomic) <MKPlaceAttributionCellButtonDelegate> *buttonDelegate;

- (void).cxx_destruct;
- (id)buttonDelegate;
- (bool)isHighlighted;
- (void)setButtonDelegate:(id)arg1;
- (void)setHighlighted:(bool)arg1;

@end
