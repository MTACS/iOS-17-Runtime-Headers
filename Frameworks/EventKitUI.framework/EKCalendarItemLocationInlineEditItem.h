
@interface EKCalendarItemLocationInlineEditItem : EKEventEditItem <EKCalendarItemInlineEditItem, EKEditItemViewControllerDelegate, EKEventDetailSuggestedLocationCellDelegate, PKScribbleInteractionDelegate, PKScribbleInteractionElementSource, UITextFieldDelegate> {
    EKLocationEditItemViewController * _currentLocationEditController;
    EKCalendarItemEditor * _editor;
    EKUILocationEditItemModel * _viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_clearButtonTapped:(id)arg1;
- (void)_clearLocationAtIndex:(unsigned long long)arg1;
- (void)_scribbleInteraction:(id)arg1 didFinishWritingInElement:(id)arg2;
- (void)_scribbleInteraction:(id)arg1 focusElement:(id)arg2 initialFocusSelectionReferencePoint:(struct CGPoint { double x1; double x2; })arg3 completion:(id /* block */)arg4;
- (bool)_scribbleInteraction:(id)arg1 focusWillTransformElement:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_scribbleInteraction:(id)arg1 frameForElement:(id)arg2;
- (void)_scribbleInteraction:(id)arg1 requestElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 completion:(id /* block */)arg3;
- (void)_scribbleInteraction:(id)arg1 willBeginWritingInElement:(id)arg2;
- (void)_setEditor:(id)arg1 andUpdateScribbleInteractionOnCell:(id)arg2 addScribbleInteraction:(bool)arg3;
- (unsigned long long)_supportedSearchTypesForSubitemAtIndex:(unsigned long long)arg1;
- (void)_updateClearButtonAndMakeVisible:(id)arg1 index:(unsigned long long)arg2;
- (void)_updateMapLocationCell:(id)arg1 index:(unsigned long long)arg2 location:(id)arg3;
- (void)_updateVirtualConferenceCell:(id)arg1 index:(unsigned long long)arg2 virtualConference:(id)arg3;
- (void)addStylingToCell:(id)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1 inEditor:(id)arg2;
- (void)dealloc;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (void)didTapAddSuggestedLocationCell:(id)arg1 disambiguatedLocation:(id)arg2;
- (void)didTapDismissSuggestedLocationCell:(id)arg1;
- (void)editItemPendingVideoConferenceCompleted:(id)arg1;
- (bool)editItemViewControllerSave:(id)arg1;
- (bool)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2;
- (bool)forceRefreshStartAndEndDatesOnSave;
- (bool)forceRefreshURLItemOnSave;
- (bool)forceTableReloadOnSave;
- (id)init;
- (bool)isInline;
- (bool)isSaveable;
- (bool)isSubitemAtIndexSaveable:(unsigned long long)arg1;
- (unsigned long long)numberOfSubitems;
- (void)refreshFromCalendarItemAndStore;
- (void)reset;
- (bool)saveAndDismissWithForce:(bool)arg1;
- (id)searchStringForEventAutocomplete;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldClear:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (bool)usesDetailViewControllerForSubitem:(unsigned long long)arg1;

@end
