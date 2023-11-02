
@interface BMItemMO : NSManagedObject

@property (nonatomic) long long absoluteSupport;
@property (nonatomic, retain) NSSet *antecedentOfRules;
@property (nonatomic, retain) NSSet *consequentOfRules;
@property (nonatomic, copy) NSString *normalizedValue;
@property (nonatomic, copy) NSString *typeIdentifier;
@property (nonatomic, copy) NSString *uniformIdentifier;

+ (id)fetchRequest;

@end
