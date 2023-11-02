
@interface TPSContextualRule : TPSSerializableObject {
    NSArray * _eventIdentifiers;
    NSString * _identifier;
    NSDate * _matchedDate;
}

@property (nonatomic, copy) NSArray *eventIdentifiers;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSDate *matchedDate;

+ (id)eventsForRuleDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)eventIdentifiers;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)matchedDate;
- (void)restartTracking;
- (void)setEventIdentifiers:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMatchedDate:(id)arg1;

@end
