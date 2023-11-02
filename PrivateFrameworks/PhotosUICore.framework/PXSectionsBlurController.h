
@interface PXSectionsBlurController : NSObject {
    void behavior;
    void blurrableSectionsSource;
}

@property (nonatomic) long long behavior;

- (void).cxx_destruct;
- (long long)behavior;
- (id)init;
- (id)initWithBlurrableSectionsSource:(id)arg1;
- (void)setBehavior:(long long)arg1;
- (void)updateSectionsBlurWithVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 safeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 interSectionSpacing:(double)arg3;

@end
