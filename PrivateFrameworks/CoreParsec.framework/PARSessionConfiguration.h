
@interface PARSessionConfiguration : NSObject <NSSecureCoding> {
    bool  _dontPreloadImages;
    bool  _enablePersonalizedRanking;
    int  _experimentDeploymentId;
    NSString * _experimentId;
    NSString * _experimentNamespaceId;
    NSString * _experimentTreatmentId;
    int  _experimentVersion;
    <PARResultFactory> * _factory;
    NSString * _identifier;
    NSDictionary * _overrideFeatureFlags;
    bool  _parsecEnabled;
    NSString * _userAgent;
}

@property bool dontPreloadImages;
@property bool enablePersonalizedRanking;
@property (nonatomic) int experimentDeploymentId;
@property (nonatomic, copy) NSString *experimentId;
@property (nonatomic, copy) NSString *experimentNamespaceId;
@property (nonatomic, copy) NSString *experimentTreatmentId;
@property (nonatomic) int experimentVersion;
@property (readonly) <PARResultFactory> *factory;
@property (readonly, copy) NSString *identifier;
@property (nonatomic, copy) NSDictionary *overrideFeatureFlags;
@property bool parsecEnabled;
@property (readonly, copy) NSString *userAgent;

+ (id)defaultSessionConfiguration;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (bool)dontPreloadImages;
- (bool)enablePersonalizedRanking;
- (void)encodeWithCoder:(id)arg1;
- (int)experimentDeploymentId;
- (id)experimentId;
- (id)experimentNamespaceId;
- (id)experimentTreatmentId;
- (int)experimentVersion;
- (id)factory;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithId:(id)arg1 userAgent:(id)arg2;
- (id)initWithId:(id)arg1 userAgent:(id)arg2 factory:(id)arg3;
- (id)overrideFeatureFlags;
- (bool)parsecEnabled;
- (void)setDontPreloadImages:(bool)arg1;
- (void)setEnablePersonalizedRanking:(bool)arg1;
- (void)setExperimentDeploymentId:(int)arg1;
- (void)setExperimentId:(id)arg1;
- (void)setExperimentNamespaceId:(id)arg1;
- (void)setExperimentTreatmentId:(id)arg1;
- (void)setExperimentVersion:(int)arg1;
- (void)setOverrideFeatureFlags:(id)arg1;
- (void)setParsecEnabled:(bool)arg1;
- (id)userAgent;

@end
