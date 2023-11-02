
@interface TKTokenAccessDBBackedByUserDefaults : NSObject <TKTokenAccessDB> {
    NSUserDefaults * _db;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_keyRefForRequest:(id)arg1;
- (void)clearAllAccessRecords;
- (long long)fetchAccessForRequest:(id)arg1;
- (id)init;
- (void)storeAccess:(long long)arg1 forRequest:(id)arg2;

@end
