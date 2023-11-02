
@interface HealthRecordsUI.AccountSourceCell : UICollectionViewCell {
    void $__lazy_storage_$_detailLabel;
    void $__lazy_storage_$_logoView;
    void $__lazy_storage_$_stackView;
    void $__lazy_storage_$_subtitleLabel;
    void $__lazy_storage_$_titleLabel;
    void $__lazy_storage_$_webLinkButton;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  accountURL;
    void contentMargins;
    void item;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;

@end
