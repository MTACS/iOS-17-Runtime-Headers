
@interface RecordSet : NSObject {
    id /* block */  _dataFetcher;
    NSDictionary * _nativeRecordInfo;
    NSDictionary * _nativeRecords;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly, copy) NSDictionary *nativeRecordInfo;
@property (nonatomic, readonly, copy) NSDictionary *nativeRecords;

- (void).cxx_destruct;
- (id)_anyNativeRecordUUID;
- (unsigned long long)count;
- (id)initWithNativeRecords:(id)arg1 nativeRecordInfo:(id)arg2;
- (id)initWithNativeRecords:(id)arg1 nativeRecordInfo:(id)arg2 dataFetcher:(id /* block */)arg3;
- (id)nativeRecordDataForRecordUUID:(id)arg1 error:(id*)arg2;
- (id)nativeRecordInfo;
- (id)nativeRecordInfoForRecordUUID:(id)arg1;
- (id)nativeRecords;

@end
