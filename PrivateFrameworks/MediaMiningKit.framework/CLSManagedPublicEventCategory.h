
@interface CLSManagedPublicEventCategory : NSManagedObject

@property (nonatomic, retain) NSString *category;
@property (nonatomic, retain) CLSManagedPublicEvent *event;
@property (nonatomic, retain) NSString *localizedName;
@property (nonatomic, retain) NSString *localizedSubcategories;

+ (id)entityName;

@end
