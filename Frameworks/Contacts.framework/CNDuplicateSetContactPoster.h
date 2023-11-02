
@interface CNDuplicateSetContactPoster : NSManagedObject

@property (nonatomic, retain) CNDuplicateSet *duplicateSet;
@property (nonatomic, copy) NSData *posterData;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
