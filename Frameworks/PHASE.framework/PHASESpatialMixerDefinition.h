
@interface PHASESpatialMixerDefinition : PHASEMixerDefinition {
    PHASEDistanceModelParameters * _distanceModelParameters;
    PHASEDirectivityModelParameters * _listenerDirectivityModelParameters;
    double  _listenerDopplerFactor;
    PHASEDirectivityModelParameters * _sourceDirectivityModelParameters;
    double  _sourceDopplerFactor;
    NSArray * _spatialModelerDefinitions;
    PHASESpatialPipeline * _spatialPipeline;
}

@property (nonatomic, retain) PHASEDistanceModelParameters *distanceModelParameters;
@property (nonatomic, retain) PHASEDirectivityModelParameters *listenerDirectivityModelParameters;
@property (nonatomic) double listenerDopplerFactor;
@property (nonatomic, retain) PHASEDirectivityModelParameters *sourceDirectivityModelParameters;
@property (nonatomic) double sourceDopplerFactor;
@property (nonatomic, readonly) NSArray *spatialModelerDefinitions;
@property (nonatomic, readonly) PHASESpatialPipeline *spatialPipeline;

+ (id)new;

- (void).cxx_destruct;
- (id)distanceModelParameters;
- (id)init;
- (id)initWithSpatialModelerSendDefinitions:(id)arg1;
- (id)initWithSpatialModelerSendDefinitions:(id)arg1 uid:(id)arg2;
- (id)initWithSpatialPipeline:(id)arg1;
- (id)initWithSpatialPipeline:(id)arg1 identifier:(id)arg2;
- (id)initWithSpatialPipeline:(id)arg1 uid:(id)arg2;
- (id)listenerDirectivityModelParameters;
- (double)listenerDopplerFactor;
- (void)setDistanceModelParameters:(id)arg1;
- (void)setListenerDirectivityModelParameters:(id)arg1;
- (void)setListenerDopplerFactor:(double)arg1;
- (void)setSourceDirectivityModelParameters:(id)arg1;
- (void)setSourceDopplerFactor:(double)arg1;
- (id)sourceDirectivityModelParameters;
- (double)sourceDopplerFactor;
- (id)spatialModelerDefinitions;
- (id)spatialPipeline;

@end
