
@interface HMDLightProfileNaturalLightingActionModel : HMDActionModel

@property (retain) NSUUID *accessoryUUID;
@property (retain) NSUUID *lightProfileUUID;
@property (getter=isNaturalLightingEnabled) bool naturalLightingEnabled;
@property (retain) NSNumber *naturalLightingEnabledField;
@property (retain) NSSet *serviceUUIDs;

+ (id)properties;

- (id)dependentUUIDs;
- (bool)isNaturalLightingEnabled;
- (void)setNaturalLightingEnabled:(bool)arg1;

@end
