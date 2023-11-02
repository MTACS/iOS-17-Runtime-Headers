
@protocol PKPassShareSelectDateSectionControllerDelegate <NSObject>

@required

- (void)deselectCells;
- (void)didUpdateDate:(NSDate *)arg1;
- (void)reloadDataAnimated:(bool)arg1;
- (void)reloadItem:(id)arg1 animated:(bool)arg2;

@end
