
@interface DRSTeamTasking : NSObject {
    DRConfig * _config;
    DRSSamplingParameters * _defaultSamplingParameters;
    NSDictionary * _perHWModelSamplingParameters;
    NSDictionary * _perTimezoneSamplingParameters;
    NSString * _teamID;
}

@property (nonatomic, readonly) DRConfig *config;
@property (nonatomic, readonly) DRSSamplingParameters *defaultSamplingParameters;
@property (nonatomic, readonly) NSDictionary *perHWModelSamplingParameters;
@property (nonatomic, readonly) NSDictionary *perTimezoneSamplingParameters;
@property (nonatomic, readonly) NSString *teamID;

- (void).cxx_destruct;
- (id)_jsonDictRepresentation:(bool)arg1;
- (id)config;
- (id)debugDescription;
- (id)defaultSamplingParameters;
- (id)initWithJSONDict:(id)arg1 receivedDate:(id)arg2;
- (id)initWithTeamID:(id)arg1 config:(id)arg2 defaultSamplingParameters:(id)arg3 perTimezoneSamplingParameters:(id)arg4 perHardwareModelSamplingParamters:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTeamTasking:(id)arg1;
- (id)jsonDictRepresentation;
- (id)jsonDictRepresentationAbbreviated;
- (id)perHWModelSamplingParameters;
- (id)perTimezoneSamplingParameters;
- (id)samplingParametersForHWModel:(id)arg1 timezoneAbbreviation:(id)arg2;
- (id)samplingParametersForHardwareModel:(id)arg1;
- (id)samplingParametersForTimezoneAbbreviation:(id)arg1;
- (id)teamID;

@end
