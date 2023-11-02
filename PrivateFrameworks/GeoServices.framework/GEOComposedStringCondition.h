
@interface GEOComposedStringCondition : NSObject <NSCopying, NSSecureCoding> {
    int  _conditionType;
    NSDate * _expirationDate;
    NSArray * _subConditions;
}

@property (nonatomic, readonly) int conditionType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)conditionType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGeoCondition:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isValid;

@end
