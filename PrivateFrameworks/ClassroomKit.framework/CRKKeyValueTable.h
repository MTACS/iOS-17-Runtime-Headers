
@interface CRKKeyValueTable : NSObject <CRKTablePrinting> {
    NSArray * _keyValuePairs;
    CRKTable * _table;
}

@property (nonatomic, readonly, copy) NSArray *keyValuePairs;
@property (nonatomic, readonly) CRKTable *table;

- (void).cxx_destruct;
- (id)crk_JSONRepresentationWithPrettyPrinting:(bool)arg1 sortKeys:(bool)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)initWithKeyValuePairs:(id)arg1;
- (id)keyValuePairs;
- (id)table;
- (id)tableString;

@end
