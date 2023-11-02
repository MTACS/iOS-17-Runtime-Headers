
@interface APOdmlSettings : NSObject {
    unsigned long long  _assetManagerType;
    unsigned long long  _placementType;
}

@property (nonatomic, readonly) unsigned long long assetManagerType;
@property (nonatomic, readonly) int deploymentID;
@property (nonatomic, readonly) NSString *experimentID;
@property (nonatomic, readonly) NSString *odmlNamespace;
@property (nonatomic, readonly) int odmlVersion;
@property (nonatomic, readonly) unsigned long long placementType;
@property (nonatomic, readonly) NSString *treatmentID;

+ (void)prewarmModelWithPlacementType:(unsigned long long)arg1 assetManagerType:(unsigned long long)arg2;

- (unsigned long long)assetManagerType;
- (int)deploymentID;
- (id)experimentID;
- (id)initWithPlacementType:(unsigned long long)arg1 assetManagerType:(unsigned long long)arg2;
- (id)odmlNamespace;
- (int)odmlVersion;
- (unsigned long long)placementType;
- (id)serverRequestDictionary;
- (id)treatmentID;

@end
