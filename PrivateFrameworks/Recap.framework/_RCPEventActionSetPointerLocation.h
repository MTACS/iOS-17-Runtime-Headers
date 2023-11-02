
@interface _RCPEventActionSetPointerLocation : RCPEventAction {
    struct CGPoint { 
        double x; 
        double y; 
    }  _modelPoint;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } modelPoint;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct CGPoint { double x1; double x2; })modelPoint;
- (void)play;
- (void)setModelPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
