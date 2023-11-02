
@interface EKCalendarItemEditorTableView : UITableView {
    bool  _isReloading;
}

@property (nonatomic) bool isReloading;

- (bool)isReloading;
- (void)reloadData;
- (void)scrollToRowAtIndexPath:(id)arg1 atScrollPosition:(long long)arg2 animated:(bool)arg3;
- (void)setIsReloading:(bool)arg1;

@end
