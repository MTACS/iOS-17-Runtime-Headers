
@interface _UICollectionViewListCellVisualProvider : NSObject {
    UICollectionViewListCell * _cell;
}

@property (nonatomic, readonly) UIView *accessoryManagerContainerView;
@property (nonatomic, readonly) bool canFocusProgrammatically;
@property (nonatomic, readonly) long long defaultFocusStyle;

- (id)accessoryManagerContainerView;
- (bool)canFocusProgrammatically;
- (void)configureFocusedFloatingContentView:(id)arg1;
- (long long)defaultFocusStyle;
- (id)initWithListCell:(id)arg1;

@end
