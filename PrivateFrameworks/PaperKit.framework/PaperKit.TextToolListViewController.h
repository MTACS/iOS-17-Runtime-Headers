
@interface PaperKit.TextToolListViewController : UIViewController {
    void $__lazy_storage_$_addShapeListItemView;
    void $__lazy_storage_$_addSignatureListItemView;
    void $__lazy_storage_$_addStickerListItemView;
    void $__lazy_storage_$_addTextBoxListItemView;
    void $__lazy_storage_$_autoFillFormListItemView;
    void $__lazy_storage_$_descriptionListItemView;
    void $__lazy_storage_$_listItemViews;
    void $__lazy_storage_$_opacityListItemView;
    void addShapeListItemVisible;
    void addStickerListItemVisible;
    void autoFillFormListItemVisible;
    void contentSizeObserver;
    void delegate;
    void descriptionItemVisible;
    void minimumItemHeight;
    void minimumPreferredContentSizeWidth;
    void opacityItemVisible;
    void stackView;
}

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)didTapAddShapeListItemView:(id)arg1 forEvent:(id)arg2;
- (void)didTapAddSignatureListItemView:(id)arg1 forEvent:(id)arg2;
- (void)didTapAddStickerListItemView:(id)arg1 forEvent:(id)arg2;
- (void)didTapAddTextBoxListItemView:(id)arg1 forEvent:(id)arg2;
- (void)didTapAutoFillFormListItemView:(id)arg1 forEvent:(id)arg2;
- (void)didTapDescriptionListItemView:(id)arg1 forEvent:(id)arg2;
- (void)didTapOpacityListItemView:(id)arg1 forEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)updatePreferredContentSize;
- (void)viewDidLoad;
- (void)viewIsAppearing:(bool)arg1;

@end
