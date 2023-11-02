
@interface UtsSearchParam : INObject

@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSArray *values;

+ (bool)supportsSecureCoding;

- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;

@end
