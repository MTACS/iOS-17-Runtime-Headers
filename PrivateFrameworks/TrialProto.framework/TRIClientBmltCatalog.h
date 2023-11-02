
@interface TRIClientBmltCatalog : TRIPBMessage

@property (nonatomic, retain) NSMutableArray *bmltDeploymentIdArray;
@property (nonatomic, readonly) unsigned long long bmltDeploymentIdArray_Count;

+ (id)descriptor;

@end
