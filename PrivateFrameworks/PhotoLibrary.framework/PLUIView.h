
@interface PLUIView : UIView {
    bool  _disableViewInPopoverRule;
}

@property (nonatomic) bool disableViewInPopoverRule;

- (void)didMoveToWindow;
- (bool)disableViewInPopoverRule;
- (void)setDisableViewInPopoverRule:(bool)arg1;

@end
