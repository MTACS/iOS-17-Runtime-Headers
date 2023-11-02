
@interface ARFaceTrackingTechnique : ARImageBasedTechnique {
    bool  _isFaceTracked;
    long long  _maximumNumberOfTrackedFaces;
    NSUUID * _singleUserAnchorIdentifier;
}

@property bool isFaceTracked;
@property (nonatomic, readonly) long long maximumNumberOfTrackedFaces;

+ (bool)isSupported;
+ (bool)producesResultDataForAnchorOfClass:(Class)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)initWithMaximumNumberOfTrackedFaces:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFaceTracked;
- (long long)maximumNumberOfTrackedFaces;
- (id)processData:(id)arg1;
- (unsigned long long)requiredSensorDataTypes;
- (id)resultDataClasses;
- (void)setIsFaceTracked:(bool)arg1;

@end
