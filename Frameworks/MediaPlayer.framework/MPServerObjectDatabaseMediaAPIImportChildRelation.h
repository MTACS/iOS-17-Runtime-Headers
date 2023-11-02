
@interface MPServerObjectDatabaseMediaAPIImportChildRelation : NSObject {
    NSString * _childKey;
    MPIdentifierSet * _identifiers;
    MPIdentifierSet * _parentIdentifiers;
    long long  _relativeOrder;
}

@property (nonatomic) NSString *childKey;
@property (nonatomic, copy) MPIdentifierSet *identifiers;
@property (nonatomic, copy) MPIdentifierSet *parentIdentifiers;
@property (nonatomic) long long relativeOrder;

- (void).cxx_destruct;
- (id)childKey;
- (id)identifiers;
- (id)initWithItemIdentifiers:(id)arg1 parentIdentifiers:(id)arg2 childKey:(id)arg3 relativeOrder:(long long)arg4;
- (id)parentIdentifiers;
- (long long)relativeOrder;
- (void)setChildKey:(id)arg1;
- (void)setIdentifiers:(id)arg1;
- (void)setParentIdentifiers:(id)arg1;
- (void)setRelativeOrder:(long long)arg1;

@end
