
@interface WebExtensionWindow : NSObject <WBSWebExtensionWindow> {
    BrowserController * _browserController;
    double  _idForWebExtensions;
    bool  _isPrivateWindow;
}

@property (nonatomic, readonly) <WBSWebExtensionTab> *activeWebExtensionTab;
@property (nonatomic, readonly) BrowserController *browserController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double idForWebExtensions;
@property (nonatomic, readonly) bool isFocused;
@property (nonatomic, readonly) bool isPopupWindow;
@property (nonatomic, readonly) bool isPrivate;
@property (nonatomic) bool isPrivateWindow;
@property (nonatomic, readonly, copy) WBProfile *profile;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *webExtensionTabs;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } webExtensionWindowGeometry;
@property (nonatomic, readonly, copy) NSString *webExtensionWindowState;
@property (nonatomic, readonly, copy) NSString *webExtensionWindowType;

- (void).cxx_destruct;
- (bool)_isPrivateWithSingleTabShowingExplanationText;
- (id)_webExtensionTabsWithoutCopying;
- (id)activeWebExtensionTab;
- (id)browserController;
- (void)createNewTabAtIndex:(id)arg1 url:(id)arg2 makeActive:(bool)arg3 completionHandler:(id /* block */)arg4;
- (double)idForWebExtensions;
- (id)initWithBrowserController:(id)arg1 isPrivateWindow:(bool)arg2;
- (bool)isFocused;
- (bool)isPopupWindow;
- (bool)isPrivate;
- (bool)isPrivateWindow;
- (id)profile;
- (void)setIsPrivateWindow:(bool)arg1;
- (void)validateToolbarItemForExtension:(id)arg1;
- (id)webExtensionTabs;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })webExtensionWindowGeometry;
- (id)webExtensionWindowState;
- (id)webExtensionWindowType;

@end
