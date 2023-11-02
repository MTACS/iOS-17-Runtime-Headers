
@interface WFActionSearchRankedResults : WFActionSearchRankedCollection {
    NSMutableDictionary * _displayNames;
    NSMutableDictionary * _records;
}

- (void).cxx_destruct;
- (void)addAction:(id)arg1 forKey:(id)arg2 type:(unsigned long long)arg3;
- (void)addKey:(id)arg1 withDisplayName:(id)arg2 type:(unsigned long long)arg3;
- (id)init;
- (id)rankedGroups;

@end
