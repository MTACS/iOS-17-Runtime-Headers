
@interface ARGeoTrackingData : NSObject <ARDaemonSecureCoding, ARResultData> {
    ARLocationData * _enuOrigin;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _vioFromENU;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) ARLocationData *enuOrigin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } vioFromENU;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)anchorsForCameraWithTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 referenceOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)enuOrigin;
- (id)initWithCoder:(id)arg1;
- (id)initWithENUOrigin:(id)arg1 vioFromENU:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })vioFromENU;

@end
