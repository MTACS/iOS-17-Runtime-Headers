
@interface HMSoftwareUpdateV2 : NSObject <HFStateDumpBuildable, HMFObject, NSCopying> {
    HMSoftwareUpdateDocumentationMetadata * _documentationMetadata;
    unsigned long long  _downloadSize;
    NSError * _error;
    double  _estimatedTimeRemaining;
    NSString * _humanReadableUpdateName;
    float  _percentageComplete;
    bool  _rampFeatureEnabledOnServer;
    long long  _status;
    HMFSoftwareVersion * _version;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) HMSoftwareUpdateDocumentationMetadata *documentationMetadata;
@property unsigned long long downloadSize;
@property (retain) NSError *error;
@property (readonly) double estimatedTimeRemaining;
@property (readonly) unsigned long long hash;
@property (copy) NSString *humanReadableUpdateName;
@property (readonly) float percentageComplete;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property bool rampFeatureEnabledOnServer;
@property (readonly, copy) NSString *shortDescription;
@property long long status;
@property (readonly) Class superclass;
@property (retain) HMFSoftwareVersion *version;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)shortDescription;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)documentationMetadata;
- (unsigned long long)downloadSize;
- (id)error;
- (double)estimatedTimeRemaining;
- (unsigned long long)hash;
- (id)humanReadableUpdateName;
- (id)initWithStatus:(long long)arg1 error:(id)arg2 documentationMetadata:(id)arg3 version:(id)arg4 downloadSize:(unsigned long long)arg5 humanReadableUpdateName:(id)arg6 rampFeatureEnabledOnServer:(bool)arg7;
- (bool)isEqual:(id)arg1;
- (float)percentageComplete;
- (id)privateDescription;
- (bool)rampFeatureEnabledOnServer;
- (void)setDocumentationMetadata:(id)arg1;
- (void)setDownloadSize:(unsigned long long)arg1;
- (void)setError:(id)arg1;
- (void)setHumanReadableUpdateName:(id)arg1;
- (void)setRampFeatureEnabledOnServer:(bool)arg1;
- (void)setStatus:(long long)arg1;
- (void)setVersion:(id)arg1;
- (id)shortDescription;
- (long long)status;
- (id)version;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_stateDumpBuilderWithContext:(id)arg1;

@end
