
@interface _UIPlatterMenuSnapBehavior : UIDynamicBehavior {
    UIAttachmentBehavior * _spring1;
    UIAttachmentBehavior * _spring2;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } anchorPoint;
@property (nonatomic) double damping;
@property (nonatomic) double frequency;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (double)damping;
- (double)frequency;
- (id)initWithItem:(id)arg1 attachedToAnchor:(struct CGPoint { double x1; double x2; })arg2;
- (void)setAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDamping:(double)arg1;
- (void)setFrequency:(double)arg1;

@end
