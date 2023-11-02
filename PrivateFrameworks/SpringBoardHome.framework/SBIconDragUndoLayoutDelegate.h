
@interface SBIconDragUndoLayoutDelegate : NSObject <SBIconListLayoutAnimating, SBIconListLayoutDelegate> {
    <SBIconListLayoutAnimating> * _defaultRemovalAnimator;
    NSMapTable * _destinationIconScreenLocations;
    SBHIconEditingSettings * _iconEditingSettings;
    NSMutableArray * _iconViewsHiddenForRemovalAnimation;
    NSSet * _iconsAtHigherZLevel;
    NSMapTable * _originalIconScreenLocations;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <SBIconListLayoutAnimating> *defaultRemovalAnimator;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSMapTable *destinationIconScreenLocations;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBHIconEditingSettings *iconEditingSettings;
@property (nonatomic, readonly, copy) NSSet *iconsAtHigherZLevel;
@property (nonatomic, readonly, copy) NSMapTable *originalIconScreenLocations;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animateWithOptions:(unsigned long long)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)defaultRemovalAnimator;
- (id)destinationIconScreenLocations;
- (id)iconEditingSettings;
- (id)iconListView:(id)arg1 animatorForLayingOutIconView:(id)arg2 proposedAnimator:(id)arg3;
- (id)iconListView:(id)arg1 animatorForRemovingIcons:(id)arg2 proposedAnimator:(id)arg3;
- (void)iconListView:(id)arg1 wantsAnimatedLayoutForIconView:(id)arg2 withParameters:(struct SBIconListLayoutAnimationParameters { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; struct SBIconImageInfo { struct CGSize { double x_1_2_1; double x_1_2_2; } x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; bool x4; struct SBIconCoordinate { long long x_5_1_1; long long x_5_1_2; } x5; bool x6; bool x7; unsigned long long x8; })arg3 alongsideAnimationBlock:(id /* block */)arg4;
- (void)iconListView:(id)arg1 wantsAnimatedRemovalForIconViews:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)iconsAtHigherZLevel;
- (id)initWithOriginalIconScreenLocations:(id)arg1 destinationIconScreenLocations:(id)arg2 iconsAtHigherZLevel:(id)arg3;
- (id)initWithPreModificationInfo:(id)arg1;
- (id)originalIconScreenLocations;
- (void)setDefaultRemovalAnimator:(id)arg1;

@end
