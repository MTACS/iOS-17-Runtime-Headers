
@protocol DBWidgetFocusableViewDelegate <NSObject>

@required

- (void)focusableItem:(CRSDashboardFocusableItem *)arg1 didChangeFocused:(bool)arg2;
- (void)focusableItem:(CRSDashboardFocusableItem *)arg1 didChangePressed:(bool)arg2;
- (void)selectedFocusableItem:(CRSDashboardFocusableItem *)arg1;

@end
