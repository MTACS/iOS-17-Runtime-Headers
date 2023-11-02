
@interface CLMiLoLocationType : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _locationType;
}

@property (nonatomic, readonly) unsigned long long locationType;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocationTypeEnum:(unsigned long long)arg1;
- (unsigned long long)locationType;

@end
