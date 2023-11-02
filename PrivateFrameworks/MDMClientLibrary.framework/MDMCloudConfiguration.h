
@interface MDMCloudConfiguration : NSObject {
    NSObject<OS_dispatch_queue> * _memberQueue;
    NSDictionary * _memberQueueDetails;
    NSDictionary * _memberQueueSetAsideDetails;
}

@property (nonatomic, copy) NSDictionary *details;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *memberQueue;
@property (nonatomic, retain) NSDictionary *memberQueueDetails;
@property (nonatomic, retain) NSDictionary *memberQueueSetAsideDetails;
@property (nonatomic, copy) NSDictionary *setAsideDetails;

+ (id)canonicalConfigurationWithSupervision:(bool)arg1;
+ (id)sharedConfiguration;

- (void).cxx_destruct;
- (id)MAIDUsername;
- (bool)alreadySignedIntoFaceTime;
- (id)details;
- (id)diagnosticsUploadURL;
- (id)enrollmentAnchorCertificates;
- (id)enrollmentServerInfo;
- (id)enrollmentServerSupportedFeatures;
- (id)enrollmentServerURL;
- (bool)hasMAIDCredential;
- (id)init;
- (bool)isAwaitingConfiguration;
- (bool)isMDMUnremovable;
- (bool)isProvisionallyEnrolled;
- (bool)isSupervised;
- (bool)isTeslaEnrolled;
- (id)language;
- (id)languageScript;
- (id)mdmVersionProtocol;
- (id)memberQueue;
- (id)memberQueueDetails;
- (id)memberQueueSetAsideDetails;
- (id)provisionalEnrollmentExpirationDate;
- (void)refreshDetailsFromDisk;
- (id)region;
- (id)setAsideDetails;
- (void)setDetails:(id)arg1;
- (void)setMemberQueue:(id)arg1;
- (void)setMemberQueueDetails:(id)arg1;
- (void)setMemberQueueSetAsideDetails:(id)arg1;
- (void)setSetAsideDetails:(id)arg1;
- (id)skipSetupKeys;
- (id)tvProviderUserToken;
- (int)userMode;

@end
