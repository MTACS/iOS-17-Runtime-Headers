
@interface SignedDuration : INObject

@property (nonatomic) long long direction;
@property (nonatomic, retain) NSNumber *duration;

+ (bool)supportsSecureCoding;

- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;

@end
