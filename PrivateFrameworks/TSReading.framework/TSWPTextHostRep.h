
@interface TSWPTextHostRep : TSDRep <TSDContainerRep, TSKHighlightArrayControllerProtocol, TSWPTextEditingHostRep> {
    NSObject<TSKSearchReference> * _activeSearchReference;
    TSWPShapeRep * _editingRep;
    TSKHighlightArrayController * _highlightArrayController;
    TSKHighlightArrayController * _pulseArrayController;
    NSArray * _searchReferences;
}

@property (nonatomic, retain) NSObject<TSKSearchReference> *activeSearchReference;
@property (nonatomic, readonly) NSObject<TSDContainerInfo> *containerInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TSKHighlightArrayController *highlightArrayController;
@property (nonatomic, retain) TSKHighlightArrayController *pulseArrayController;
@property (nonatomic, retain) NSArray *searchReferences;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool useFindOverlayers;

- (id)activeSearchReference;
- (void)addAdditionalChildLayersToArray:(id)arg1;
- (bool)canSelectChildRep:(id)arg1;
- (id)childReps;
- (id)containerInfo;
- (void)dealloc;
- (bool)doesRepContainSearchReference:(id)arg1;
- (void)drawTextBackground:(struct CGContext { }*)arg1 insetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 pulsating:(bool)arg3;
- (id)highlightArrayController;
- (id)hitRep:(struct CGPoint { double x1; double x2; })arg1;
- (id)imageForSearchReference:(id)arg1 forPath:(struct CGPath { }*)arg2 shouldPulsate:(bool)arg3;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (id)lineSearchReferencesForSearchReference:(id)arg1;
- (struct CGPath { }*)newPathForSearchReference:(id)arg1;
- (id)overlayLayers;
- (void)p_activeFindHighlightChangedNotification:(id)arg1;
- (void)p_findUIStateChangedNotification:(id)arg1;
- (void)p_setActiveSearchReference:(id)arg1;
- (void)p_setSearchReferencesToHighlight:(id)arg1;
- (void)pulseAnimationDidStop:(id)arg1;
- (id)pulseArrayController;
- (id)searchReferences;
- (void)selectChildRep:(id)arg1;
- (void)setActiveSearchReference:(id)arg1;
- (void)setHighlightArrayController:(id)arg1;
- (void)setPulseArrayController:(id)arg1;
- (void)setPulseControllerActive:(bool)arg1 autohide:(bool)arg2;
- (void)setSearchReferences:(id)arg1;
- (void)tswpTextEditingDidEndEditing:(id)arg1;
- (void)updateChildrenFromLayout;
- (void)updateFindAnimationWithAnimatingPulse:(bool)arg1;
- (void)updateHighlights;
- (bool)useFindOverlayers;
- (void)willBeRemoved;

@end
