
@interface UIWebElementActionInfo : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _interactionLocation;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } interactionLocation;

- (void)_setInteractionLocation:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })interactionLocation;

@end
