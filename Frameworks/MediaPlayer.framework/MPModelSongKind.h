
@interface MPModelSongKind : MPModelKind {
    unsigned long long  _options;
    unsigned long long  _variants;
}

@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) unsigned long long variants;

+ (id)identityKind;
+ (id)kindWithVariants:(unsigned long long)arg1 options:(unsigned long long)arg2;
+ (bool)supportsSecureCoding;

- (void)applyToView:(struct shared_ptr<mlcore::LibraryView> { struct LibraryView {} *x1; struct __shared_weak_count {} *x2; })arg1 withContext:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)humanDescription;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)options;
- (struct shared_ptr<mlcore::Predicate> { struct Predicate {} *x1; struct __shared_weak_count {} *x2; })predicateWithBaseProperty:(void*)arg1;
- (struct shared_ptr<mlcore::Predicate> { struct Predicate {} *x1; struct __shared_weak_count {} *x2; })representedSearchScopePredicate;
- (unsigned long long)variants;

@end
