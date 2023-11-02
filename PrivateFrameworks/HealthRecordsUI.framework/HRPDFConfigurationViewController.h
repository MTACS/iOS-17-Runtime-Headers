
@interface HRPDFConfigurationViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    void $__lazy_storage_$_actionBarButtonItem;
    void $__lazy_storage_$_cancelBarButtonItem;
    void $__lazy_storage_$_collectionView;
    void $__lazy_storage_$_pdfHeightConstraint;
    void $__lazy_storage_$_pdfPaddingConstraints;
    void $__lazy_storage_$_scrollView;
    void $__lazy_storage_$_tableView;
    void configurationDataSource;
    void dataProvider;
    void dataProviderToken;
    void generatorCancellable;
    void pdfGenerationToken;
    void pdfPadding;
    void pinchAnimationBackgroundView;
    void pinchAnimationView;
    void pinchedPageImageView;
    void previewCancellable;
    void previewDataSource;
    void queue;
    void reportGenerator;
    void state;
    void tableCellIdentifier;
}

- (void).cxx_destruct;
- (void)didPinchPDF:(id)arg1;
- (void)didTapCancel:(id)arg1;
- (void)didTapSave:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithProfile:(id)arg1 account:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
