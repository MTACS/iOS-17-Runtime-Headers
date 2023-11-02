
@interface VUIPointAnimationAction : NSObject <CAAction> {
    CABasicAnimation * _animationToRun;
    struct CGPoint { 
        double x; 
        double y; 
    }  _fromPoint;
    NSString * _key;
}

@property (nonatomic, retain) CABasicAnimation *animationToRun;
@property (nonatomic) struct CGPoint { double x1; double x2; } fromPoint;
@property (nonatomic, retain) NSString *key;

- (void).cxx_destruct;
- (id)animationToRun;
- (struct CGPoint { double x1; double x2; })fromPoint;
- (id)key;
- (void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3;
- (void)setAnimationToRun:(id)arg1;
- (void)setFromPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setKey:(id)arg1;

@end
