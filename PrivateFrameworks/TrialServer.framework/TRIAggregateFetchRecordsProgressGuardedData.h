
@interface TRIAggregateFetchRecordsProgressGuardedData : NSObject {
    unsigned long long  actualBytesTransferred;
    unsigned long long  expectedTotalBytes;
    NSMutableDictionary * perCKRecordProgress;
    NSMutableDictionary * perMARecordProgress;
}

- (void).cxx_destruct;

@end
