
@interface _UIRelationshipTraitStorageRecord : NSObject <NSCoding> {
    NSSet * _addedObjects;
    NSSet * _removedObjects;
    UITraitCollection * _traitCollection;
}

@property (nonatomic, readonly) NSSet *addedObjects;
@property (nonatomic, readonly) NSSet *removedObjects;
@property (nonatomic, readonly) UITraitCollection *traitCollection;

- (void).cxx_destruct;
- (id)addedObjects;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTraitCollection:(id)arg1 addedObjects:(id)arg2 removedObjects:(id)arg3;
- (id)removedObjects;
- (id)traitCollection;

@end
