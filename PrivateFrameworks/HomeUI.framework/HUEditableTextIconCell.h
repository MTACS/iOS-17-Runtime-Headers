
@interface HUEditableTextIconCell : HUEditableTextCollectionListCell <HUCellProtocol> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  $__lazy_storage_$_iconAccessory;
    void $__lazy_storage_$_iconContainerView;
    void $__lazy_storage_$_iconView;
    void displayStyle;
    void iconConstraints;
    void item;
}

@property (nonatomic, retain) HFItem *item;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)item;
- (void)prepareForReuse;
- (void)setItem:(id)arg1;
- (void)updateConstraints;
- (void)updateUIWithAnimation:(bool)arg1;

@end
