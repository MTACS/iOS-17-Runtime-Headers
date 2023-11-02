
@protocol EKCalendarItemInlineEditItem <NSObject>

@required

- (bool)isSaveable;
- (NSString *)searchStringForEventAutocomplete;

@end
