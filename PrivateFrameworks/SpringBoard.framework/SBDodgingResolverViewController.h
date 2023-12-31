
@interface SBDodgingResolverViewController : UIViewController <SBChainableModifierDelegate> {
    long long  _contentOrientation;
    UILabel * _debugOverlay;
    bool  _dispatchingEvent;
    NSMutableArray * _eventQueue;
    NSMutableDictionary * _itemsForIdentifiers;
    NSMutableSet * _itemsNeedingNonAnimatedUpdate;
    NSMutableSet * _itemsNeedingUpdate;
    unsigned long long  _lastUpdateTimeNS;
    SBDodgingModel * _model;
    bool  _needsLayout;
    bool  _needsModelUpdate;
    SBRootDodgingLayerModifier * _rootModifier;
}

@property (nonatomic) long long contentOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) UILabel *debugOverlay;
@property (readonly, copy) NSString *description;
@property (getter=isDispatchingEvent, nonatomic) bool dispatchingEvent;
@property (nonatomic, retain) NSMutableArray *eventQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *itemsForIdentifiers;
@property (nonatomic, retain) NSMutableSet *itemsNeedingNonAnimatedUpdate;
@property (nonatomic, retain) NSMutableSet *itemsNeedingUpdate;
@property (nonatomic) unsigned long long lastUpdateTimeNS;
@property (nonatomic, retain) SBDodgingModel *model;
@property (nonatomic) bool needsLayout;
@property (nonatomic) bool needsModelUpdate;
@property (nonatomic, retain) SBRootDodgingLayerModifier *rootModifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dispatchNextEventIfNeededAndHandleResponse;
- (void)_dispatchOrAppendEvent:(id)arg1;
- (void)_handleEventResponse:(id)arg1;
- (void)_performEventResponse:(id)arg1;
- (void)_performInvalidationResponse:(id)arg1;
- (void)_performScheduleEventResponse:(id)arg1;
- (void)_setAllItemsNeedUpdate;
- (void)_setItemNeedsUpdate:(id)arg1;
- (void)_setNeedsLayout;
- (void)_setNeedsModelUpdate;
- (void)_updateItemIfNeeded:(id)arg1;
- (void)_updateItemsIfNeeded;
- (void)_updateLayoutIfNeeded;
- (void)_updateLayoutWithItemIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)_updateModelIfNeeded;
- (id)addItemWithIdentifier:(id)arg1 view:(id)arg2 initialCenter:(struct CGPoint { double x1; double x2; })arg3 initialSize:(struct CGSize { double x1; double x2; })arg4 delegate:(id)arg5;
- (long long)contentOrientation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentViewBounds;
- (id)debugOverlay;
- (id)eventQueue;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)interfaceOrientation;
- (id)invalidateItem:(id)arg1;
- (bool)isDispatchingEvent;
- (id)itemsForIdentifiers;
- (id)itemsNeedingNonAnimatedUpdate;
- (id)itemsNeedingUpdate;
- (unsigned long long)lastUpdateTimeNS;
- (void)loadView;
- (id)model;
- (bool)needsLayout;
- (bool)needsModelUpdate;
- (void)performTransitionFromOrientation:(long long)arg1 toOrientation:(long long)arg2 animated:(bool)arg3 mutationBlock:(id /* block */)arg4;
- (id)preferenceForIdentifier:(id)arg1;
- (id)rootModifier;
- (void)setContentOrientation:(long long)arg1;
- (void)setDebugOverlay:(id)arg1;
- (void)setDispatchingEvent:(bool)arg1;
- (void)setEventQueue:(id)arg1;
- (void)setItemNeedsUpdate:(id)arg1 animated:(bool)arg2;
- (void)setItemsForIdentifiers:(id)arg1;
- (void)setItemsNeedingNonAnimatedUpdate:(id)arg1;
- (void)setItemsNeedingUpdate:(id)arg1;
- (void)setLastUpdateTimeNS:(unsigned long long)arg1;
- (void)setModel:(id)arg1;
- (void)setNeedsLayout:(bool)arg1;
- (void)setNeedsModelUpdate:(bool)arg1;
- (void)setRootModifier:(id)arg1;
- (double)spaceBetweenIdentifiers;
- (void)viewDidLoad;

@end
