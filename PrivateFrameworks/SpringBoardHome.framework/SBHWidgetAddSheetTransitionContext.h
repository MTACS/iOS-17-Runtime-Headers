
@interface SBHWidgetAddSheetTransitionContext : NSObject <UIViewControllerTransitioningDelegate> {
    SBHWidgetAddSheetAnimationController * _animationController;
    SBHAddWidgetSheetGalleryCollectionViewCell * _sourceCell;
}

@property (nonatomic, retain) SBHWidgetAddSheetAnimationController *animationController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBHAddWidgetSheetGalleryCollectionViewCell *sourceCell;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)animationController;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)initWithSourceCell:(id)arg1;
- (void)interruptAnimation;
- (void)setAnimationController:(id)arg1;
- (void)setSourceCell:(id)arg1;
- (id)sourceCell;

@end
