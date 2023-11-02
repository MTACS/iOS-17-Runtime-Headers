
@interface REFeatureValue : NSObject <NSCopying>

@property (nonatomic, readonly) bool boolValue;
@property (nonatomic, readonly) double doubleValue;
@property (nonatomic, readonly) unsigned long long int64Value;
@property (nonatomic, readonly) NSSet *setValue;
@property (nonatomic, readonly, copy) NSString *stringValue;
@property (nonatomic, readonly) unsigned long long type;

+ (id)featureValueWithBool:(bool)arg1;
+ (id)featureValueWithDictionary:(id)arg1;
+ (id)featureValueWithDouble:(double)arg1;
+ (id)featureValueWithInt64:(long long)arg1;
+ (id)featureValueWithSet:(id)arg1;
+ (id)featureValueWithString:(id)arg1;
+ (id)nullValueForFeature:(id)arg1;

- (unsigned long long)_integralFeatureValue;
- (bool)boolValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryEncoding;
- (double)doubleValue;
- (unsigned long long)hash;
- (unsigned long long)int64Value;
- (bool)isEqual:(id)arg1;
- (id)setValue;
- (id)stringValue;
- (unsigned long long)type;

@end
