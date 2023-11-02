
@interface AXSS_PunctuationContext : NSManagedObject

@property (nonatomic, copy) NSString *contextIdentifier;
@property (nonatomic, retain) AXSS_PunctuationGroup *group;

+ (id)fetchRequest;

@end
