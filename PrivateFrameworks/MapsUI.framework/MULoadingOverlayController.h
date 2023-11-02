
@interface MULoadingOverlayController : NSObject {
    UIView * _contentView;
    MULoadingView * _loadingView;
    UIView * _parentView;
}

- (void).cxx_destruct;
- (void)attachLoadingOverlay;
- (id)initWithParentView:(id)arg1 contentView:(id)arg2;
- (void)removeLoadingOverlayAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)updateLayoutForBoundsChange;

@end
