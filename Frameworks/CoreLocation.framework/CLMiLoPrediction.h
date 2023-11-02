
@interface CLMiLoPrediction : NSObject <NSCopying, NSSecureCoding> {
    CLMiLoPredictionCloseDeviceList * _closeDeviceList;
    unsigned long long  _confidence;
    NSError * _error;
    CLMiLoFingerprintMetaInfo * _localizationFingerprintMetaInfo;
    CLMiLoServicePredictionLocationSimilarityList * _locationSimilarityList;
    NSArray * _placeConfidenceReasons;
    NSArray * _placePredictions;
    NSDate * _predictionTime;
    NSUUID * _requestIdentifier;
}

@property (nonatomic, readonly) CLMiLoPredictionCloseDeviceList *closeDeviceList;
@property (nonatomic, readonly) unsigned long long confidence;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) CLMiLoFingerprintMetaInfo *localizationFingerprintMetaInfo;
@property (nonatomic, readonly) CLMiLoServicePredictionLocationSimilarityList *locationSimilarityList;
@property (nonatomic, readonly) NSArray *placeConfidenceReasons;
@property (nonatomic, readonly) NSArray *placePredictions;
@property (nonatomic, readonly) NSDate *predictionTime;
@property (nonatomic, readonly) NSUUID *requestIdentifier;

+ (bool)supportsSecureCoding;

- (id)closeDeviceList;
- (unsigned long long)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlacePredictions:(id)arg1 locationSimilarityList:(id)arg2 closeDeviceList:(id)arg3 error:(id)arg4 requestIdentifier:(id)arg5 predictionTime:(id)arg6 confidence:(unsigned long long)arg7 placeConfidenceReasons:(id)arg8 localizationFingerprintMetaInfo:(id)arg9;
- (id)localizationFingerprintMetaInfo;
- (id)locationSimilarityList;
- (id)placeConfidenceReasons;
- (id)placePredictions;
- (id)predictionTime;
- (id)requestIdentifier;

@end
