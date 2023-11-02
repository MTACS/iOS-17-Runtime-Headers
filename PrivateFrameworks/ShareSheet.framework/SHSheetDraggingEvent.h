
@interface SHSheetDraggingEvent : NSObject <BSXPCSecureCoding> {
    bool  _dismissible;
    struct CGPoint { 
        double x; 
        double y; 
    }  _interruptedOffset;
    double  _rubberBandCoefficient;
    bool  _shouldAnimate;
    struct CGPoint { 
        double x; 
        double y; 
    }  _translation;
    long long  _type;
    struct CGPoint { 
        double x; 
        double y; 
    }  _velocity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool dismissible;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint { double x1; double x2; } interruptedOffset;
@property (nonatomic) double rubberBandCoefficient;
@property (nonatomic) bool shouldAnimate;
@property (readonly) Class superclass;
@property (nonatomic) struct CGPoint { double x1; double x2; } translation;
@property (nonatomic) long long type;
@property (nonatomic) struct CGPoint { double x1; double x2; } velocity;

+ (id)eventForDraggingDidBeginWithRubberBandCoefficient:(double)arg1 dismissible:(bool)arg2 interruptedOffset:(struct CGPoint { double x1; double x2; })arg3;
+ (id)eventForDraggingDidChangeWithTranslation:(struct CGPoint { double x1; double x2; })arg1 velocity:(struct CGPoint { double x1; double x2; })arg2 animateChange:(bool)arg3 dismissible:(bool)arg4;
+ (id)eventForDraggingDidEnd;
+ (bool)supportsBSXPCSecureCoding;

- (bool)dismissible;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (struct CGPoint { double x1; double x2; })interruptedOffset;
- (double)rubberBandCoefficient;
- (void)setDismissible:(bool)arg1;
- (void)setInterruptedOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRubberBandCoefficient:(double)arg1;
- (void)setShouldAnimate:(bool)arg1;
- (void)setTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setType:(long long)arg1;
- (void)setVelocity:(struct CGPoint { double x1; double x2; })arg1;
- (bool)shouldAnimate;
- (struct CGPoint { double x1; double x2; })translation;
- (long long)type;
- (struct CGPoint { double x1; double x2; })velocity;

@end
