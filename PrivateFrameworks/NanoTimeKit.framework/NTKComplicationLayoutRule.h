
@interface NTKComplicationLayoutRule : NTKLayoutRule {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _contentTransform;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _editingTransform;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _keylinePadding;
}

@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } contentTransform;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } editingTransform;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } keylinePadding;

+ (id)layoutRuleForDevice:(id)arg1 withReferenceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 horizontalLayout:(long long)arg3 verticalLayout:(long long)arg4 keylinePadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg5;
+ (id)layoutRuleForDevice:(id)arg1 withReferenceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 horizontalLayout:(long long)arg3 verticalLayout:(long long)arg4 keylinePadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg5 clip:(bool)arg6;
+ (id)layoutRuleForDevice:(id)arg1 withReferenceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 horizontalLayout:(long long)arg3 verticalLayout:(long long)arg4 keylinePadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg5 clip:(bool)arg6 contentTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg7;
+ (id)layoutRuleForDevice:(id)arg1 withReferenceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 horizontalLayout:(long long)arg3 verticalLayout:(long long)arg4 keylinePadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg5 clip:(bool)arg6 editingTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg7;

- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })contentTransform;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })editingTransform;
- (unsigned long long)hash;
- (id)initForDevice:(id)arg1;
- (bool)isEqual:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })keylinePadding;
- (void)setContentTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setEditingTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;

@end
