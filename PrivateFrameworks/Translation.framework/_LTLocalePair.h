
@interface _LTLocalePair : NSObject <NSCopying, NSSecureCoding> {
    NSLocale * _sourceLocale;
    NSLocale * _targetLocale;
}

@property (nonatomic, readonly) NSLocale *sourceLocale;
@property (nonatomic, readonly) NSLocale *targetLocale;

+ (id)pairWithIdentifiers:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)canonicalIdentifier;
- (id)canonicalLocalePair;
- (id)combinedLocaleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceLocale:(id)arg1 targetLocale:(id)arg2;
- (bool)isBidirectionalEqual:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPassthrough;
- (bool)isVariantPair;
- (id)oppositeToLocale:(id)arg1;
- (id)reversedPair;
- (id)sourceLocale;
- (id)targetLocale;

@end
