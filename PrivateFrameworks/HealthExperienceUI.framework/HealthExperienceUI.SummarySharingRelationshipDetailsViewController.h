
@interface HealthExperienceUI.SummarySharingRelationshipDetailsViewController : HealthExperienceUI.CompoundDataSourceCollectionViewController {
    void $__lazy_storage_$_activitySpinnerItem;
    void $__lazy_storage_$_doneButtonItem;
    void cancellables;
    void currentAuthorizations;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  flow;
    void healthExperienceStore;
    void healthStore;
    void navigationBarTitleView;
    void pausedStateChanged;
    void relationshipDetailsDataSource;
    void selectedDataTypesContext;
    void sharingEntryStore;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  sharingProfileInformation;
    void updateAuthorizationsCancellable;
}

- (void).cxx_destruct;
- (void)didTapCancel;
- (void)doneButtonTapped;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;

@end
