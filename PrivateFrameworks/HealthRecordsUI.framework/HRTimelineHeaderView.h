
@interface HRTimelineHeaderView : UITableViewHeaderFooterView {
    void $__lazy_storage_$_backgroundEffectView;
    void $__lazy_storage_$_separatorView;
    void $__lazy_storage_$_subtitleLabel;
    void $__lazy_storage_$_titleLabel;
    void delegate;
    void separatorViewHidden;
}

@property (nonatomic) <HRTimelineHeaderViewDelegate> *delegate;
@property (nonatomic) bool floating;
@property (nonatomic) bool separatorViewHidden;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)applyStyleFromNavigationBar:(id)arg1;
- (void)applyTitle:(id)arg1 subtitle:(id)arg2;
- (id)delegate;
- (bool)floating;
- (id)initWithCoder:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (bool)separatorViewHidden;
- (void)setDelegate:(id)arg1;
- (void)setFloating:(bool)arg1;
- (void)setSeparatorViewHidden:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
