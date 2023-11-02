
@interface MPModelPlaylistAuthorKind : MPModelKind {
    unsigned long long  _variants;
}

@property (nonatomic, readonly) unsigned long long variants;

+ (id)identityKind;
+ (id)kindWithVariants:(unsigned long long)arg1;

- (id)humanDescription;
- (struct shared_ptr<mlcore::Predicate> { struct Predicate {} *x1; struct __shared_weak_count {} *x2; })predicateWithBaseProperty:(void*)arg1;
- (unsigned long long)variants;

@end
