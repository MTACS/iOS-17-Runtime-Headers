
@interface NLParameter : NSObject <NSCopying, NSSecureCoding> {
    double  _maximumValue;
    double  _minimumValue;
    NSString * _name;
    long long  _parameterType;
}

@property (nonatomic, readonly) double maximumValue;
@property (nonatomic, readonly) double minimumValue;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) long long parameterType;

+ (id)parameterWithName:(id)arg1 type:(long long)arg2 minimumValue:(double)arg3 maximumValue:(double)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_hyperTuneDictionary;
- (id)_initWithDictionaryRepresentation:(id)arg1 error:(id*)arg2;
- (id)_shortDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 type:(long long)arg2 minimumValue:(double)arg3 maximumValue:(double)arg4;
- (bool)isEqual:(id)arg1;
- (double)maximumValue;
- (double)minimumValue;
- (id)name;
- (long long)parameterType;

@end
