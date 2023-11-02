
@interface PXSharedLibraryAssistantSummaryContentView : UIView <PXChangeObserver> {
    UILabel * _countsLabel;
    UILabel * _dateLabel;
    UILabel * _peopleLabel;
    UIImageView * _topImageView;
    PXSharedLibraryAssistantViewModel * _viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXSharedLibraryAssistantViewModel *viewModel;

- (void).cxx_destruct;
- (void)_initializeSubviews;
- (void)_updateCountsLabel;
- (void)_updateDateLabel;
- (void)_updateIcon;
- (void)_updatePeopleLabel;
- (id)initWithViewModel:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (id)viewModel;

@end
