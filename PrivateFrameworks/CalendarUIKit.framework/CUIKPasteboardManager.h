
@interface CUIKPasteboardManager : NSObject <EKAutocompleteSearchPasteboardItemProvider> {
    EKCalendar * _calendarForPaste;
    <CUIKPasteboardManagerCalendarProvider> * _calendarProvider;
    NSMutableDictionary * _copiedEvents;
    NSDate * _dateForPaste;
    <CUIKPasteboardManagerEventStoreProvider> * _eventStoreProvider;
    <CUIKPasteboard> * _pasteboard;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_pasteboardItemForEvent:(id)arg1;

- (void).cxx_destruct;
- (bool)_calendarIsPasteableTo:(id)arg1 allCalendars:(id)arg2;
- (void)_copyEvents:(id)arg1 toDict:(id)arg2;
- (void)_cutEvents:(id)arg1 editor:(id)arg2;
- (id)_eventsFromPasteboard:(id)arg1;
- (void)_pasteEvents:(id)arg1 atDate:(id)arg2 dateMode:(unsigned long long)arg3 pasteDelegate:(id)arg4 duplicate:(bool)arg5;
- (void)_saveNewEventsOrOpenEditor:(id)arg1 pasteDelegate:(id)arg2 duplicate:(bool)arg3;
- (void)_validateAction:(unsigned long long)arg1 forEvents:(id)arg2 delegate:(id)arg3 completion:(id /* block */)arg4;
- (id)calendarToPasteTo;
- (id)calendarToPasteToWithEvents:(id)arg1;
- (bool)canPerformPaste;
- (struct CGColor { }*)colorOfCalendarToPasteTo;
- (void)copyEvents:(id)arg1 delegate:(id)arg2;
- (void)cutEvents:(id)arg1 delegate:(id)arg2;
- (void)duplicateEvents:(id)arg1 withDateMode:(unsigned long long)arg2 delegate:(id)arg3;
- (id)eventsFromPasteboard;
- (id)initWithEventStoreProvider:(id)arg1 pasteboard:(id)arg2 calendarProvider:(id)arg3;
- (unsigned long long)numberOfEventsToPaste;
- (void)pasteEventsWithDateMode:(unsigned long long)arg1 delegate:(id)arg2;
- (void)setCalendarForPaste:(id)arg1;
- (void)setDateForPaste:(id)arg1;

@end
