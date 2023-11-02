
@interface HKClinicalCodingCollection : NSObject <NSCopying, NSSecureCoding> {
    NSSet * _codings;
    NSString * _text;
}

@property (nonatomic, readonly, copy) NSSet *codings;
@property (nonatomic, readonly, copy) NSString *text;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)codings;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1 codings:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)text;

@end
