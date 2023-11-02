
@interface SBHIconLibraryQueryContext : NSObject {
    NSUUID * _UUID;
    NSMutableDictionary * _contextStorage;
    SBHIconLibraryQuery * _query;
    unsigned long long  _queryContextIdx;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic, readonly) SBHIconLibraryQuery *query;

- (void).cxx_destruct;
- (id)UUID;
- (id)description;
- (id)init;
- (id)initWithQuery:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToQueryContext:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)query;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end
