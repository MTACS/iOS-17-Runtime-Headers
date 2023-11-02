
@interface SUUINavigationPaletteController : SUUINavigationBarSectionController {
    SUUINavigationBarContext * _navigationBarContext;
    SUUINavigationPaletteView * _paletteView;
    SUUIPaletteViewElement * _viewElement;
    SUUIViewElementLayoutContext * _viewLayoutContext;
}

- (void).cxx_destruct;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)initWithPaletteViewElement:(id)arg1;
- (void)reloadSectionViews;
- (id)view;
- (id)viewForElementIdentifier:(id)arg1;
- (void)willAppearInNavigationBar;

@end
