
@protocol SBIconListModelDelegate <NSObject>

@optional

- (bool)iconListModel:(SBIconListModel *)arg1 isAllowedToContainIcon:(SBIcon *)arg2;
- (bool)iconListModel:(SBIconListModel *)arg1 isGridLayoutValid:(SBIconListGridCellInfo *)arg2;
- (SBIcon *)iconListModel:(SBIconListModel *)arg1 shouldBounceIcon:(SBIcon *)arg2 afterInsertingIcons:(NSArray *)arg3;

@end
