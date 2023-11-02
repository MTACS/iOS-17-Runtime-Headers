
@interface EKExceptionDate : EKObject

@property (nonatomic, retain) NSDate *date;

+ (Class)frozenClass;
+ (id)knownIdentityKeysForComparison;

- (id)date;
- (id)description;
- (id)initWithDate:(id)arg1;
- (void)setDate:(id)arg1;

@end
