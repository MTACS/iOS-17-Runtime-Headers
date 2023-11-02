
@interface PLPTPAssetHandle : NSObject {
    NSManagedObjectID * _assetID;
    bool  _requiresConversion;
    NSSet * _siblingAssetHandleTypes;
    NSManagedObjectID * _sidecarID;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSManagedObjectID *assetID;
@property (nonatomic, readonly) NSString *auxiliaryResourceFilenameMarker;
@property (nonatomic, readonly) bool requiresConversion;
@property (nonatomic, readonly, copy) NSSet *siblingAssetHandleTypes;
@property (nonatomic, readonly, copy) NSManagedObjectID *sidecarID;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)assetHandleBySettingRequiresConversion;
- (id)assetHandleBySettingSiblingAssetHandleTypes:(id)arg1;
- (id)assetID;
- (id)auxiliaryResourceFilenameMarker;
- (id)description;
- (bool)hasSiblingAssetWithAssetHandleType:(long long)arg1;
- (id)initWithType:(long long)arg1 assetID:(id)arg2 sidecarID:(id)arg3 requiresConversion:(bool)arg4;
- (id)initWithType:(long long)arg1 assetID:(id)arg2 sidecarID:(id)arg3 requiresConversion:(bool)arg4 siblingAssetHandleTypes:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)requiresConversion;
- (id)siblingAssetHandleTypes;
- (id)sidecarID;
- (long long)type;

@end
