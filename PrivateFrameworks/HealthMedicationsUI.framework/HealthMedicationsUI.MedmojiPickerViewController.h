
@interface HealthMedicationsUI.MedmojiPickerViewController : UIViewController {
    void $__lazy_storage_$_colorSelectionViewController;
    void $__lazy_storage_$_medicationView;
    void $__lazy_storage_$_medmojiCategorySelectionView;
    void $__lazy_storage_$_shapeSelectionViewController;
    void cancellables;
    void colorButton;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  config;
    void delegate;
    void shapeButton;
    void shapePublisher;
}

- (void).cxx_destruct;
- (void)cancelButtonTappped:(id)arg1;
- (void)colorButtonTappped:(id)arg1;
- (void)doneButtonTappped:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)shapeButtonTappped:(id)arg1;
- (void)viewDidLoad;

@end
