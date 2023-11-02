
@interface _EMSearchableIndexPendingRemovals : NSObject <NSCopying> {
    NSSet * _exclusionReasons;
    NSSet * _purgeReasons;
    NSMutableDictionary * _reasonsByIdentifier;
}

@property (readonly) unsigned long long count;
@property (nonatomic, readonly) NSArray *deletedIdentifiers;
@property (nonatomic, copy) NSSet *exclusionReasons;
@property (nonatomic, readonly) NSArray *identifiers;
@property (nonatomic, copy) NSSet *purgeReasons;
@property (nonatomic, readonly) NSArray *purgedIdentifiers;

- (void).cxx_destruct;
- (id)_identifiersPassingReasonsTest:(id /* block */)arg1;
- (void)addIdentifiers:(id)arg1 withReasons:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)deletedIdentifiers;
- (id)exclusionReasons;
- (id)identifiers;
- (id)initWithPurgeReasons:(id)arg1 exclusionReasons:(id)arg2;
- (id)purgeReasons;
- (id)purgedIdentifiers;
- (void)removeAllIdentifiers;
- (void)removeIdentifier:(id)arg1;
- (void)setExclusionReasons:(id)arg1;
- (void)setPurgeReasons:(id)arg1;

@end
