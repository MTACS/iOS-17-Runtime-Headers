
@interface _UIFocusLinearMovementDebugView : UIView {
    bool  _colorCoding;
    NSArray * _groups;
    NSArray * _items;
}

@property (getter=isGroupMode, nonatomic, readonly) bool groupMode;

- (void).cxx_destruct;
- (id)_groupFramesFromGroups:(id)arg1;
- (id)_itemFramesFromItems:(id)arg1;
- (id)_lineSegmentsFromFrames:(id)arg1;
- (id)_primaryGroupFramesFromGroups:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)init;
- (id)initWithGroups:(id)arg1;
- (id)initWithItems:(id)arg1;
- (bool)isGroupMode;

@end
