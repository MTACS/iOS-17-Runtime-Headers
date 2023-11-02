
@interface ATXRootOfAppDataWithHashes : ATXRootOfAppData {
    NSMutableDictionary * _dataForBundleId;
}

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithSerialized:(id)arg1;
- (void)recordSessionWithBundleId:(id)arg1 firstAction:(id)arg2;
- (id)serialize;
- (unsigned long long)sessionCountForBundleId:(id)arg1;
- (unsigned long long)sessionCountForBundleId:(id)arg1 firstAction:(id)arg2;

@end
