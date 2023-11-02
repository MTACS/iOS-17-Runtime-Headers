
@interface UITextSelectionRect : NSObject {
    NSValue * __transform;
    double  _baselineOffset;
}

@property (nonatomic, readonly) UITextSelectionRectCustomHandleInfo *_customHandleInfo;
@property (nonatomic, readonly) bool _drawsOwnHighlight;
@property (nonatomic, readonly) UISelectionGrabberCustomPath *_endCustomSelectionPath;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _endEdgeRect;
@property (nonatomic, readonly) UIBezierPath *_path;
@property (nonatomic, readonly) UISelectionGrabberCustomPath *_startCustomSelectionPath;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _startEdgeRect;
@property (nonatomic, retain) NSValue *_transform;
@property (nonatomic) double baselineOffset;
@property (nonatomic, readonly) bool containsEnd;
@property (nonatomic, readonly) bool containsStart;
@property (getter=_isImpl, nonatomic, readonly) UITextSelectionRectImpl *isImpl;
@property (nonatomic, readonly) bool isVertical;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rect;
@property (nonatomic, readonly) long long writingDirection;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)endCustomSelectionPathFromRects:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })endEdgeFromRects:(id)arg1;
+ (bool)endIsHorizontal:(id)arg1;
+ (id)endRectFromRects:(id)arg1;
+ (id)startCustomSelectionPathFromRects:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })startEdgeFromRects:(id)arg1;
+ (bool)startIsHorizontal:(id)arg1;
+ (id)startRectFromRects:(id)arg1;

- (void).cxx_destruct;
- (id)_customHandleInfo;
- (bool)_drawsOwnHighlight;
- (id)_endCustomSelectionPath;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_endEdgeRect;
- (id)_isImpl;
- (id)_path;
- (id)_startCustomSelectionPath;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_startEdgeRect;
- (id)_transform;
- (double)baselineOffset;
- (bool)containsEnd;
- (bool)containsStart;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isVertical;
- (id)mutableCopy;
- (id)range;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rect;
- (void)setBaselineOffset:(double)arg1;
- (void)set_transform:(id)arg1;
- (long long)writingDirection;

// Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor

- (id)wf_selectionRectByInsetting:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
