
@interface ATXRootOfAppDataWithDictionary : ATXRootOfAppData {
    NSMutableDictionary * _firstUA;
    NSMutableDictionary * _sessionCounts;
}

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)recordSessionWithBundleId:(id)arg1 firstAction:(id)arg2;
- (unsigned long long)sessionCountForBundleId:(id)arg1;
- (unsigned long long)sessionCountForBundleId:(id)arg1 firstAction:(id)arg2;

@end
