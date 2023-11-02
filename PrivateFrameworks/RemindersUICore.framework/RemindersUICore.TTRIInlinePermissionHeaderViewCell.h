
@interface RemindersUICore.TTRIInlinePermissionHeaderViewCell : NUITableViewContainerCell <NUIContainerViewDelegate> {
    void $__lazy_storage_$_bodyLabel;
    void $__lazy_storage_$_dismissButton;
    void $__lazy_storage_$_iconView;
    void $__lazy_storage_$_titleLabel;
    void appliedConfiguration;
    void delegate;
}

+ (Class)containerViewClass;

- (void).cxx_destruct;
- (void)containerViewDidLayoutArrangedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;

@end
