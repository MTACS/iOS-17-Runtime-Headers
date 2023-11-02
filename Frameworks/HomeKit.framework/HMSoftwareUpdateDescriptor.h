
@interface HMSoftwareUpdateDescriptor : HMFObject {
    HMSoftwareUpdateDocumentationMetadata * _documentationMetadata;
    NSNumber * _downloadSize;
    NSError * _error;
    NSString * _humanReadableUpdateName;
    NSNumber * _rampFeatureEnabledOnServer;
    long long  _status;
    HMFSoftwareVersion * _version;
}

@property (readonly) HMSoftwareUpdateDocumentationMetadata *documentationMetadata;
@property (readonly) NSNumber *downloadSize;
@property (readonly) NSError *error;
@property (readonly, copy) NSString *humanReadableUpdateName;
@property (retain) NSNumber *rampFeatureEnabledOnServer;
@property long long status;
@property (readonly) HMFSoftwareVersion *version;

+ (id)descriptorFromEvent:(id)arg1;
+ (id)shortDescription;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)description;
- (id)documentationMetadata;
- (id)downloadSize;
- (id)error;
- (id)humanReadableUpdateName;
- (id)initWithProtoPayload:(id)arg1;
- (id)initWithStatus:(long long)arg1 downloadSize:(id)arg2 humanReadableUpdateName:(id)arg3 rampEnabled:(id)arg4 errorCode:(id)arg5 serverAssetURL:(id)arg6 serverAssetAlgorithm:(id)arg7 serverAssetMeasurement:(id)arg8 majorVersion:(id)arg9 minorVersion:(id)arg10 updateVersion:(id)arg11 buildVersion:(id)arg12;
- (id)initWithStatus:(long long)arg1 error:(id)arg2 documentationMetadata:(id)arg3 version:(id)arg4 downloadSize:(id)arg5 humanReadableUpdateName:(id)arg6 rampFeatureEnabledOnServer:(id)arg7;
- (id)privateDescription;
- (id)protoPayload;
- (id)rampFeatureEnabledOnServer;
- (void)setRampFeatureEnabledOnServer:(id)arg1;
- (void)setStatus:(long long)arg1;
- (id)shortDescription;
- (long long)status;
- (id)version;

@end
