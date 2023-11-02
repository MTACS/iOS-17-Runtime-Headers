
@protocol HUCalendarScrubberViewDelegate <NSObject>

@required

- (void)scrubberViewController:(HUCalendarScrubberViewController *)arg1 didMoveToSection:(unsigned long long)arg2;
- (void)scrubberViewController:(HUCalendarScrubberViewController *)arg1 didSelectItemAtIndex:(NSIndexPath *)arg2;

@end
