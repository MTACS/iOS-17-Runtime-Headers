
@interface _UIContextMenuScrollObservationInteraction : NSObject <UIInteraction, _UIScrollViewScrollableAncestor> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _consumedTranslation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _currentLocation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _currentTranslation;
    <_UIContextMenuScrollObservationInteractionDelegate> * _delegate;
    bool  _isActive;
    UIView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIContextMenuScrollObservationInteractionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

+ (id)interactionWithDelegate:(id)arg1;

- (void).cxx_destruct;
- (bool)_descendentScrollView:(id)arg1 shouldPreserveStartOffset:(struct CGPoint { double x1; double x2; })arg2;
- (void)_descendentScrollViewDidCancelDragging:(id)arg1;
- (void)_descendentScrollViewDidEndDragging:(id)arg1;
- (bool)_descendentScrollViewShouldScrollHorizontally:(id)arg1;
- (bool)_descendentScrollViewShouldScrollVertically:(id)arg1;
- (void)_endInteractionWithTranslation:(struct CGPoint { double x1; double x2; })arg1 location:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGPoint { double x1; double x2; })_scrollView:(id)arg1 adjustedUnconstrainedOffsetForUnconstrainedOffset:(struct CGPoint { double x1; double x2; })arg2 startOffset:(struct CGPoint { double x1; double x2; })arg3 horizontalVelocity:(inout double*)arg4 verticalVelocity:(inout double*)arg5 animator:(out id*)arg6;
- (id)delegate;
- (void)didMoveToView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end
