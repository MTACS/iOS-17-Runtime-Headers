
@interface DNDFocusModeMO : NSManagedObject

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSSet *settings;

+ (id)fetchRequest;

@end
