
@interface CLSEICategory : NSManagedObject

@property (nonatomic, retain) NSSet *events;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) CLSEICategory *parentCategory;
@property (nonatomic, copy) NSSet *subCategories;

@end
