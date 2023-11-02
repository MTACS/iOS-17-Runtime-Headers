
@interface UIInputViewSetPlacementCompactAssistantOnScreen : UIInputViewSetPlacementAssistantOnScreen {
    struct CGPoint { 
        double x; 
        double y; 
    }  _offset;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } offset;

+ (bool)supportsSecureCoding;

- (id)applicatorInfoForOwner:(id)arg1;
- (id)horizontalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (bool)isCompactAssistantView;
- (struct CGPoint { double x1; double x2; })offset;
- (void)setOffset:(struct CGPoint { double x1; double x2; })arg1;
- (double)verticalOffset;
- (id)widthConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;

@end
