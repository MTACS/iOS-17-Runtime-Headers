
@interface NWStatsEntityMapperStaticAssignment : NWStatsEntityMapper {
    NSMutableDictionary * _staticUUIDToBundleIDMap;
}

- (void).cxx_destruct;
- (id)identifierForUUID:(id)arg1 derivation:(int*)arg2;
- (id)initWithFlavor:(id)arg1;

@end
