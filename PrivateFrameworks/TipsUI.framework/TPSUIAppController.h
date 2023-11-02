
@interface TPSUIAppController : TPSAppController {
    void attributedStringCache;
    void footnoteAttributedStringCache;
    void syncQueue;
    void viewNavigationCollapsed;
}

@property (nonatomic) bool viewNavigationCollapsed;

+ (id)shared;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)assetConfigurationForAssets:(id)arg1 language:(id)arg2 sizeClass:(long long)arg3 style:(long long)arg4 assetFileInfoManager:(id)arg5;
- (id)attributedStringForIdentifier:(id)arg1;
- (void)contentWillUpdate;
- (id)footNoteAttributedStringForIdentifier:(id)arg1;
- (id)init;
- (void)overrideWidgetWithTip:(id)arg1;
- (void)resetAttributedStringCache;
- (void)setViewNavigationCollapsed:(bool)arg1;
- (void)updateAttributedString:(id)arg1 forIdentifier:(id)arg2;
- (void)updateFootnoteAttributedString:(id)arg1 forIdentifier:(id)arg2;
- (bool)viewNavigationCollapsed;

@end
