
@interface APOdmlSLPResponseParser : NSObject

+ (id)convertArrayToFeatureValue:(id)arg1;
+ (id)convertStringToFeatureValue:(id)arg1;
+ (id)convertToFeatureValue:(id)arg1;
+ (bool)isValidResponse:(id)arg1;
+ (id)parseFeature:(id)arg1 withTopLevelKey:(id)arg2 forKey:(id)arg3;
+ (id)parseFeatureDictionaryForFeatureValues:(id)arg1;
+ (id)parseResponseForFeatureValues:(id)arg1;

@end
