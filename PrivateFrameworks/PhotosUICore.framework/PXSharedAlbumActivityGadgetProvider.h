
@interface PXSharedAlbumActivityGadgetProvider : PXGadgetProvider <PXFeedSectionInfosManagerDelegate, PXSharedAlbumInvitationGadgetDelegate> {
    NSMutableArray * _delayedChanges;
    unsigned long long  _estimatedGadgetCount;
    PXFeedSectionInfosManager * _feedSectionInfosManager;
    NSString * _invitationAlbumCloudGUID;
    long long  _maxNumberOfSections;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSMutableArray *delayedChanges;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long estimatedGadgetCount;
@property (nonatomic, retain) PXFeedSectionInfosManager *feedSectionInfosManager;
@property (nonatomic, readonly) <PXGadgetTransition> *gadgetTransition;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *invitationAlbumCloudGUID;
@property (nonatomic, readonly) long long maxNumberOfSections;
@property (nonatomic) <PXGadgetDelegate> *nextGadgetResponder;
@property (nonatomic, readonly) PXGadgetNavigationHelper *rootNavigationHelper;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_gadgetsForSectionIndexes:(id)arg1;
- (unsigned long long)_indexForGadget:(id)arg1;
- (id)_indexesOfSectionInfosToDisplay:(unsigned long long)arg1;
- (void)_processDelayedChanges;
- (void)_processDelayedChangesImmediatelyIfNecessary:(id)arg1;
- (void)_update:(id)arg1;
- (void)dealloc;
- (id)delayedChanges;
- (unsigned long long)estimatedGadgetCount;
- (unsigned long long)estimatedNumberOfGadgets;
- (id)feedSectionInfosManager;
- (void)feedSectionInfosManager:(id)arg1 sectionInfosDidChange:(id)arg2;
- (void)gadget:(id)arg1 didAccept:(bool)arg2;
- (void)generateGadgets;
- (id)init;
- (id)invitationAlbumCloudGUID;
- (void)loadDataForGadgets;
- (long long)maxNumberOfSections;
- (void)setDelayedChanges:(id)arg1;
- (void)setEstimatedGadgetCount:(unsigned long long)arg1;
- (void)setFeedSectionInfosManager:(id)arg1;
- (void)setInvitationAlbumCloudGUID:(id)arg1;

@end
