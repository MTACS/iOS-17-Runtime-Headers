
@interface VideosUI.MultiViewPlayerHUDTemplateController : VideosUI.PlayerHUDTemplateController <VUIMultiPlayerDetailsViewController> {
    void cancellables;
    void focusedViewModelIdentifier;
    void shouldDismissOnSelect;
}

@property (nonatomic, readonly) long long itemCount;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (long long)itemCount;
- (void)updateVisibleCellsWithPlaybackIdentifiers:(id)arg1;
- (void)updateWithSelectedPlaybackIdentifiers:(id)arg1 reloadingData:(bool)arg2;
- (void)vuiScrollViewDidScroll:(id)arg1;
- (void)vui_viewDidLoad;
- (void)vui_viewWillAppear:(bool)arg1;

@end
