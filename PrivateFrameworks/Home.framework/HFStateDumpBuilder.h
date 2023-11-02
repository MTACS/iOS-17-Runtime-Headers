
@interface HFStateDumpBuilder : NSObject {
    HFStateDumpBuilderContext * _context;
    NSMutableArray * _entries;
    id  _object;
}

@property (nonatomic, readonly) HFStateDumpBuilderContext *context;
@property (nonatomic, readonly) NSMutableArray *entries;
@property (nonatomic, readonly) id object;

+ (id)_coerceObjectToPropertyList:(id)arg1 options:(unsigned long long)arg2;
+ (id)builderWithObject:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (id)_filteredEntries;
- (id)_formattedObjectForEntry:(id)arg1 withRepresentation:(unsigned long long)arg2;
- (id)_formattedObjectForObject:(id)arg1 withRepresentation:(unsigned long long)arg2 context:(id)arg3 options:(unsigned long long)arg4;
- (void)appendBool:(bool)arg1 withName:(id)arg2;
- (void)appendBool:(bool)arg1 withName:(id)arg2 ifEqualTo:(bool)arg3;
- (void)appendObject:(id)arg1 withName:(id)arg2;
- (void)appendObject:(id)arg1 withName:(id)arg2 context:(id)arg3;
- (void)appendObject:(id)arg1 withName:(id)arg2 context:(id)arg3 options:(unsigned long long)arg4;
- (void)appendObject:(id)arg1 withName:(id)arg2 options:(unsigned long long)arg3;
- (id)buildDescription;
- (id)buildPropertyListRepresentation;
- (id)context;
- (id)entries;
- (id)initWithObject:(id)arg1 context:(id)arg2;
- (id)object;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end
