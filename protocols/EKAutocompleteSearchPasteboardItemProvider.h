
@protocol EKAutocompleteSearchPasteboardItemProvider <NSObject>

@required

- (struct CGColor { }*)colorOfCalendarToPasteTo;
- (NSSet *)eventsFromPasteboard;

@end
