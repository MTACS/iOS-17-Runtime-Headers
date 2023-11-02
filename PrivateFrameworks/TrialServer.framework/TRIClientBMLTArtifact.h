
@interface TRIClientBMLTArtifact : NSObject <NSCopying, NSSecureCoding> {
    TRIClientBackgroundMLTask * _backgroundTask;
    NSDate * _deploymentDate;
    NSNumber * _deploymentType;
    unsigned long long  _downloadSize;
    NSArray * _populations;
}

@property (nonatomic, readonly) TRIClientBackgroundMLTask *backgroundTask;
@property (nonatomic, readonly) TRIBMLTDeployment *deployment;
@property (nonatomic, readonly) NSDate *deploymentDate;
@property (nonatomic, readonly) NSNumber *deploymentType;
@property (nonatomic, readonly) unsigned long long downloadSize;
@property (nonatomic, readonly) NSArray *populations;

+ (bool)_isStructurallyValidBMLT:(id)arg1 deployment:(id)arg2 namespaceName:(id)arg3 populations:(id)arg4 deploymentType:(id)arg5 deploymentDate:(id)arg6;
+ (id)allReferencedCKRecordKeys;
+ (id)artifactFromCKRecord:(id)arg1 namespaceDescriptorProvider:(id)arg2 error:(id*)arg3;
+ (id)artifactWithBackgroundTask:(id)arg1 populations:(id)arg2 deploymentType:(id)arg3 deploymentDate:(id)arg4 downloadSize:(unsigned long long)arg5;
+ (id)artifactWithTransientData:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backgroundTask;
- (id)copyWithReplacementBackgroundTask:(id)arg1;
- (id)copyWithReplacementDeploymentDate:(id)arg1;
- (id)copyWithReplacementDeploymentType:(id)arg1;
- (id)copyWithReplacementDownloadSize:(unsigned long long)arg1;
- (id)copyWithReplacementPopulations:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)deployment;
- (id)deploymentDate;
- (id)deploymentType;
- (id)description;
- (unsigned long long)downloadSize;
- (id)earliestStartDateForActivationIfInFuture;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBackgroundTask:(id)arg1 populations:(id)arg2 deploymentType:(id)arg3 deploymentDate:(id)arg4 downloadSize:(unsigned long long)arg5;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToArtifact:(id)arg1;
- (id)populations;

@end
