
@interface PMBackgroundMapper : CMMapper {
    OADBackground * mBackground;
}

- (void).cxx_destruct;
- (id)initWithOadBackground:(id)arg1 parent:(id)arg2;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })slideRect;

@end
