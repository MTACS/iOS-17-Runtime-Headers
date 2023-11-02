
@interface TipKitCore.CoreRuleRecord : NSManagedObject

@property (nonatomic) short categoryValue;
@property (nonatomic, retain) _TtC10TipKitCore15CoreEventRecord *event;
@property (nonatomic, copy) NSString *id;
@property (nonatomic) bool isDirty;
@property (nonatomic, copy) NSDate *lastEvaluated;
@property (nonatomic, retain) _TtC10TipKitCore19CoreParameterRecord *parameter;
@property (nonatomic, retain) _TtC10TipKitCore14CoreRuleRecord *parent;
@property (nonatomic, readonly) _TtC10TipKitCore14CoreRuleRecord *parentRoot;
@property (nonatomic, retain) _TtCC10TipKitCore8CoreRule9Predicate *predicate;
@property (nonatomic, copy) NSDictionary *ruleInfo;
@property (nonatomic) short statusValue;
@property (nonatomic, copy) NSSet *subrules;
@property (nonatomic, retain) _TtC10TipKitCore13CoreTipRecord *tip;
@property (nonatomic, readonly) _TtC10TipKitCore13CoreTipRecord *tipRecord;
@property (nonatomic) bool updatesFromTipsd;

+ (id)attributes;
+ (id)relationships;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
- (id)parentRoot;
- (void)setUpdatesFromTipsd:(bool)arg1;
- (id)tipRecord;
- (bool)updateStatusWithIsSatisfied:(bool)arg1 error:(id*)arg2;
- (bool)updatesFromTipsd;

@end
