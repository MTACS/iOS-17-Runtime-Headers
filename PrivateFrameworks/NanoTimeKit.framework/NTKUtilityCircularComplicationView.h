
@interface NTKUtilityCircularComplicationView : NTKUtilityComplicationView <NTKContainerViewLayoutDelegate> {
    NTKContainerView * _contentView;
}

@property (nonatomic, readonly) NTKContainerView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (long long)layoutOverride;

- (void).cxx_destruct;
- (void)_layoutContentView;
- (void)_updateEditingRotationAngle;
- (id)contentView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutContainerView:(id)arg1;
- (void)layoutSubviews;
- (void)setEditing:(bool)arg1;
- (void)setEditingRotationAngle:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
