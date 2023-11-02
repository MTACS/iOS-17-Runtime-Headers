
@interface PXUIWidgetBar : PXWidgetBar {
    PXUIWidgetBarViewTile * __viewTile;
}

@property (nonatomic, readonly) PXUIWidgetBarViewTile *_viewTile;

- (void).cxx_destruct;
- (id)_viewTile;
- (void)checkInTile:(id)arg1;
- (id)checkOutTileWithKind:(long long)arg1;
- (id)createTileAnimator;
- (void)updateView;

@end
