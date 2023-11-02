
@interface WFSmartPromptsExfiltrationLogger : NSObject {
    NSMutableDictionary * _store;
}

@property (retain) NSMutableDictionary *store;

- (void).cxx_destruct;
- (id)attributionSetByRewritingSetWithLoggedCounts:(id)arg1 forExfiltratingActionUUID:(id)arg2;
- (unsigned long long)currentExfiltratedItemCountForActionUUID:(id)arg1 contentOrigin:(id)arg2;
- (id)init;
- (void)logExfiltratedItemsCount:(unsigned long long)arg1 actionUUID:(id)arg2 contentOrigin:(id)arg3;
- (void)setStore:(id)arg1;
- (id)store;

@end
