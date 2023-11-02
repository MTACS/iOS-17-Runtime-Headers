
@interface SGMIFeature : NSObject {
    long long  _featureName;
    long long  _featureType;
    NSArray * _numberArrayValue;
    NSNumber * _numberValue;
    NSArray * _stringArrayValue;
    NSString * _stringValue;
}

@property (nonatomic, readonly) bool boolValue;
@property (nonatomic, readonly) double doubleValue;
@property (nonatomic, readonly) long long featureName;
@property (nonatomic, readonly) long long featureType;
@property (nonatomic, readonly) float floatValue;
@property (nonatomic, readonly) int intValue;
@property (nonatomic, readonly) long long integerValue;
@property (nonatomic, readonly) NSArray *numberArrayValue;
@property (nonatomic, readonly) NSNumber *numberValue;
@property (nonatomic, readonly) NSArray *stringArrayValue;
@property (nonatomic, readonly) NSString *stringValue;

+ (id)allFeatureNames;
+ (id)allFeaturePrettyNames;
+ (long long)featureTypeForName:(long long)arg1;
+ (id)prettyName:(long long)arg1;
+ (id)prettyNamesReverseMapping;
+ (id)submodeledFeatures;

- (void).cxx_destruct;
- (bool)boolValue;
- (id)description;
- (double)doubleValue;
- (long long)featureName;
- (long long)featureType;
- (float)floatValue;
- (id)initWithFeatureName:(long long)arg1;
- (id)initWithFeatureName:(long long)arg1 numberArrayValue:(id)arg2;
- (id)initWithFeatureName:(long long)arg1 numberValue:(id)arg2;
- (id)initWithFeatureName:(long long)arg1 stringArrayValue:(id)arg2;
- (id)initWithFeatureName:(long long)arg1 stringValue:(id)arg2;
- (int)intValue;
- (long long)integerValue;
- (id)numberArrayValue;
- (id)numberValue;
- (id)stringArrayRepresentation;
- (id)stringArrayValue;
- (id)stringValue;

@end
