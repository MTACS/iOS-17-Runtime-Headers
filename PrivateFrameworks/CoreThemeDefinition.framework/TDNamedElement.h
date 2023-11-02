
@interface TDNamedElement : NSManagedObject

@property (nonatomic, retain) NSDate *dateOfLastChange;
@property (nonatomic, retain) NSNumber *identifier;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) TDElementProduction *production;

@end
