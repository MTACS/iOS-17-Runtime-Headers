
@interface InAppSearchCriteria : INObject

@property (nonatomic, copy) NSString *query;
@property (nonatomic) long long verb;

+ (bool)supportsSecureCoding;

- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;

@end
