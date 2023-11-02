
@protocol TLTimelineEntry <TLValidatable, TLFinalizable>

@required

- (NSDate *)tl_entryDate;
- (void)tl_setEntryDate:(NSDate *)arg1;

@end
