
@interface CRKHeaderTable : NSObject <CRKTablePrinting> {
    NSArray * _headers;
    NSArray * _keyPaths;
    NSArray * _objects;
    CRKTable * _table;
}

@property (nonatomic, readonly, copy) NSArray *headers;
@property (nonatomic, readonly, copy) NSArray *keyPaths;
@property (nonatomic, readonly, copy) NSArray *objects;
@property (nonatomic, readonly) CRKTable *table;

- (void).cxx_destruct;
- (id)crk_JSONRepresentationWithPrettyPrinting:(bool)arg1 sortKeys:(bool)arg2;
- (id)headers;
- (id)initWithHeaders:(id)arg1 keyPaths:(id)arg2 objects:(id)arg3;
- (id)keyPaths;
- (id)objects;
- (id)table;
- (id)tableString;

@end
