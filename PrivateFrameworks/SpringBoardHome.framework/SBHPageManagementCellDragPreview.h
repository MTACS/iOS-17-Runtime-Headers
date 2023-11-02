
@interface SBHPageManagementCellDragPreview : UIView <SBIconDragPreview> {
    NSHashTable * _cleanupDelayAssertions;
    id /* block */  _cleanupHandler;
    bool  _delayingCleanup;
    unsigned long long  _dragState;
    SBIconView * _iconView;
    SBIconView * _referenceIconView;
    bool  flocked;
    bool  iconAllowsAccessory;
    bool  iconAllowsLabelArea;
    bool  iconCanShowCloseBox;
    double  iconContentScale;
    bool  iconIsEditing;
}

@property (nonatomic, copy) id /* block */ cleanUpHandler;
@property (getter=isDelayingCleanup, nonatomic) bool delayingCleanup;
@property (nonatomic) unsigned long long dragState;
@property (getter=isFlocked, nonatomic) bool flocked;
@property (nonatomic, retain) SBIcon *icon;
@property (nonatomic) bool iconAllowsAccessory;
@property (nonatomic) bool iconAllowsLabelArea;
@property (nonatomic) bool iconCanShowCloseBox;
@property (nonatomic) double iconContentScale;
@property (nonatomic) bool iconIsEditing;
@property (nonatomic, retain) SBIconView *iconView;
@property (nonatomic, retain) SBIconView *referenceIconView;

- (void).cxx_destruct;
- (void)_configureIconViewWithReferenceIconView:(id)arg1;
- (id)_pageManagementCellView;
- (void)_removeDelayCleanupAssertion:(id)arg1;
- (id /* block */)cleanUpHandler;
- (id)delayCleanUpForReason:(id)arg1;
- (unsigned long long)dragState;
- (void)draggingSourceCancelAnimationCompleted;
- (void)draggingSourceDroppedWithOperation:(unsigned long long)arg1;
- (void)dropDestinationAnimationCompleted;
- (void)handleCleanup;
- (id)icon;
- (bool)iconAllowsAccessory;
- (bool)iconAllowsLabelArea;
- (bool)iconCanShowCloseBox;
- (double)iconContentScale;
- (bool)iconIsEditing;
- (id)iconView;
- (id)initWithReferenceIconView:(id)arg1;
- (bool)isDelayingCleanup;
- (bool)isFlocked;
- (id)referenceIconView;
- (void)setCleanUpHandler:(id /* block */)arg1;
- (void)setDelayingCleanup:(bool)arg1;
- (void)setDragState:(unsigned long long)arg1;
- (void)setFlocked:(bool)arg1;
- (void)setIcon:(id)arg1;
- (void)setIconAllowsAccessory:(bool)arg1;
- (void)setIconAllowsLabelArea:(bool)arg1;
- (void)setIconCanShowCloseBox:(bool)arg1;
- (void)setIconContentScale:(double)arg1;
- (void)setIconIsEditing:(bool)arg1;
- (void)setIconIsEditing:(bool)arg1 animated:(bool)arg2;
- (void)setIconView:(id)arg1;
- (void)setIconViewDelegate:(id)arg1;
- (void)setReferenceIconView:(id)arg1;
- (void)updateDestinationIconLocation:(id)arg1 allowsLabelArea:(bool)arg2 animated:(bool)arg3;

@end
