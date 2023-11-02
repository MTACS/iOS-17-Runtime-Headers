
@interface SBOldIconDragPlatterWindow : SBSecureMainScreenActiveInterfaceOrientationWindow <SBIconDragPreviewContaining> {
    NSHashTable * _platterViews;
}

- (void).cxx_destruct;
- (id)_iconDragPreviewContainerView;
- (void)beginTrackingPlatterView:(id)arg1;
- (void)stopTrackingPlatterView:(id)arg1;

@end
