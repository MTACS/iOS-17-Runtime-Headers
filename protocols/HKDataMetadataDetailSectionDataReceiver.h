
@protocol HKDataMetadataDetailSectionDataReceiver <HKDataMetadataSectionDataReceiver>

@required

- (HKCalendarCache *)calendarCache;
- (HKDisplayTypeController *)displayTypeController;
- (HKUnitPreferenceController *)unitController;

@end
