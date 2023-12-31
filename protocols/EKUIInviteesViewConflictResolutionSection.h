
@protocol EKUIInviteesViewConflictResolutionSection <EKUIInviteesViewSection>

@required

- (EKInviteeAlternativeTimeSearcher *)availabilitySearcher;
- (void)availabilitySearcherChangedState:(long long)arg1;
- (void)clearCheckmark;
- (bool)injectNewRowsBeforeLastExistingRow;
- (void)refreshCellsAfterStateChange;
- (void)setAvailabilitySearcher:(EKInviteeAlternativeTimeSearcher *)arg1;
- (void)setNewTimeChosen:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDate *, NSDate *, void*
- (void)setShowPreviewOfEventAtTime:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDate *, NSDate *, void*

@end
