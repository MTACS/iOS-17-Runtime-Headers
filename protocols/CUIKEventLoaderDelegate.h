
@protocol CUIKEventLoaderDelegate

@required

- (void)calendarEventLoader:(CUIKEventLoader *)arg1 occurrencesDidUpdateBetweenStart:(double)arg2 end:(double)arg3 generation:(int)arg4 wasEmptyLoad:(bool)arg5;

@end
