
@interface PLDeferredRebuildFace : PLManagedObject <PLFaceRebuildDescription>

@property (nonatomic, copy) NSString *assetCloudGUID;
@property (nonatomic, copy) NSString *assetUUID;
@property (nonatomic, readonly) double centerX;
@property (nonatomic) double centerX;
@property (nonatomic, readonly) double centerY;
@property (nonatomic) double centerY;
@property (nonatomic, readonly) int cloudNameSource;
@property (nonatomic) int cloudNameSource;
@property (getter=isClusterRejected, nonatomic, readonly) bool clusterRejected;
@property (nonatomic) bool clusterRejected;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int faceAlgorithmVersion;
@property (nonatomic, copy) NSString *faceUUID;
@property (readonly) unsigned long long hash;
@property (getter=isHidden, nonatomic, readonly) bool hidden;
@property (nonatomic) bool hidden;
@property (getter=isManual, nonatomic, readonly) bool manual;
@property (nonatomic) bool manual;
@property (nonatomic, readonly) int nameSource;
@property (nonatomic) int nameSource;
@property (nonatomic, copy) NSString *personUUID;
@property (nonatomic) bool rejected;
@property (getter=isRepresentative, nonatomic, readonly) bool representative;
@property (nonatomic) bool representative;
@property (nonatomic, readonly) double size;
@property (nonatomic) double size;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *uuid;

+ (id)deferredFacesWithAssetCloudGUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)entityName;

- (id)additionalDescription;
- (bool)isClusterRejected;
- (bool)isHidden;
- (bool)isManual;
- (bool)isRepresentative;
- (id)payloadForChangedKeys:(id)arg1;
- (id)payloadID;
- (id)payloadIDForTombstone:(id)arg1;
- (id)payloadIDsByPayloadClassIDToDeleteOnInsert;

@end
