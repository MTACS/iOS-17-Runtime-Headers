
@interface VUIRectAnimationAction : NSObject <CAAction> {
    CABasicAnimation * _animationToRun;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _fromRect;
    NSString * _key;
}

@property (nonatomic, retain) CABasicAnimation *animationToRun;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } fromRect;
@property (nonatomic, retain) NSString *key;

- (void).cxx_destruct;
- (id)animationToRun;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fromRect;
- (id)key;
- (void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3;
- (void)setAnimationToRun:(id)arg1;
- (void)setFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setKey:(id)arg1;

@end
