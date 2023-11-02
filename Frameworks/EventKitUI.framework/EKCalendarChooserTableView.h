
@interface EKCalendarChooserTableView : UITableView {
    bool  _shouldUpdateAccessoryTintColor;
}

@property (nonatomic) bool shouldUpdateAccessoryTintColor;

- (void)setShouldUpdateAccessoryTintColor:(bool)arg1;
- (bool)shouldUpdateAccessoryTintColor;
- (void)tintColorDidChange;

@end
