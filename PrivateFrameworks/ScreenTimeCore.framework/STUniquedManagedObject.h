
@interface STUniquedManagedObject : NSManagedObject

@property (nonatomic, readonly) NSUUID *sortKey;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

- (void)awakeFromInsert;
- (id)computeUniqueIdentifier;
- (id)dictionaryRepresentation;
- (void)updateUniqueIdentifier;

@end
