
@interface PMSlideMapper : CMMapper {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mRect;
    PDSlide * mSlide;
}

- (void).cxx_destruct;
- (id)defaultTheme;
- (id)initWithPDSlide:(id)arg1 slideRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 parent:(id)arg3;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapBackgroundAt:(id)arg1 recursive:(bool)arg2 withState:(id)arg3;
- (void)mapDrawablesAt:(id)arg1 withState:(id)arg2;
- (void)mapMasterSlideAt:(id)arg1 withState:(id)arg2;
- (id)slideName;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })slideRect;
- (id)styleMatrix;

@end
