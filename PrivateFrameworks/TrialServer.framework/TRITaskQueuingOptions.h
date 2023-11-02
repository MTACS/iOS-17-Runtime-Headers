
@interface TRITaskQueuingOptions : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _duplicateTaskResolution;
}

@property (nonatomic, readonly) unsigned long long duplicateTaskResolution;

+ (id)defaultOptionsWithIgnoreDuplicates;
+ (id)optionsWithDuplicateTaskResolution:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (id)copyWithReplacementDuplicateTaskResolution:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)defaultEncodeWithCoder:(id)arg1;
- (id)description;
- (unsigned long long)duplicateTaskResolution;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDuplicateTaskResolution:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToOptions:(id)arg1;

@end
