
@protocol HRWDDisplayable <NSObject>

@required

- (bool)canDefineConceptRoom;
- (NSArray *)conceptNameItems;
- (void)fetchAttachmentItemsWithHealthRecordsStore:(void *)arg1 conceptStore:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: HKHealthRecordsStore *, HKConceptStore *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSString *, void*
- (void)fetchChartValueWithRangeWithHealthStore:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: HKHealthRecordsStore *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKInspectableValueInRange *, void*
- (void)fetchConceptRoomItemsWithHealthRecordsStore:(void *)arg1 conceptStore:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: HKHealthRecordsStore *, HKConceptStore *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)fetchDetailItemsWithHealthRecordsStore:(void *)arg1 conceptStore:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: HKHealthRecordsStore *, HKConceptStore *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)fetchDisplayNameItemWithHealthRecordsStore:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: HKHealthRecordsStore *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)fetchObservationDetailItemsWithHealthRecordsStore:(void *)arg1 style:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: HKHealthRecordsStore *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)fetchStructuredFieldItemsWithHealthRecordsStore:(void *)arg1 conceptStore:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: HKHealthRecordsStore *, HKConceptStore *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (bool)isDateLess;
- (bool)isDisplayable;
- (bool)isRemovedFromRemote;
- (NSDate *)meaningfulDate;
- (NSString *)meaningfulDateString;
- (NSString *)meaningfulDateTitle;
- (NSString *)subtitle;
- (NSString *)title;
- (NSString *)titleDisplayStringForDetailViewController;

@end
