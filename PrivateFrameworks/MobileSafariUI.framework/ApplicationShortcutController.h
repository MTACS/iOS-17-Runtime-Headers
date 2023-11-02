
@interface ApplicationShortcutController : NSObject {
    BrowserController * _browserController;
}

@property (nonatomic) BrowserController *browserController;

+ (id)_shortcutItemWithType:(id)arg1 systemImageName:(id)arg2;
+ (id)_shortcutItems;
+ (void)updateShortcutItemsIfNeeded;

- (void).cxx_destruct;
- (bool)_handleActionWithType:(id)arg1;
- (void)_openNewEmptyTabWithURLFieldFocused:(bool)arg1 privateBrowsingState:(long long)arg2;
- (void)_showBookmarksPanelWithSelectedCollection:(id)arg1;
- (id)browserController;
- (bool)handleActionWithType:(id)arg1;
- (bool)handleShortcutItemWithType:(id)arg1;
- (void)setBrowserController:(id)arg1;

@end
