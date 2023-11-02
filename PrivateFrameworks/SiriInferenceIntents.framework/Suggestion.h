
@interface Suggestion : INObject

@property (nonatomic, copy) NSString *actionIdentifier;
@property (nonatomic, copy) NSArray *parameters;

+ (bool)supportsSecureCoding;

- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;

@end
