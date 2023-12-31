
@interface BiometricKitEnrollProgressMergedComponent : NSObject {
    long long  _componentID;
    BiometricKitEnrollProgressCoordinates * _transformationCoordinates;
}

@property (nonatomic) long long componentID;
@property (nonatomic, retain) BiometricKitEnrollProgressCoordinates *transformationCoordinates;

- (void).cxx_destruct;
- (long long)componentID;
- (void)dealloc;
- (id)init;
- (void)setComponentID:(long long)arg1;
- (void)setTransformationCoordinates:(id)arg1;
- (id)transformationCoordinates;

@end
