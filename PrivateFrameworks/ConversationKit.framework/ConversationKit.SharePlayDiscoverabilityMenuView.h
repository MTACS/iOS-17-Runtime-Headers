
@interface ConversationKit.SharePlayDiscoverabilityMenuView : UIView <UICollectionViewDataSource> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  $__lazy_storage_$_appCellRegistration;
    void $__lazy_storage_$_collectionView;
    void $__lazy_storage_$_collectionViewLayout;
    void $__lazy_storage_$_moreButton;
    void $__lazy_storage_$_titleLabel;
    void foregroundApp;
    void presentationStyle;
    void type;
}

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)didTapMore;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
