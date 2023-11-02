
@protocol SBHIconRootViewProviding <SBIconLocationPresenting, SBIconViewQuerying, SBHVisibleContentPresenter, NSObject>

@required

- (void)cancelScrolling;
- (UIView *)contentView;
- (long long)currentPageIndex;
- (UIViewController *)deepestFolderController;
- (SBFolder *)folder;
- (SBFolderIconImageCache *)folderIconImageCache;
- (SBHIconImageCache *)iconImageCache;
- (bool)isEditing;
- (bool)isScrollTracking;
- (bool)isScrolling;
- (_UILegibilitySettings *)legibilitySettings;
- (void)noteUserIsInteractingWithIcons;
- (void)revealIcon:(void *)arg1 animated:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: SBIcon *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setCurrentPageIndex:(long long)arg1;
- (bool)setCurrentPageIndex:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setEditing:(bool)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setFolder:(SBFolder *)arg1;
- (void)setFolderIconImageCache:(SBFolderIconImageCache *)arg1;
- (void)setIconImageCache:(SBHIconImageCache *)arg1;
- (void)setIdleText:(NSString *)arg1;
- (void)setLegibilitySettings:(_UILegibilitySettings *)arg1;

@end
