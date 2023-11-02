
@interface VNSceneClassificationRequestConfiguration : VNImageBasedRequestConfiguration {
    VNClassificationCustomHierarchy * _customHierarchy;
    unsigned long long  _maximumHierarchicalObservations;
    unsigned long long  _maximumLeafObservations;
    VNSceneObservation * _sceneObservation;
}

@property (nonatomic, retain) VNClassificationCustomHierarchy *customHierarchy;
@property (nonatomic) unsigned long long maximumHierarchicalObservations;
@property (nonatomic) unsigned long long maximumLeafObservations;
@property (nonatomic, retain) VNSceneObservation *sceneObservation;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customHierarchy;
- (id)description;
- (id)initWithRequestClass:(Class)arg1;
- (unsigned long long)maximumHierarchicalObservations;
- (unsigned long long)maximumLeafObservations;
- (id)sceneObservation;
- (void)setCustomHierarchy:(id)arg1;
- (void)setMaximumHierarchicalObservations:(unsigned long long)arg1;
- (void)setMaximumLeafObservations:(unsigned long long)arg1;
- (void)setSceneObservation:(id)arg1;

@end
