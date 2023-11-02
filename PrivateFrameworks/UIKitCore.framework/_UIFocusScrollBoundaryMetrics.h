
@interface _UIFocusScrollBoundaryMetrics : NSObject {
    <UIFocusItem> * _focusItem;
    bool  _isMaxX;
    bool  _isMaxY;
    bool  _isMinX;
    bool  _isMinY;
    struct CGPoint { 
        double x; 
        double y; 
    }  _localFocusedCenter;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _localFocusedRect;
    struct CGPoint { 
        double x; 
        double y; 
    }  _maxContentOffset;
    struct CGPoint { 
        double x; 
        double y; 
    }  _minContentOffset;
    <UIFocusEnvironment> * _owningEnvironment;
    <UIFocusItemScrollableContainer> * _scrollableContainer;
    bool  _shouldSearchX;
    bool  _shouldSearchY;
}

@property (nonatomic, readonly) <UIFocusItem> *focusItem;
@property (nonatomic) bool isMaxX;
@property (nonatomic) bool isMaxY;
@property (nonatomic) bool isMinX;
@property (nonatomic) bool isMinY;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } localFocusedCenter;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } localFocusedRect;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } maxContentOffset;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } minContentOffset;
@property (nonatomic, readonly) <UIFocusEnvironment> *owningEnvironment;
@property (nonatomic, readonly) <UIFocusItemScrollableContainer> *scrollableContainer;
@property (nonatomic, readonly) bool shouldSearchX;
@property (nonatomic, readonly) bool shouldSearchY;

- (void).cxx_destruct;
- (bool)_checkScrollableBounds;
- (bool)checkOtherFocusItem:(id)arg1;
- (bool)checkOtherRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)consumeOtherMetrics:(id)arg1;
- (id)focusItem;
- (bool)hasDisprovedAllRelevantAssumptions;
- (id)initWithFocusItem:(id)arg1 owningEnvironment:(id)arg2 scrollableContainer:(id)arg3;
- (id)initWithFocusItem:(id)arg1 scrollView:(id)arg2;
- (bool)isMaxX;
- (bool)isMaxY;
- (bool)isMinX;
- (bool)isMinY;
- (struct CGPoint { double x1; double x2; })localFocusedCenter;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })localFocusedRect;
- (struct CGPoint { double x1; double x2; })maxContentOffset;
- (struct CGPoint { double x1; double x2; })minContentOffset;
- (id)owningEnvironment;
- (id)scrollableContainer;
- (void)setIsMaxX:(bool)arg1;
- (void)setIsMaxY:(bool)arg1;
- (void)setIsMinX:(bool)arg1;
- (void)setIsMinY:(bool)arg1;
- (bool)shouldSearchX;
- (bool)shouldSearchY;

@end
