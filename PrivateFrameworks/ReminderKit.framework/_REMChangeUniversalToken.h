
@interface _REMChangeUniversalToken : REMChangeToken

+ (bool)supportsSecureCoding;
+ (id)universalToken;

- (long long)compareToken:(id)arg1 error:(id*)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isUniversal;

@end
