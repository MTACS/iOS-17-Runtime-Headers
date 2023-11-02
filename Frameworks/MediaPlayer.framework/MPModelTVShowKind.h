
@interface MPModelTVShowKind : MPModelKind {
    MPModelTVSeasonKind * _seasonKind;
}

@property (nonatomic, readonly, copy) MPModelTVSeasonKind *seasonKind;

+ (id)identityKind;
+ (id)kindWithSeasonKind:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)applyToView:(struct shared_ptr<mlcore::LibraryView> { struct LibraryView {} *x1; struct __shared_weak_count {} *x2; })arg1 withContext:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)humanDescription;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (struct shared_ptr<mlcore::Predicate> { struct Predicate {} *x1; struct __shared_weak_count {} *x2; })representedSearchScopePredicate;
- (id)seasonKind;

@end
