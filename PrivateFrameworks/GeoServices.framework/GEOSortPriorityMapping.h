
@interface GEOSortPriorityMapping : NSObject {
    NSArray * _entries;
}

@property (nonatomic, readonly) NSArray *entries;

+ (long long)resultSubtypeForACResultSubtype:(int)arg1;
+ (long long)resultTypeForACResultType:(int)arg1;
+ (id)sortPriorityMappingFromDefaultsValue:(id)arg1;

- (void).cxx_destruct;
- (id)entries;
- (id)init;
- (id)initWithAutocompleteResultSortPriorityMapping:(id)arg1;
- (id)initWithEntries:(id)arg1;

@end
