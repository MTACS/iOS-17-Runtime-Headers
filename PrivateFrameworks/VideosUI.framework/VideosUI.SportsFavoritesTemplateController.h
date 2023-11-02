
@interface VideosUI.SportsFavoritesTemplateController : VideosUI.StackTemplateController {
    void favoriteTeamsBefore;
    void teamsServiceRequest;
    void templateUpdateObserver;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)onAuthenticationDidChange:(id)arg1;
- (void)onFavoritesCacheUpdated:(id)arg1;
- (void)vuiCollectionView:(id)arg1 didSelectItemAt:(id)arg2;
- (void)vuiCollectionView:(id)arg1 willDisplay:(id)arg2 for:(id)arg3;
- (void)vui_viewDidAppear:(bool)arg1;
- (void)vui_viewDidDisappear:(bool)arg1;
- (void)vui_viewDidLoad;

@end
