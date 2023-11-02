
@interface ACDManagedAccountProperty : NSManagedObject

@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) ACDManagedAccount *owner;
@property (nonatomic, retain) id value;

@end
