
@interface PKThresholdTopUpActionsSectionController : NSObject <PKDynamicSectionController> {
    bool  _cancelInProgress;
    NSString * _cancelTitle;
    <PKThresholdTopUpActionsSectionControllerDelegate> * _delegate;
    bool  _existingThresholdTopUp;
}

@property (nonatomic, retain) NSString *cancelTitle;
@property (nonatomic, retain) UICollectionViewCellRegistration *cellRegistration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *identifiers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cancelTitle;
- (id)cellRegistrationForItem:(id)arg1;
- (void)didSelectItem:(id)arg1;
- (id)identifiers;
- (id)initWithExistingThresholdTopUp:(bool)arg1 delegate:(id)arg2;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (void)setCancelTitle:(id)arg1;
- (bool)shouldHighlightItem:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;

@end
