
@interface SBFluidSwitcherSpaceTitleItemController : NSObject <BSInvalidatable, SBDeviceApplicationSceneHandleObserver, SBIconObserver> {
    SBAppLayout * _appLayout;
    FBSDisplayIdentity * _displayIdentity;
    NSMutableDictionary * _displayItemToIcon;
    NSMutableDictionary * _displayItemToLoadedImage;
    NSMutableDictionary * _displayItemToSceneHandle;
    NSArray * _displayItems;
    bool  _invalidated;
    bool  _isChamoisWindowingEnabled;
    unsigned long long  _multiWindowIndicatorRoleMask;
    id /* block */  _updateHandler;
    bool  _useDarkLabels;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isChamoisWindowingEnabled;
@property (nonatomic) unsigned long long multiWindowIndicatorRoleMask;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ updateHandler;
@property (getter=isUsingDarkLabels, nonatomic) bool useDarkLabels;

- (void).cxx_destruct;
- (id)_computeHeaderItems;
- (id)_iconForDisplayItem:(id)arg1;
- (void)_loadIconForDisplayItem:(id)arg1;
- (void)_performUpdateHandler;
- (void)_updateDisplayItemIcons;
- (void)dealloc;
- (void)iconImageDidUpdate:(id)arg1;
- (id)initWithAppLayout:(id)arg1 applicationSceneHandleProvider:(id)arg2 displayIdentity:(id)arg3 showCanvasTitles:(bool)arg4 isChamoisWindowingEnabled:(bool)arg5;
- (void)invalidate;
- (bool)isChamoisWindowingEnabled;
- (bool)isUsingDarkLabels;
- (unsigned long long)multiWindowIndicatorRoleMask;
- (void)sceneHandle:(id)arg1 didChangeSceneTitle:(id)arg2;
- (void)setMultiWindowIndicatorRoleMask:(unsigned long long)arg1;
- (void)setUpdateHandler:(id /* block */)arg1;
- (void)setUseDarkLabels:(bool)arg1;
- (id /* block */)updateHandler;

@end
