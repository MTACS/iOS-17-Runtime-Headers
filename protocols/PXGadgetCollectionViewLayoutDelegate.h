
@protocol PXGadgetCollectionViewLayoutDelegate <NSObject>

@required

- (PXGadgetDataSource *)dataSource;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insetsForSectionHeaders;
- (bool)isTogglingSidebarNoRotating;

@end
