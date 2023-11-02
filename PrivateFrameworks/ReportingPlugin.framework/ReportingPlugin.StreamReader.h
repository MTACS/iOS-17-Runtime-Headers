
@interface ReportingPlugin.StreamReader : NSManagedObject

@property (nonatomic, copy) NSSet *bookmarks;
@property (nonatomic, copy) NSString *name;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
