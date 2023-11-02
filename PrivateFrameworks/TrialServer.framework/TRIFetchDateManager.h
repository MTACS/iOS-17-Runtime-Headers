
@interface TRIFetchDateManager : NSObject <TRIDateProviding> {
    TRIKVStore * _keyValueStore;
}

+ (id)kvstoreKeyForType:(unsigned char)arg1 container:(int)arg2 teamId:(id)arg3;
+ (id)managerWithKeyValueStore:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)initWithKeyValueStore:(id)arg1;
- (id)lastFetchDateWithType:(unsigned char)arg1 container:(int)arg2 teamId:(id)arg3;
- (void)setLastFetchDate:(id)arg1 type:(unsigned char)arg2 container:(int)arg3 teamId:(id)arg4;

@end
