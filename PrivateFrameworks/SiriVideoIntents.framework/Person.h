
@interface Person : INObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long role;

+ (bool)supportsSecureCoding;

- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;

@end
