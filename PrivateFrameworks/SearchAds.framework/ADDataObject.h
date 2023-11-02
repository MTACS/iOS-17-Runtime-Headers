
@interface ADDataObject : NSObject {
    NSDictionary * _adData;
    long long  _adResponseInUseType_Int;
    NSDictionary * _allOdmlResponses;
    NSDictionary * _dupAdResponse;
    NSError * _error;
    NSDictionary * _noOrganicAdResponse;
    NSDictionary * _normalAdResponse;
    APOdmlServerResponse * _odmlResponse;
}

@property (nonatomic, copy) NSDictionary *adData;
@property (readonly) NSDictionary *adResponseInUse;
@property long long adResponseInUseType;
@property long long adResponseInUseType_Int;
@property (readonly) NSDictionary *allOdmlResponses;
@property (nonatomic, retain) NSDictionary *dupAdResponse;
@property (nonatomic, copy) NSError *error;
@property (nonatomic, retain) NSDictionary *noOrganicAdResponse;
@property (nonatomic, retain) NSDictionary *normalAdResponse;
@property (readonly) APOdmlServerResponse *odmlResponse;

+ (id)adResponseTypeToString:(long long)arg1;

- (void).cxx_destruct;
- (id)AD_jsonDictionary;
- (id)_jsonToDict:(id)arg1 error:(id*)arg2;
- (id)adData;
- (id)adResponseInUse;
- (long long)adResponseInUseType;
- (long long)adResponseInUseType_Int;
- (id)addCachedFeaturesToOdmlResponse:(id)arg1;
- (id)allOdmlResponses;
- (id)dupAdResponse;
- (id)error;
- (id)initWith:(id)arg1 andError:(id)arg2;
- (id)noOrganicAdResponse;
- (id)normalAdResponse;
- (id)odmlResponse;
- (id)parseDataForAdResponse:(id)arg1;
- (id)parseDataForODMLResponse:(id)arg1;
- (id)parseOdmlResponseFromString:(id)arg1;
- (id)parseOdmlStringFromResponseData:(id)arg1;
- (void)parseResponseData;
- (id)parseResponseForAdditionalFeatures:(id)arg1 odmlResponse:(id)arg2;
- (void)setAdData:(id)arg1;
- (void)setAdResponseInUseType:(long long)arg1;
- (void)setAdResponseInUseType_Int:(long long)arg1;
- (void)setDupAdResponse:(id)arg1;
- (void)setError:(id)arg1;
- (void)setNoOrganicAdResponse:(id)arg1;
- (void)setNormalAdResponse:(id)arg1;
- (void)updateAdDataWithLocationState:(bool)arg1 personalizedAdsState:(bool)arg2;

@end
