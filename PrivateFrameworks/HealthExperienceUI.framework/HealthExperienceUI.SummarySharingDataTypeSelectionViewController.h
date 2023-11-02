
@interface HealthExperienceUI.SummarySharingDataTypeSelectionViewController : HealthExperienceUI.CompoundDataSourceCollectionViewController {
    void cancellables;
    void dataTypeSelectionDataSources;
    void delegate;
    void healthExperienceStore;
    void selectedCategories;
    void selectedContact;
    void selectedContactPhotoPublisher;
    void selectedDataTypesContext;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  selectionFlow;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)done;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (void)viewDidLoad;

@end
