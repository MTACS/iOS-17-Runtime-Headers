
@interface BPSAppGlanceManager : NSObject {
    PSListController * _listControllerDelegate;
}

@property (nonatomic) PSListController *listControllerDelegate;

- (void).cxx_destruct;
- (void)_logGlanceDescriptions;
- (id)glanceSpecifierForIdentifier:(id)arg1;
- (id)listControllerDelegate;
- (void)loadSettings;
- (void)setListControllerDelegate:(id)arg1;
- (void)setShowsGlance:(id)arg1 forSpecifier:(id)arg2;
- (id)showsGlance:(id)arg1;

@end
