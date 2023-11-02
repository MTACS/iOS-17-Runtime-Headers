
@interface PXDiagnosticsService : NSObject {
    bool  _canPerformAction;
    bool  _canProvideConsoleDescription;
    bool  _canProvideSettingsViewController;
    NSString * _consoleDescription;
    NSArray * _itemProviders;
    UIViewController * _settingsViewController;
}

@property (nonatomic, readonly) bool canPerformAction;
@property (nonatomic, readonly) bool canProvideConsoleDescription;
@property (nonatomic, readonly) bool canProvideContextualViewController;
@property (nonatomic, readonly) bool canProvideSettingsViewController;
@property (nonatomic, readonly) NSString *consoleDescription;
@property (nonatomic, readonly) UIViewController *contextualViewController;
@property (nonatomic, readonly, copy) NSArray *itemProviders;
@property (nonatomic, readonly) UIViewController *settingsViewController;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (bool)canPerformAction;
- (bool)canProvideConsoleDescription;
- (bool)canProvideContextualViewController;
- (bool)canProvideSettingsViewController;
- (id)consoleDescription;
- (id)contextualViewController;
- (id)init;
- (id)initWithItemProviders:(id)arg1;
- (id)itemProviders;
- (void)performAction;
- (id)settingsViewController;
- (id)title;

@end
