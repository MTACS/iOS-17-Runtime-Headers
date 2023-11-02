
@interface _UIFocusScrollRequest : NSObject {
    _UIFocusEnvironmentScrollableContainerTuple * _environmentScrollableContainer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _focusItemFrame;
    _UIFocusItemInfo * _focusItemInfo;
    _UIFocusMovementInfo * _focusMovement;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _originatingBounds;
    struct CGPoint { 
        double x; 
        double y; 
    }  _originatingContentOffset;
    unsigned long long  _scrollOffsetResolver;
    struct CGPoint { 
        double x; 
        double y; 
    }  _targetContentOffset;
}

@property (nonatomic, readonly) _UIFocusEnvironmentScrollableContainerTuple *environmentScrollableContainer;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } focusItemFrame;
@property (nonatomic, readonly) _UIFocusItemInfo *focusItemInfo;
@property (nonatomic, readonly) _UIFocusMovementInfo *focusMovement;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } originatingBounds;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } originatingContentOffset;
@property (nonatomic, readonly) unsigned long long scrollOffsetResolver;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } targetContentOffset;

- (void).cxx_destruct;
- (id)description;
- (id)environmentScrollableContainer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })focusItemFrame;
- (id)focusItemInfo;
- (id)focusMovement;
- (id)initWithBaseRequest:(id)arg1 environmentScrollableContainer:(id)arg2;
- (id)initWithEnvironmentScrollableContainer:(id)arg1 focusItemFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 targetContentOffsetValue:(id)arg3;
- (id)initWithEnvironmentScrollableContainer:(id)arg1 focusItemInfo:(id)arg2 focusMovement:(id)arg3 focusItemFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 targetContentOffsetValue:(id)arg5;
- (id)initWithEnvironmentScrollableContainer:(id)arg1 focusItemInfo:(id)arg2 focusUpdateContext:(id)arg3;
- (id)initWithEnvironmentScrollableContainer:(id)arg1 focusItemInfo:(id)arg2 targetContentOffsetValue:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })originatingBounds;
- (struct CGPoint { double x1; double x2; })originatingContentOffset;
- (void)reloadFocusItemInfo;
- (struct CGPoint { double x1; double x2; })resolveTargetContentOffsetUsingScrollOffsetResolverClamped:(bool)arg1;
- (unsigned long long)scrollOffsetResolver;
- (struct CGPoint { double x1; double x2; })targetContentOffset;

@end
