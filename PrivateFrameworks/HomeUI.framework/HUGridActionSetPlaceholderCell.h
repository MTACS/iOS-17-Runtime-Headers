
@interface HUGridActionSetPlaceholderCell : HUGridActionSetCell {
    HUIconView * _iconView;
}

- (void).cxx_destruct;
- (void)_setupActionSetCell;
- (unsigned long long)iconDisplayStyle;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (void)updateConstraints;

@end
