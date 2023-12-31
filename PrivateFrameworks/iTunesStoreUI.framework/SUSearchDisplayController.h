
@interface SUSearchDisplayController : UISearchDisplayController {
    bool  _store_navigationBarHidingEnabled;
}

- (id)_createPopoverController;
- (void)_noEventSetSearchFieldText:(id)arg1;
- (void)_updateSearchBarMaskIfNecessary;
- (bool)isNavigationBarHidingEnabled;
- (void)setActive:(bool)arg1 animated:(bool)arg2;
- (void)setNavigationBarHidingEnabled:(bool)arg1;

@end
