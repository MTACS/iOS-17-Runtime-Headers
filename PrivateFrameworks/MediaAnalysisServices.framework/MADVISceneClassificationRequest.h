
@interface MADVISceneClassificationRequest : MADRequest {
    unsigned long long  _classificationRevision;
    unsigned long long  _maximumHierarchicalObservations;
    unsigned long long  _maximumLeafObservations;
    unsigned long long  _nsfwRevision;
    unsigned long long  _recognizeObjectsRevision;
    unsigned long long  _saliencyRevision;
    unsigned long long  _significantEventRevision;
}

@property (nonatomic, readonly) unsigned long long classificationRevision;
@property (nonatomic, readonly) unsigned long long maximumHierarchicalObservations;
@property (nonatomic, readonly) unsigned long long maximumLeafObservations;
@property (nonatomic, readonly) unsigned long long nsfwRevision;
@property (nonatomic, readonly) unsigned long long recognizeObjectsRevision;
@property (nonatomic, readonly) unsigned long long saliencyRevision;
@property (nonatomic, readonly) unsigned long long significantEventRevision;

+ (bool)supportsSecureCoding;

- (unsigned long long)classificationRevision;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)maximumHierarchicalObservations;
- (unsigned long long)maximumLeafObservations;
- (unsigned long long)nsfwRevision;
- (unsigned long long)recognizeObjectsRevision;
- (unsigned long long)saliencyRevision;
- (unsigned long long)significantEventRevision;

@end
