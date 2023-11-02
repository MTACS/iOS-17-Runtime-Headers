
@interface PKPassSharesListSectionController : PKPassShareSectionController <PKSharedPassSharesControllerDelegate> {
    NSArray * _actionItems;
    <PKPassSharesListSectionControllerDelegate> * _delegate;
    unsigned long long  _mode;
    PKPassShare * _rootShare;
    NSArray * _shareItems;
    PKSharedPassSharesController * _sharesController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPassSharesListSectionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_alertForDisplayableError:(id)arg1;
- (id)_alertForRevokeOptionsForShare:(id)arg1;
- (void)_confirmRevokeShare:(id)arg1;
- (id)_contactForPKShareRowItem:(id)arg1;
- (id)_displayableShares;
- (void)_revokeAllShares;
- (void)_revokeShare:(id)arg1 cascade:(bool)arg2;
- (id)_subtitleForShare:(id)arg1;
- (id)_titleForPKShareRowItem:(id)arg1;
- (void)_updatePKShareRowItems;
- (void)_updateStopSharingItemToDisabled:(bool)arg1;
- (void)dealloc;
- (id)decorateListCell:(id)arg1 forPKShareRowItem:(id)arg2;
- (id)delegate;
- (void)didSelectItem:(id)arg1;
- (id)headerAttributedStringForIdentifier:(id)arg1;
- (id)init;
- (id)initWithMode:(unsigned long long)arg1 sharesController:(id)arg2 rootShare:(id)arg3 delegate:(id)arg4;
- (void)setDelegate:(id)arg1;
- (void)sharedPassSharesControllerDidUpdateShares:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;

@end
