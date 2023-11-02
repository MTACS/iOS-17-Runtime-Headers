
@interface BMRuleMO : NSManagedObject

@property (nonatomic) long long absoluteAntecedentSupport;
@property (nonatomic) long long absoluteConsequentSupport;
@property (nonatomic) long long absoluteSupport;
@property (nonatomic, retain) NSSet *antecedent;
@property (nonatomic) double confidence;
@property (nonatomic, retain) NSSet *consequent;
@property (nonatomic) double support;
@property (nonatomic) long long uniqueDaysLastWeek;
@property (nonatomic) long long uniqueDaysTotal;

+ (id)fetchRequest;

@end
