
@protocol WLMigrationDataSource <NSObject>

@required

- (void)accountsDataForMigrator:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 10: <WLDataclassMigrating> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, unsigned long long, NSError *, double, void*
- (void)dataForSummary:(void *)arg1 migrator:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: WLSourceDeviceRecordSummary *, <WLDataclassMigrating> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)dataSegmentForSummary:(void *)arg1 byteRange:(void *)arg2 migrator:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: WLSourceDeviceRecordSummary *, struct _NSRange { unsigned long long x1; unsigned long long x2; }, <WLDataclassMigrating> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)fileForSummary:(void *)arg1 migrator:(void *)arg2 fileAccessor:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 14: WLSourceDeviceRecordSummary *, <WLDataclassMigrating> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, NSError *, id /* block */, NSURL *, void*, id /* block */, void*, void, id /* block */, NSError *, void*
- (void)itemSizeForSummary:(void *)arg1 migrator:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: WLSourceDeviceRecordSummary *, <WLDataclassMigrating> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (void)summariesDataForAccount:(void *)arg1 migrator:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 11: WLSourceDeviceAccount *, <WLDataclassMigrating> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, unsigned long long, NSError *, double, void*
- (void)updateUIWithProgress:(void *)arg1 remainingTime:(void *)arg2 logString:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: double, double, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
