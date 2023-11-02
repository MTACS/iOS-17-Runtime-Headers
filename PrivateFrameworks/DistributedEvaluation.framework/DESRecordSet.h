
@interface DESRecordSet : NSObject <NSSecureCoding> {
    NSArray * _coreDuetEvents;
    id /* block */  _dataFetcher;
    NSDictionary * _nativeRecordInfo;
    NSDictionary * _nativeRecords;
    NSDictionary * _predicate;
}

@property (nonatomic, readonly, copy) NSArray *coreDuetEvents;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly, copy) NSDictionary *nativeRecordInfo;
@property (nonatomic, readonly, copy) NSDictionary *nativeRecords;
@property (nonatomic, readonly) NSDictionary *predicate;

// Image: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation

+ (id)recordSetWithRecipeType:(id)arg1 nativeRecords:(id)arg2 coreDuetEventsUUIDs:(id)arg3 error:(id*)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_anyNativeRecordUUID;
- (id)coreDuetEvents;
- (unsigned long long)count;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)filteredRecordSetWithJSONPredicate:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNativeRecords:(id)arg1 nativeRecordInfo:(id)arg2 coreDuetEvents:(id)arg3;
- (id)initWithNativeRecords:(id)arg1 nativeRecordInfo:(id)arg2 coreDuetEvents:(id)arg3 predicate:(id)arg4 dataFetcher:(id /* block */)arg5;
- (id)nativeRecordDataForRecordUUID:(id)arg1 error:(id*)arg2;
- (id)nativeRecordInfo;
- (id)nativeRecordInfoForRecordUUID:(id)arg1;
- (id)nativeRecords;
- (id)predicate;

// Image: /System/Library/PrivateFrameworks/MLRuntime.framework/MLRuntime

+ (id)recordSetForTask:(id)arg1;

@end
