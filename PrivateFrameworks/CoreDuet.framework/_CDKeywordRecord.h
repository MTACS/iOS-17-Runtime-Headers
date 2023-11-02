
@interface _CDKeywordRecord : NSManagedObject

@property (nonatomic) double creationDate;
@property (nonatomic, retain) NSSet *interactions;
@property (nonatomic, retain) NSString *keyword;

@end
