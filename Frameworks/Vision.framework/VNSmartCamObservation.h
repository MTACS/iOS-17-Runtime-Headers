
@interface VNSmartCamObservation : VNObservation {
    NSString * _smartCamprintVersion;
    NSArray * _smartCamprints;
}

@property (nonatomic, readonly, copy) NSString *smartCamprintVersion;
@property (nonatomic, copy) NSArray *smartCamprints;

+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)arg1;
+ (id)observationWithSmartCamprints:(id)arg1;
+ (id)smartCamprintCurrentVersion;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginatingRequestSpecifier:(id)arg1 smartCamprints:(id)arg2;
- (id)initWithRequestRevision:(unsigned long long)arg1 smartCamprints:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setSmartCamprints:(id)arg1;
- (id)smartCamprintVersion;
- (id)smartCamprints;
- (id)vn_cloneObject;

@end
