
@interface MPQueueFeederIdentifierRegistry : NSObject <NSCopying, NSSecureCoding> {
    NSMutableArray * _identifierSets;
    NSMutableArray * _identifiers;
    NSMapTable * _index;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, retain) NSMutableArray *identifierSets;
@property (nonatomic, retain) NSMutableArray *identifiers;
@property (nonatomic, retain) NSMapTable *index;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)applyChanges:(id)arg1 identifierSetLookupBlock:(id /* block */)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifierSetAtIndex:(long long)arg1;
- (id)identifierSetForItem:(id)arg1;
- (id)identifierSets;
- (id)identifiers;
- (id)index;
- (long long)indexForItem:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)itemAtIndex:(long long)arg1;
- (id)itemForIdentifierSet:(id)arg1;
- (void)replaceItemAndIdentifierSet:(id)arg1 atIndex:(long long)arg2;
- (void)setIdentifierSets:(id)arg1;
- (void)setIdentifiers:(id)arg1;
- (void)setIndex:(id)arg1;

@end
