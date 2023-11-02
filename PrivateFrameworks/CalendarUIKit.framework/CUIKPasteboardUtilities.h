
@interface CUIKPasteboardUtilities : NSObject

+ (void)adjustTimesForEventsToPaste:(id)arg1 pasteDate:(id)arg2 dateMode:(unsigned long long)arg3 calendar:(id)arg4;
+ (bool)allEventsValidForAction:(unsigned long long)arg1 fromEvents:(id)arg2;
+ (bool)declinesToPerformCutCopyPasteAction:(SEL)arg1 withSender:(id)arg2;
+ (id)duplicateEventsByStrippingUnsupportedFields:(id)arg1 toNewCalendar:(id)arg2;
+ (id)roundedDateForDate:(id)arg1 dateMode:(unsigned long long)arg2 calendar:(id)arg3;

@end
