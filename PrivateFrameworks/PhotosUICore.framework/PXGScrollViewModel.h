
@interface PXGScrollViewModel : PXObservable <PXGMutableScrollViewModel> {
    bool  _alwaysBounceHorizontal;
    bool  _alwaysBounceVertical;
    unsigned long long  _changesOptions;
    bool  _clipsToBounds;
    struct CGPoint { 
        double x; 
        double y; 
    }  _contentOffset;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    bool  _draggingPerformsScroll;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _hitTestContentInsets;
    double  _horizontalInterPageSpacing;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _horizontalScrollIndicatorInsets;
    long long  _scrollDecelerationRate;
    long long  _scrollRegime;
    bool  _showsHorizontalScrollIndicator;
    bool  _showsVerticalScrollIndicator;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _verticalScrollIndicatorInsets;
}

@property (nonatomic, readonly) bool alwaysBounceHorizontal;
@property (nonatomic, readonly) bool alwaysBounceVertical;
@property (nonatomic, readonly) unsigned long long changesOptions;
@property (nonatomic, readonly) bool clipsToBounds;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } contentOffset;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, readonly) bool draggingPerformsScroll;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } hitTestContentInsets;
@property (nonatomic, readonly) double horizontalInterPageSpacing;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } horizontalScrollIndicatorInsets;
@property (nonatomic, readonly) long long scrollDecelerationRate;
@property (nonatomic, readonly) long long scrollRegime;
@property (nonatomic, readonly) bool showsHorizontalScrollIndicator;
@property (nonatomic, readonly) bool showsVerticalScrollIndicator;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } verticalScrollIndicatorInsets;

- (bool)alwaysBounceHorizontal;
- (bool)alwaysBounceVertical;
- (unsigned long long)changesOptions;
- (bool)clipsToBounds;
- (struct CGPoint { double x1; double x2; })contentOffset;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)description;
- (void)didEndChangeHandling;
- (bool)draggingPerformsScroll;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })hitTestContentInsets;
- (double)horizontalInterPageSpacing;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })horizontalScrollIndicatorInsets;
- (void)performChanges:(id /* block */)arg1 options:(unsigned long long)arg2;
- (long long)scrollDecelerationRate;
- (long long)scrollRegime;
- (void)setAlwaysBounceHorizontal:(bool)arg1;
- (void)setAlwaysBounceVertical:(bool)arg1;
- (void)setClipsToBounds:(bool)arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDraggingPerformsScroll:(bool)arg1;
- (void)setHitTestContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHorizontalInterPageSpacing:(double)arg1;
- (void)setHorizontalScrollIndicatorInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setScrollDecelerationRate:(long long)arg1;
- (void)setScrollRegime:(long long)arg1;
- (void)setShowsHorizontalScrollIndicator:(bool)arg1;
- (void)setShowsVerticalScrollIndicator:(bool)arg1;
- (void)setVerticalScrollIndicatorInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)showsHorizontalScrollIndicator;
- (bool)showsVerticalScrollIndicator;
- (void)stopScrolling;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })verticalScrollIndicatorInsets;

@end
