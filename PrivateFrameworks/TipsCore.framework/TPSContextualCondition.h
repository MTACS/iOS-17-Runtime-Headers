
@interface TPSContextualCondition : TPSSerializableObject {
    unsigned long long  _joinType;
    NSDate * _matchedDate;
    NSArray * _rules;
    unsigned long long  _type;
}

@property (nonatomic) unsigned long long joinType;
@property (nonatomic, copy) NSDate *matchedDate;
@property (nonatomic, copy) NSArray *rules;
@property (nonatomic) unsigned long long type;

+ (id)eventsForConditionDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)eventIdentifiers;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 type:(unsigned long long)arg2;
- (unsigned long long)joinType;
- (id)matchedDate;
- (void)restartTracking;
- (id)rules;
- (void)setJoinType:(unsigned long long)arg1;
- (void)setMatchedDate:(id)arg1;
- (void)setRules:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
