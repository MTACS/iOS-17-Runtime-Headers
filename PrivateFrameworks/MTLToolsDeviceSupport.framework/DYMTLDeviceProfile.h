
@interface DYMTLDeviceProfile : NSObject <DYCapturableObject, DYGraphicsAPIInfo, NSCopying, NSSecureCoding> {
    NSDictionary * _defaultSamplePositions;
    NSString * _name;
    NSNumber * _registryID;
    unsigned long long  _streamRef;
    NSArray * _supportedFeatureSets;
    NSArray * _supportedGPUFamilies;
}

@property (nonatomic, readonly) NSString *capturableObjectType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSDictionary *defaultSamplePositions;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *descriptionForBugReport;
@property (nonatomic, readonly) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSNumber *registryID;
@property (nonatomic, readonly) unsigned long long streamRef;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *supportedFeatureSets;
@property (nonatomic, readonly) NSArray *supportedGPUFamilies;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)capturableObjectType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultSamplePositions;
- (id)description;
- (id)descriptionForBugReport;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)registryID;
- (unsigned long long)streamRef;
- (id)supportedFeatureSets;
- (id)supportedGPUFamilies;
- (bool)supportsCapabilitiesOfGraphicsAPI:(id)arg1;

@end
