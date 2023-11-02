
@interface CLMiLoServiceMetaInfo : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _numberOfBLESources;
    NSNumber * _numberOfClustersLearnedInModel;
    NSNumber * _numberOfFingerprintsAfterPruning;
    NSNumber * _numberOfFingerprintsBeforePruning;
    NSNumber * _numberOfInputValidFingerprints;
    NSNumber * _numberOfInputValidFingerprintsLabeled;
    NSNumber * _numberOfInputValidFingerprintsUnLabeled;
    NSNumber * _numberOfRecordingTriggersAtCurrentLocationOfInterest;
    NSNumber * _numberOfUWBSources;
    NSNumber * _numberOfWiFiAccessPoints;
}

@property (nonatomic, readonly) NSNumber *numberOfBLESources;
@property (nonatomic, readonly) NSNumber *numberOfClustersLearnedInModel;
@property (nonatomic, readonly) NSNumber *numberOfFingerprintsAfterPruning;
@property (nonatomic, readonly) NSNumber *numberOfFingerprintsBeforePruning;
@property (nonatomic, readonly) NSNumber *numberOfInputValidFingerprints;
@property (nonatomic, readonly) NSNumber *numberOfInputValidFingerprintsLabeled;
@property (nonatomic, readonly) NSNumber *numberOfInputValidFingerprintsUnLabeled;
@property (nonatomic, readonly) NSNumber *numberOfRecordingTriggersAtCurrentLocationOfInterest;
@property (nonatomic, readonly) NSNumber *numberOfUWBSources;
@property (nonatomic, readonly) NSNumber *numberOfWiFiAccessPoints;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNumClustersLearnedInModel:(id)arg1 numRecordingTriggersAtCurrentLOI:(id)arg2 numInputValidFingerprints:(id)arg3 numInputValidFingerprintsLabeled:(id)arg4 numInputValidFingerprintsUnlabeled:(id)arg5 numFingerprintsBeforePruning:(id)arg6 numFingerprintsAfterPruning:(id)arg7 numWiFiAccessPoints:(id)arg8 numBLESources:(id)arg9 numUWBSources:(id)arg10;
- (id)numberOfBLESources;
- (id)numberOfClustersLearnedInModel;
- (id)numberOfFingerprintsAfterPruning;
- (id)numberOfFingerprintsBeforePruning;
- (id)numberOfInputValidFingerprints;
- (id)numberOfInputValidFingerprintsLabeled;
- (id)numberOfInputValidFingerprintsUnLabeled;
- (id)numberOfRecordingTriggersAtCurrentLocationOfInterest;
- (id)numberOfUWBSources;
- (id)numberOfWiFiAccessPoints;

@end
