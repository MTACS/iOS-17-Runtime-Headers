
@protocol TPSCloudCallingDevice <NSObject>

@required

- (bool)isDefaultPairedDevice;
- (NSString *)modelIdentifier;
- (NSString *)name;
- (bool)supportsRestrictingSecondaryCalling;
- (NSString *)tps_modelName;
- (NSString *)uniqueID;

@end
