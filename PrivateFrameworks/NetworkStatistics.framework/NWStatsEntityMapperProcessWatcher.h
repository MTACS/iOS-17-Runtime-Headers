
@interface NWStatsEntityMapperProcessWatcher : NWStatsEntityMapper {
    NSString * _niluuidProcessName;
    NSMutableDictionary * _uuidProcessNameMap;
}

- (void).cxx_destruct;
- (void)_uuidProcessNameMapPrune;
- (id)identifierForUUID:(id)arg1 derivation:(int*)arg2;
- (id)init;
- (void)noteUUID:(id)arg1 forProcessName:(id)arg2;
- (id)stateDictionary;

@end
