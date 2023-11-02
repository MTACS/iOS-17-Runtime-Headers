
@protocol WLDataclassMigrating <NSObject>

@required

- (bool)accountBased;
- (NSString *)contentType;
- (NSString *)dataType;
- (bool)storeRecordDataInDatabase;
- (bool)wantsSegmentedDownloads;

@optional

- (bool)confirmItemSizeWithSourceBeforeDownloading;
- (void)deleteData;
- (void)estimateItemSizeForSummary:(WLSourceDeviceRecordSummary *)arg1 account:(WLSourceDeviceAccount *)arg2;
- (void)importDataFromProvider:(void *)arg1 forSummaries:(void *)arg2 summaryStart:(void *)arg3 summaryCompletion:(void *)arg4; // needs 4 arg types, found 20: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, NSData *, id /* block */, WLSourceDeviceRecordSummary *, void*, NSArray *, id /* block */, void*, void, id /* block */, WLSourceDeviceRecordSummary *, void*, id /* block */, void*, void, id /* block */, WLSourceDeviceRecordSummary *, NSError *, void*
- (NSError *)importDidEnd;
- (unsigned long long)importErrorCount;
- (void)importRecordData:(void *)arg1 summary:(void *)arg2 account:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSData *, WLSourceDeviceRecordSummary *, WLSourceDeviceAccount *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (NSError *)importWillBegin;
- (void)performPreImportPhaseForSummary:(WLSourceDeviceRecordSummary *)arg1 data:(NSData *)arg2;
- (bool)potentiallyLargeRecordData;

@end
