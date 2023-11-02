
@interface CompletionArrowView : UIButton {
    UIButtonConfiguration * _buttonConfiguration;
    UITableViewCell * _parentCell;
    bool  _usesDownBackwardCompletionArrow;
}

@property (nonatomic, retain) UIButtonConfiguration *buttonConfiguration;
@property (nonatomic) UITableViewCell *parentCell;
@property (nonatomic) bool usesDownBackwardCompletionArrow;

- (void).cxx_destruct;
- (id)buttonConfiguration;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)parentCell;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setButtonConfiguration:(id)arg1;
- (void)setParentCell:(id)arg1;
- (void)setUsesDownBackwardCompletionArrow:(bool)arg1;
- (bool)usesDownBackwardCompletionArrow;

@end
