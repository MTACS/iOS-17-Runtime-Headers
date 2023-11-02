
@interface PUTopPeopleWallpaperSuggestionsDebugSettingsViewController : UIViewController {
    UIButton * _closeButton;
    UIView * _contentView;
    <PUTopPeopleWallpaperSuggestionsDebugSettingsViewControllerDelegate> * _delegate;
    UIView * _distancingSettingsView;
    UIView * _filteringSettingsView;
    UIView * _scoringSettingsView;
    UISegmentedControl * _segmentedControl;
}

@property <PUTopPeopleWallpaperSuggestionsDebugSettingsViewControllerDelegate> *delegate;

- (void).cxx_destruct;
- (void)_close:(id)arg1;
- (void)_switchSettings:(id)arg1;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;

@end
