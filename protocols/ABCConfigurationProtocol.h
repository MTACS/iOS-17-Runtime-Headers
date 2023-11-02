
@protocol ABCConfigurationProtocol <NSObject>

@required

- (bool)autoBugCaptureAvailable;
- (bool)autoBugCaptureEnabled;
- (bool)autoBugCaptureRegularPayloads;
- (bool)autoBugCaptureSensitivePayloads;
- (bool)autoBugCaptureSignature;
- (bool)autoBugCaptureUploadPreapproved;
- (bool)autoFeedbackAssistantEnable;
- (NSNumber *)carrier_seed_flag;
- (NSNumber *)disable_internal_build;
- (unsigned int)logArchiveGID;
- (NSString *)logArchivePath;
- (unsigned int)logArchiveUID;
- (NSNumber *)npi_flag;
- (NSNumber *)seed_flag;
- (NSNumber *)vendor_flag;

@end
