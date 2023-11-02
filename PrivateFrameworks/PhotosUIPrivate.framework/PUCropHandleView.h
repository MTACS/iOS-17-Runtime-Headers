
@interface PUCropHandleView : UIView {
    UIView * __layoutReferenceView;
    NSArray * __lineViews;
    NSArray * __overlayViews;
    unsigned long long  _handle;
    bool  _overlayHidden;
}

@property (setter=_setLayoutReferenceView:, nonatomic, retain) UIView *_layoutReferenceView;
@property (setter=_setLineViews:, nonatomic, retain) NSArray *_lineViews;
@property (setter=_setOverlayViews:, nonatomic, retain) NSArray *_overlayViews;
@property (nonatomic, readonly) NSArray *adjacentHandles;
@property (getter=isBottom, nonatomic, readonly) bool bottom;
@property (getter=isCorner, nonatomic, readonly) bool corner;
@property (nonatomic, readonly) unsigned long long handle;
@property (getter=isLateral, nonatomic, readonly) bool lateral;
@property (nonatomic, readonly) id layoutReferenceItem;
@property (getter=isLeft, nonatomic, readonly) bool left;
@property (nonatomic, readonly) unsigned long long oppositeHandle;
@property (getter=isOverlayHidden, nonatomic) bool overlayHidden;
@property (getter=isRight, nonatomic, readonly) bool right;
@property (getter=isTop, nonatomic, readonly) bool top;

+ (id)allHandles;

- (void).cxx_destruct;
- (id)_createCornerOverlayView;
- (id)_createLineView;
- (id)_layoutReferenceView;
- (id)_lineViews;
- (id)_overlayViews;
- (void)_setLayoutReferenceView:(id)arg1;
- (void)_setLineViews:(id)arg1;
- (void)_setOverlayViews:(id)arg1;
- (id)adjacentHandles;
- (unsigned long long)handle;
- (id)initForHandle:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isBottom;
- (bool)isCorner;
- (bool)isLateral;
- (bool)isLeft;
- (bool)isOverlayHidden;
- (bool)isRight;
- (bool)isTop;
- (id)layoutReferenceItem;
- (unsigned long long)oppositeHandle;
- (void)setOverlayHidden:(bool)arg1;

@end