
@interface SHMediaLibrarySnapshot : NSObject <NSCopying, NSSecureCoding> {
    NSMutableOrderedSet * _changeset;
}

@property (nonatomic, readonly) NSArray *allItemIdentifiers;
@property (nonatomic, readonly) NSArray *changes;
@property (nonatomic, retain) NSMutableOrderedSet *changeset;
@property (nonatomic, readonly) bool hasChanges;
@property (nonatomic, readonly) NSArray *trackChanges;

+ (id)remapSnapshot:(id)arg1 withBundleIdentifier:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addChanges:(id)arg1;
- (void)addItem:(id)arg1;
- (id)allItemIdentifiers;
- (id)changes;
- (id)changeset;
- (bool)containsLibraryItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)evaluateUsingPredicate:(id)arg1;
- (bool)hasChanges;
- (id)init;
- (id)initWithChanges:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isConflictingChange:(id)arg1;
- (void)mergeSnapshot:(id)arg1;
- (void)removeItem:(id)arg1;
- (void)setChangeset:(id)arg1;
- (id)trackChanges;
- (id)tracksForChangeType:(long long)arg1;
- (bool)validateWithBundleIdentifier:(id)arg1;

@end
