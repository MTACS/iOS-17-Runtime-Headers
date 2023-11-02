
@interface EKEventURLAndNotesInlineEditItem : EKEventEditItem <EKCalendarItemInlineEditItem> {
    EKEventNotesInlineEditItem * _notesEditItem;
    EKEventURLInlineEditItem * _urlEditItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_contentSizeCategoryChanged;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (id)init;
- (bool)isInline;
- (bool)isSaveable;
- (unsigned long long)numberOfSubitems;
- (void)refreshFromCalendarItemAndStore;
- (void)reset;
- (bool)saveAndDismissWithForce:(bool)arg1;
- (id)searchStringForEventAutocomplete;
- (void)setCalendarItem:(id)arg1 store:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setSelectedResponder:(id)arg1;
- (void)tableViewDidScroll;

@end