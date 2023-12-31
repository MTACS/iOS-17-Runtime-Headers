
@interface CRKFetchSupportedDevicePropertiesResultObject : CATTaskResultObject {
    NSArray * _liveProperties;
    NSArray * _staticProperties;
}

@property (nonatomic, retain) NSArray *liveProperties;
@property (nonatomic, retain) NSArray *staticProperties;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)liveProperties;
- (void)setLiveProperties:(id)arg1;
- (void)setStaticProperties:(id)arg1;
- (id)staticProperties;

@end
