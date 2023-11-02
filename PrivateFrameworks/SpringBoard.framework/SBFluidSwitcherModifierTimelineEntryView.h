
@interface SBFluidSwitcherModifierTimelineEntryView : UIView {
    UILabel * _actionsLabel;
    <SBFluidSwitcherModifierTimelineEntryViewDelegate> * _delegate;
    SBSwitcherModifierTimelineEntry * _entry;
    UILabel * _nameLabel;
    UILabel * _postStackLabel;
    UITapGestureRecognizer * _tapRecognizer;
}

@property (nonatomic) <SBFluidSwitcherModifierTimelineEntryViewDelegate> *delegate;
@property (nonatomic, retain) SBSwitcherModifierTimelineEntry *entry;

- (void).cxx_destruct;
- (id)_appendRecursiveDescriptionToString:(id)arg1 level:(unsigned long long)arg2 snapshot:(id)arg3;
- (id)_attributedStringsForStack:(id)arg1;
- (id)_randomColorWithSeed:(unsigned long long)arg1;
- (double)_randomFloatFromSeed:(unsigned long long)arg1 min:(double)arg2 max:(double)arg3;
- (void)_tap:(id)arg1;
- (id)delegate;
- (id)entry;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 entry:(id)arg2;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setEntry:(id)arg1;

@end
