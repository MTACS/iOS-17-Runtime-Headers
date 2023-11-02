
@interface CPLScopeFilter : NSObject {
    NSSet * _excludedScopeIdentifiers;
    NSSet * _includedScopeIdentifiers;
}

@property (nonatomic, readonly) NSSet *excludedScopeIdentifiers;
@property (nonatomic, readonly) NSSet *includedScopeIdentifiers;
@property (nonatomic, readonly) NSString *simpleDescription;

- (void).cxx_destruct;
- (id)_setOfScopeIdentifiersFromEnumeration:(id)arg1;
- (id)description;
- (id)excludedScopeIdentifiers;
- (bool)filterOnScopeIdentifier:(id)arg1;
- (id)includedScopeIdentifiers;
- (id)initWithExcludedScopeIdentifiers:(id)arg1;
- (id)initWithIncludedScopeIdentifiers:(id)arg1;
- (id)simpleDescription;

@end
