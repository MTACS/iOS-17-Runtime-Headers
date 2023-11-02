
@interface AgeDateTime : INObject

@property (nonatomic, copy) NSDateComponents *dateComponents;
@property (nonatomic) long long qualifier;

+ (bool)supportsSecureCoding;

- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;

@end
