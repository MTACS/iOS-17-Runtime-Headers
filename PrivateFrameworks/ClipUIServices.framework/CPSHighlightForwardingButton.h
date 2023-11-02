
@interface CPSHighlightForwardingButton : UIButton {
    <CPSHighlightable> * _highlightForwardingTarget;
}

@property (nonatomic) <CPSHighlightable> *highlightForwardingTarget;

- (void).cxx_destruct;
- (id)highlightForwardingTarget;
- (void)setHighlightForwardingTarget:(id)arg1;
- (void)setHighlighted:(bool)arg1;

@end
