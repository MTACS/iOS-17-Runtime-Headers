
@interface MUPlaceHeaderButtonsSectionControllerConfiguration : NSObject {
    GEOHeaderButtonModuleConfiguration * _buttonModuleConfiguration;
    bool  _canShowDetourTime;
    MKETAProvider * _etaProvider;
    <MUHeaderButtonMenuActionProvider> * _menuProvider;
    bool  _showMoreButton;
}

@property (nonatomic, retain) GEOHeaderButtonModuleConfiguration *buttonModuleConfiguration;
@property (nonatomic) bool canShowDetourTime;
@property (nonatomic) MKETAProvider *etaProvider;
@property (nonatomic) <MUHeaderButtonMenuActionProvider> *menuProvider;
@property (nonatomic) bool showMoreButton;

- (void).cxx_destruct;
- (id)buttonModuleConfiguration;
- (bool)canShowDetourTime;
- (id)etaProvider;
- (id)menuProvider;
- (void)setButtonModuleConfiguration:(id)arg1;
- (void)setCanShowDetourTime:(bool)arg1;
- (void)setEtaProvider:(id)arg1;
- (void)setMenuProvider:(id)arg1;
- (void)setShowMoreButton:(bool)arg1;
- (bool)showMoreButton;

@end
