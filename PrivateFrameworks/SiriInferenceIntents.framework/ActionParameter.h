
@interface ActionParameter : INObject

@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *value;

+ (bool)supportsSecureCoding;

- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;

@end
