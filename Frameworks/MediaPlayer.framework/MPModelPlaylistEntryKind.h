
@interface MPModelPlaylistEntryKind : MPModelKind {
    NSArray * _kinds;
}

@property (nonatomic, readonly) NSArray *kinds;

+ (id)identityKind;
+ (id)kindWithKinds:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)applyToView:(struct shared_ptr<mlcore::LibraryView> { struct LibraryView {} *x1; struct __shared_weak_count {} *x2; })arg1 withContext:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)humanDescription;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)kinds;

@end
