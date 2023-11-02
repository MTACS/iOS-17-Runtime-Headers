
@interface EKConferenceInformationInlineEditItem : EKEventEditItem <EKCalendarItemInlineEditItem> {
    CalendarNotesCell * _cell;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (bool)isInline;
- (bool)isSaveable;
- (void)reset;
- (id)searchStringForEventAutocomplete;
- (bool)shouldAppearWithVisibility:(int)arg1;

@end
