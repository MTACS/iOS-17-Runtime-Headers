
@interface APOdmlServerResponse : NSObject {
    NSDictionary * _featureValues;
    bool  _odmlEnabled;
}

@property (nonatomic, retain) NSDictionary *featureValues;
@property (nonatomic) bool odmlEnabled;

- (void).cxx_destruct;
- (void)addAgeRange:(id)arg1 birthYear:(id)arg2;
- (void)addCachedFeatures:(id)arg1 deviceModel:(id)arg2;
- (void)addDeviceClass:(id)arg1 newFeatureValues:(id)arg2;
- (void)addGender:(id)arg1 gender:(id)arg2;
- (void)addStorefront:(id)arg1 storefront:(id)arg2;
- (void)addUserRating:(id)arg1;
- (int)ageFromBirthYear:(id)arg1;
- (id)falseFeatureValue;
- (id)featureValues;
- (id)initWithSLPResponse:(id)arg1;
- (id)initWithSRPResponse:(id)arg1;
- (bool)odmlEnabled;
- (id)oneHotEncode:(id)arg1 trueKey:(id)arg2;
- (void)setFeatureValues:(id)arg1;
- (void)setOdmlEnabled:(bool)arg1;
- (id)trueFeatureValue;

@end
