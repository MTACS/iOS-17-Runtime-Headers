
@interface VCPCoreMLFeatureProviderGesture : NSObject <MLFeatureProvider> {
    VCPHandObservation * _observation;
    int  _rotationInDegrees;
}

@property (nonatomic, readonly) NSSet *featureNames;
@property int rotationInDegrees;

- (void).cxx_destruct;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWith:(id)arg1 rotationInDegrees:(int)arg2;
- (int)rotationInDegrees;
- (void)setRotationInDegrees:(int)arg1;

@end
