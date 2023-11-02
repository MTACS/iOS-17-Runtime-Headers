
@interface QLDetachedSceneDelegate : NSObject <QLPreviewControllerDataSource, QLPreviewControllerDelegate, UIWindowSceneDelegate> {
    NSDictionary * _editingModes;
    NSUserActivity * _quicklookActivity;
    QLPreviewController * _quicklookController;
    unsigned long long  _selectedURLIndex;
    NSArray * _urls;
    UIWindow * _window;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDictionary *editingModes;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSUserActivity *quicklookActivity;
@property (nonatomic, retain) QLPreviewController *quicklookController;
@property (nonatomic) unsigned long long selectedURLIndex;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *urls;
@property (nonatomic, retain) UIWindow *window;

- (void).cxx_destruct;
- (id)activityFromOptions:(id)arg1;
- (id)editingModes;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (long long)previewController:(id)arg1 editingModeForPreviewItem:(id)arg2;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (void)previewControllerWillDismiss:(id)arg1;
- (id)quicklookActivity;
- (id)quicklookController;
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;
- (void)sceneDidBecomeActive:(id)arg1;
- (void)sceneDidDisconnect:(id)arg1;
- (void)sceneWillEnterForeground:(id)arg1;
- (void)sceneWillResignActive:(id)arg1;
- (unsigned long long)selectedURLIndex;
- (void)setEditingModes:(id)arg1;
- (void)setQuicklookActivity:(id)arg1;
- (void)setQuicklookController:(id)arg1;
- (void)setSelectedURLIndex:(unsigned long long)arg1;
- (void)setUrls:(id)arg1;
- (void)setWindow:(id)arg1;
- (id)stateRestorationActivityForScene:(id)arg1;
- (id)urls;
- (id)window;

@end
