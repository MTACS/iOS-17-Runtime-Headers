
@interface _EXQueryResultUpdate : _EXQueryResult <NSSecureCoding> {
    NSSet * _removedUUIDs;
}

@property (readonly) NSSet *addedExtensions;
@property (readonly) NSSet *removedUUIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)addedExtensions;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAddedExtensions:(id)arg1 removedUUIDs:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurrentExtensions:(id)arg1 updatedExtensions:(id)arg2;
- (id)initWithIdentities:(id)arg1;
- (id)removedUUIDs;

@end
