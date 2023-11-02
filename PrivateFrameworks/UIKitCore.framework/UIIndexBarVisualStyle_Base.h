
@interface UIIndexBarVisualStyle_Base : NSObject <UIIndexBarVisualStyle> {
    UIIndexBarView * _indexBarView;
}

@property (nonatomic, readonly) bool canBecomeFocused;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool expanded;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIIndexBarView *indexBarView;
@property (nonatomic, readonly) double indexWidth;
@property (nonatomic, readonly) double minLineHeight;
@property (nonatomic, readonly) bool overlay;
@property (readonly) Class superclass;

+ (id)containerViewForIndexBar:(id)arg1;

- (void).cxx_destruct;
- (long long)_indexForEntryAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleBoundsForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 stride:(double*)arg2;
- (bool)canBecomeFocused;
- (id)displayEntryFromEntry:(id)arg1;
- (void)handleTouch:(id)arg1 withEvent:(id)arg2 touchedEntryIndex:(long long)arg3;
- (id)indexBarView;
- (id)initWithView:(id)arg1;
- (double)minLineHeight;
- (bool)overlay;
- (void)setIndexBarView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
