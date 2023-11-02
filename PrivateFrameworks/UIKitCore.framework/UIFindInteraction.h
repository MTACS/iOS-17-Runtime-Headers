
@interface UIFindInteraction : NSObject <UIInteraction> {
    UIFindSession * _activeFindSession;
    UIView * _alternateHostView;
    <UIFindInteractionDelegate> * _delegate;
    _UIFindNavigatorHarness * _findNavigatorHarness;
    struct { 
        unsigned int aWebView : 1; 
        unsigned int aMailComposeView : 1; 
    }  _hostViewIs;
    unsigned long long  _lastUsedHostingStrategy;
    id /* block */  _optionsMenuProvider;
    struct { 
        unsigned int respondToPlacementChangeNotifications : 1; 
        unsigned int provideHostScrollView : 1; 
    }  _privateDelegateDoes;
    NSString * _replacementText;
    NSString * _searchText;
    UIView * _view;
}

@property (nonatomic, readonly) UITextSearchOptions *_configuredSearchOptions;
@property (getter=_hostView, setter=_setHostView:, nonatomic) UIView *_hostView;
@property (nonatomic, readonly) UIFindSession *activeFindSession;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <UIFindInteractionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _UIFindNavigatorHarness *findNavigatorHarness;
@property (getter=isFindNavigatorVisible, nonatomic, readonly) bool findNavigatorVisible;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ optionsMenuProvider;
@property (nonatomic, copy) NSString *replacementText;
@property (nonatomic, copy) NSString *searchText;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

+ (id)_globalFindBuffer;
+ (void)_setGlobalFindBuffer:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)_computedHostingStrategy;
- (id)_configuredSearchOptions;
- (id)_createActiveFindSessionIfNecessary;
- (id)_currentFindNavigatorController;
- (unsigned long long)_currentHostingStrategy;
- (void)_didBeginActiveFindSession;
- (void)_didEndActiveFindSession;
- (id)_findNavigatorHosting;
- (id)_findNavigatorHostingForStrategy:(unsigned long long)arg1;
- (id)_findNavigatorSceneComponent;
- (id)_hostScrollView;
- (id)_hostView;
- (void)_keyboardDidChangePlacementNotification:(id)arg1;
- (void)_presentFindNavigatorShowingReplace:(bool)arg1;
- (void)_recomputeHostingStrategyIfNecessary;
- (void)_setHostView:(id)arg1;
- (void)_systemInputAssistantCenterVisibilityChanged:(id)arg1;
- (void)_updateHostViewConformance;
- (void)_willChangeNavigatorPlacement:(id)arg1;
- (id)activeFindSession;
- (id)delegate;
- (void)didMoveToView:(id)arg1;
- (void)dismissFindNavigator;
- (id)findNavigatorHarness;
- (void)findNext;
- (void)findPrevious;
- (id)initWithSessionDelegate:(id)arg1;
- (bool)isFindNavigatorVisible;
- (id /* block */)optionsMenuProvider;
- (void)presentFindNavigatorShowingReplace:(bool)arg1;
- (id)replacementText;
- (id)searchText;
- (id)searchableObject;
- (void)setFindNavigatorHarness:(id)arg1;
- (void)setOptionsMenuProvider:(id /* block */)arg1;
- (void)setReplacementText:(id)arg1;
- (void)setSearchText:(id)arg1;
- (void)setSearchableObject:(id)arg1;
- (void)updateResultCount;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end
