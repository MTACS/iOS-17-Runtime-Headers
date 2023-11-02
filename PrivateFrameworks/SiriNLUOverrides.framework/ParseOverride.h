
@interface ParseOverride : NSManagedObject

@property (nonatomic, copy) NSData *archivedNluRequestRule;
@property (nonatomic, copy) NSDate *creation;
@property (nonatomic) bool enabled;
@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSString *inputText;
@property (nonatomic, copy) NSString *locale;
@property (nonatomic) int namespace;
@property (nonatomic, copy) NSString *overrideId;
@property (nonatomic) int source;
@property (nonatomic, copy) NSData *userParse;
@property (nonatomic) int utteranceComparisonType;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
- (bool)validateForInsert:(id*)arg1;
- (bool)validateForUpdate:(id*)arg1;

@end
