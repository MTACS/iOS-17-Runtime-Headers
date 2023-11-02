
@protocol CAMExpandingControlDelegate <NSObject>

@required

- (void)expandingControl:(CAMExpandingControl *)arg1 didChangeExpanded:(bool)arg2 animated:(bool)arg3;
- (void)expandingControl:(CAMExpandingControl *)arg1 willChangeExpanded:(bool)arg2 animated:(bool)arg3;

@end
