
@interface IMDCKMockDatabase : CKDatabase {
    NSDictionary * _identifierToZoneMap;
}

@property (nonatomic, readonly) NSDictionary *identifierToZoneMap;

- (id)_initWithContainer:(id)arg1 scope:(long long)arg2;
- (id)_zoneIdentifierForOperation:(id)arg1;
- (id)_zoneManager;
- (void)addOperation:(id)arg1;
- (void)dealloc;
- (id)identifierToZoneMap;
- (id)init;

@end
