
@interface MPModelArtistKind : MPModelKind {
    MPModelAlbumKind * _albumKind;
}

@property (nonatomic, readonly, copy) MPModelAlbumKind *albumKind;

+ (id)identityKind;
+ (id)kindWithAlbumKind:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)albumKind;
- (void)applyToView:(struct shared_ptr<mlcore::LibraryView> { struct LibraryView {} *x1; struct __shared_weak_count {} *x2; })arg1 withContext:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)humanDescription;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (struct shared_ptr<mlcore::Predicate> { struct Predicate {} *x1; struct __shared_weak_count {} *x2; })representedSearchScopePredicate;

@end
