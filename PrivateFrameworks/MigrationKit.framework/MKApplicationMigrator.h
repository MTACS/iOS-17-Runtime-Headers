
@interface MKApplicationMigrator : MKMigrator {
    MKApplicationDatabase * _db;
    NSMutableArray * _identifiers;
    bool  _isImporting;
    unsigned long long  _lookupErrorCount;
    unsigned long long  _matchedAppsCount;
    NSDictionary * _signatures;
    unsigned long long  _totalCount;
}

@property (nonatomic, retain) NSMutableArray *identifiers;
@property (nonatomic, retain) NSDictionary *signatures;

- (void).cxx_destruct;
- (void)cancel;
- (void)close;
- (void)dealloc;
- (void)didLookup:(id)arg1 identifiers:(id)arg2 error:(id)arg3;
- (void)drainQueue;
- (id)identifiers;
- (void)import;
- (void)import:(id)arg1;
- (void)import:(id)arg1 identifiers:(id)arg2;
- (void)importDataEncodedInJSON:(id)arg1;
- (id)init;
- (void)install;
- (void)install:(id)arg1;
- (id)lookup;
- (void)lookup:(id)arg1;
- (bool)prompt;
- (void)purchase;
- (void)setIdentifiers:(id)arg1;
- (void)setSignatures:(id)arg1;
- (id)signatures;
- (void)slice:(unsigned long long)arg1;

@end
