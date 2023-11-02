
@interface UIFocusRingManager : NSObject <_UIGeometryChangeObserver> {
    NSMutableDictionary * _focusRingStateForClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *focusRingStateForClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_currentFocusItemForClient:(id)arg1;
+ (void)_removeActiveFocusLayers;
+ (void)_updateActiveFocusLayers;
+ (bool)focusRingAvailable;
+ (id)manager;
+ (void)moveRingToFocusItem:(id)arg1;
+ (void)moveRingToFocusItem:(id)arg1 forClient:(id)arg2;
+ (void)removeRingFromFocusItem:(id)arg1;
+ (void)removeRingFromFocusItem:(id)arg1 forClient:(id)arg2;
+ (Class)shapeLayerClassForItem:(id)arg1 client:(id)arg2;
+ (void)updateRingForFocusItem:(id)arg1;
+ (void)updateRingForFocusItem:(id)arg1 forClient:(id)arg2;

- (void).cxx_destruct;
- (void)_addFocusLayer:(id)arg1 toView:(id)arg2 forItem:(id)arg3;
- (bool)_focusItemWantsFocusRing:(id)arg1 forClient:(id)arg2;
- (id)_focusRingPathForItem:(id)arg1 inView:(id)arg2;
- (void)_geometryChanged:(const struct { int x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; struct CGPoint { double x_5_1_1; double x_5_1_2; } x5; struct CATransform3D { double x_6_1_1; double x_6_1_2; double x_6_1_3; double x_6_1_4; double x_6_1_5; double x_6_1_6; double x_6_1_7; double x_6_1_8; double x_6_1_9; double x_6_1_10; double x_6_1_11; double x_6_1_12; double x_6_1_13; double x_6_1_14; double x_6_1_15; double x_6_1_16; } x6; id x7; id x8; id x9; id x10; }*)arg1 forAncestor:(id)arg2;
- (long long)_insertionIndexOfFocusLayerForFocusItem:(id)arg1;
- (void)_removeActiveFocusLayersForClient:(id)arg1;
- (void)_updateFocusLayerFrames;
- (id)_viewToAddFocusLayerForItem:(id)arg1 forClient:(id)arg2;
- (id)activeFocusLayersForClient:(id)arg1;
- (id)activeFocusLayersToItemsForClient:(id)arg1;
- (void)addFocusRingForItem:(id)arg1 forClient:(id)arg2;
- (void)addParentFocusRingForItem:(id)arg1 forClient:(id)arg2;
- (void)addSelectedFocusRingForItem:(id)arg1 forClient:(id)arg2;
- (void)addSelectedParentFocusRingForItem:(id)arg1 forClient:(id)arg2;
- (id)description;
- (id)focusRingStateForClient;
- (void)setFocusRingStateForClient:(id)arg1;

@end
