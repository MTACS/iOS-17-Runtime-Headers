
@interface NWStatsEntityMapperCoalitionWatcher : NWStatsEntityMapper {
    NSMutableDictionary * _uuidCoalitionNameMap;
}

- (void).cxx_destruct;
- (void)_uuidCoalitionNameMapPrune;
- (id)identifierForUUID:(id)arg1 derivation:(int*)arg2;
- (id)init;
- (bool)noteUUID:(id)arg1 forPid:(int)arg2;

@end
