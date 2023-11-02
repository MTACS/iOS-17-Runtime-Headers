
@interface TRIClientRolloutArtifact : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _deploymentDate;
    unsigned long long  _downloadSize;
    NSArray * _populations;
    TRIClientRollout * _rollout;
}

@property (nonatomic, readonly) TRIRolloutDeployment *deployment;
@property (nonatomic, readonly) NSDate *deploymentDate;
@property (nonatomic, readonly) unsigned long long downloadSize;
@property (nonatomic, readonly) NSArray *namespaceNames;
@property (nonatomic, readonly) NSArray *populations;
@property (nonatomic, readonly) TRIClientRollout *rollout;

+ (bool)_isStructurallyValidWithRollout:(id)arg1 deployment:(id)arg2 namespaceNames:(id)arg3 populations:(id)arg4 deploymentDate:(id)arg5;
+ (bool)_signature:(id)arg1 onData:(id)arg2 isValidUsingPublicCertificate:(id)arg3;
+ (id)allReferencedCKRecordKeys;
+ (id)artifactFromCKRecord:(id)arg1 namespaceDescriptorProvider:(id)arg2 error:(id*)arg3;
+ (id)artifactWithRollout:(id)arg1 populations:(id)arg2 deploymentDate:(id)arg3 downloadSize:(unsigned long long)arg4;
+ (id)artifactWithTransientData:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithReplacementDeploymentDate:(id)arg1;
- (id)copyWithReplacementDownloadSize:(unsigned long long)arg1;
- (id)copyWithReplacementPopulations:(id)arg1;
- (id)copyWithReplacementRollout:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)deployment;
- (id)deploymentDate;
- (id)description;
- (unsigned long long)downloadSize;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRollout:(id)arg1 populations:(id)arg2 deploymentDate:(id)arg3 downloadSize:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToArtifact:(id)arg1;
- (id)namespaceNames;
- (id)populations;
- (id)rollout;

@end
