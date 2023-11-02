
@interface SBSHomeScreenServiceNumberOrString : NSObject <NSCopying, NSSecureCoding> {
    <NSCopying><NSSecureCoding> * _numberOrString;
}

@property (nonatomic, readonly, copy) <NSCopying><NSSecureCoding> *numberOrString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNumberOrString:(id)arg1;
- (id)numberOrString;

@end
