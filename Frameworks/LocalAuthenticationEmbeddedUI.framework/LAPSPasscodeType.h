
@interface LAPSPasscodeType : NSObject <NSCopying> {
    long long  _identifier;
    unsigned long long  _length;
}

@property (nonatomic) long long identifier;
@property (nonatomic, readonly) unsigned long long length;

+ (id)alphanumericType;
+ (id)noneType;
+ (id)numericCustomDigitsType;
+ (id)numericFourDigitsType;
+ (id)numericSixDigitsType;
+ (id)typeAllowingString:(id)arg1;

- (bool)allowsLength:(long long)arg1;
- (bool)allowsString:(id)arg1;
- (long long)complexityRating;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)hasFixedLength;
- (unsigned long long)hash;
- (long long)identifier;
- (id)initWithIdentifier:(long long)arg1 length:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)length;
- (id)localizedName;
- (void)setIdentifier:(long long)arg1;

@end
