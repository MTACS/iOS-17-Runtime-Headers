
@interface CNDuplicateCohort : NSManagedObject

@property (nonatomic, copy) NSString *cropRectString;
@property (nonatomic, retain) NSSet *duplicates;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSData *imageData;
@property (nonatomic, copy) NSData *posterData;

- (void).cxx_construct;
- (void).cxx_destruct;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
