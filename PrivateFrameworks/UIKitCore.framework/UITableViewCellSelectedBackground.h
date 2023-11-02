
@interface UITableViewCellSelectedBackground : UIView {
    bool  _multiselect;
    UIColor * _multiselectBackgroundColor;
    UIColor * _noneStyleBackgroundColor;
    UIVisualEffectView * _selectionEffectsView;
    long long  _selectionStyle;
    UIColor * _selectionTintColor;
}

@property (getter=isMultiselect, nonatomic) bool multiselect;
@property (nonatomic, retain) UIColor *multiselectBackgroundColor;
@property (nonatomic, retain) UIColor *noneStyleBackgroundColor;
@property (nonatomic, copy) NSArray *selectionEffects;
@property (nonatomic) long long selectionStyle;
@property (nonatomic, retain) UIColor *selectionTintColor;

- (void).cxx_destruct;
- (bool)isMultiselect;
- (void)layoutSubviews;
- (id)multiselectBackgroundColor;
- (id)noneStyleBackgroundColor;
- (id)selectionEffects;
- (long long)selectionStyle;
- (id)selectionTintColor;
- (void)setMultiselect:(bool)arg1;
- (void)setMultiselectBackgroundColor:(id)arg1;
- (void)setNoneStyleBackgroundColor:(id)arg1;
- (void)setSelectionEffects:(id)arg1;
- (void)setSelectionStyle:(long long)arg1;
- (void)setSelectionTintColor:(id)arg1;
- (void)tintColorDidChange;
- (void)updateBackgroundColor;

@end
