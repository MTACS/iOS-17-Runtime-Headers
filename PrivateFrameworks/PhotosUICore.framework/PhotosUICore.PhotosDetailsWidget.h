
@interface PhotosUICore.PhotosDetailsWidget : NSObject <PXWidget> {
    void $__lazy_storage_$_contentViewController;
    void _context;
    void _spec;
    void _viewModel;
    void widgetDelegate;
}

@property (nonatomic, readonly) <PXAnonymousView> *contentView;
@property (nonatomic, retain) PXPhotosDetailsContext *context;
@property (nonatomic, retain) PXWidgetSpec *spec;
@property (nonatomic) <PXWidgetDelegate> *widgetDelegate;

- (void).cxx_destruct;
- (id)contentView;
- (void)contentViewDidDisappear;
- (id)context;
- (id)init;
- (double)preferredContentHeightForWidth:(double)arg1;
- (void)setContext:(id)arg1;
- (void)setSpec:(id)arg1;
- (void)setWidgetDelegate:(id)arg1;
- (id)spec;
- (id)widgetDelegate;

@end
