
@interface SKUINavigationBarSegmentsController : SKUINavigationBarSectionController {
    SKUISegmentedControlViewElementController * _underlyingController;
}

- (void).cxx_destruct;
- (id)initWithViewElement:(id)arg1;
- (void)reloadAfterDocumentUpdateWithNavigationItem:(id)arg1;
- (id)view;
- (void)willAppearInNavigationBar;

@end
