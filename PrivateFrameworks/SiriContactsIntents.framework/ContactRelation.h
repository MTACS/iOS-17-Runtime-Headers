
@interface ContactRelation : INObject

@property (nonatomic, copy) NSString *relatedFullName;
@property (nonatomic, copy) NSString *relationship;

+ (bool)supportsSecureCoding;

- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;

@end
