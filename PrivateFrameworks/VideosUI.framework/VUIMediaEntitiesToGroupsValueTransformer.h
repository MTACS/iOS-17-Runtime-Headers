
@interface VUIMediaEntitiesToGroupsValueTransformer : NSValueTransformer {
    id /* block */  _groupsSortComparator;
    NSString * _identifierKeyPath;
    bool  _performDefaultSort;
    NSString * _sortIndexKeyPath;
}

@property (nonatomic, copy) id /* block */ groupsSortComparator;
@property (nonatomic, copy) NSString *identifierKeyPath;
@property (nonatomic) bool performDefaultSort;
@property (nonatomic, copy) NSString *sortIndexKeyPath;

+ (bool)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (void).cxx_destruct;
- (id /* block */)groupsSortComparator;
- (id)identifierKeyPath;
- (id)init;
- (id)initWithIdentifierKeyPath:(id)arg1;
- (bool)performDefaultSort;
- (void)setGroupsSortComparator:(id /* block */)arg1;
- (void)setIdentifierKeyPath:(id)arg1;
- (void)setPerformDefaultSort:(bool)arg1;
- (void)setSortIndexKeyPath:(id)arg1;
- (id)sortIndexKeyPath;
- (id)transformedValue:(id)arg1;

@end
