
@interface HMMultiUserSettingsForMetrics : NSObject <HMFLogging, HMFObject, HMMessageEncoding> {
    NSNumber * _numSharedUsers;
    NSNumber * _numUsersCloudShareTrustNotConfigured;
    NSNumber * _numUsersSharedBackingStoreNotRunningDueToError;
    NSNumber * _numUsersSharedBackingStoreNotRunningDueToStopped;
    NSNumber * _numUsersSharedBackingStoreNotStarted;
    NSNumber * _numUsersSharedBackingStoreRunning;
    NSNumber * _numUsersSharedBackingStoreSharedZoneWaitingForShareInvitation;
    NSNumber * _numUsersWithIdentifyVoiceOff;
    NSNumber * _numUsersWithPlayBackInfluencesForYouOff;
    NSNumber * _numUsersWithSettings;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) NSNumber *numSharedUsers;
@property (copy) NSNumber *numUsersCloudShareTrustNotConfigured;
@property (copy) NSNumber *numUsersSharedBackingStoreNotRunningDueToError;
@property (copy) NSNumber *numUsersSharedBackingStoreNotRunningDueToStopped;
@property (copy) NSNumber *numUsersSharedBackingStoreNotStarted;
@property (copy) NSNumber *numUsersSharedBackingStoreRunning;
@property (copy) NSNumber *numUsersSharedBackingStoreSharedZoneWaitingForShareInvitation;
@property (copy) NSNumber *numUsersWithIdentifyVoiceOff;
@property (copy) NSNumber *numUsersWithPlayBackInfluencesForYouOff;
@property (copy) NSNumber *numUsersWithSettings;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)shortDescription;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithNumSharedUsers:(long long)arg1 numUsersWithSettings:(long long)arg2 numUsersWithIdentifyVoiceOff:(long long)arg3 numUsersWithPlayBackInfluencesForYouOff:(long long)arg4 numUsersCloudShareTrustNotConfigured:(long long)arg5 numUsersSharedBackingStoreNotStarted:(long long)arg6 numUsersSharedBackingStoreRunning:(long long)arg7 numUsersSharedBackingStoreNotRunningDueToError:(long long)arg8 numUsersSharedBackingStoreNotRunningDueToStopped:(long long)arg9 numUsersSharedBackingStoreSharedZoneWaitingForShareInvitation:(long long)arg10;
- (id)initWithPayload:(id)arg1;
- (id)numSharedUsers;
- (id)numUsersCloudShareTrustNotConfigured;
- (id)numUsersSharedBackingStoreNotRunningDueToError;
- (id)numUsersSharedBackingStoreNotRunningDueToStopped;
- (id)numUsersSharedBackingStoreNotStarted;
- (id)numUsersSharedBackingStoreRunning;
- (id)numUsersSharedBackingStoreSharedZoneWaitingForShareInvitation;
- (id)numUsersWithIdentifyVoiceOff;
- (id)numUsersWithPlayBackInfluencesForYouOff;
- (id)numUsersWithSettings;
- (id)payloadCopy;
- (id)privateDescription;
- (void)setNumSharedUsers:(id)arg1;
- (void)setNumUsersCloudShareTrustNotConfigured:(id)arg1;
- (void)setNumUsersSharedBackingStoreNotRunningDueToError:(id)arg1;
- (void)setNumUsersSharedBackingStoreNotRunningDueToStopped:(id)arg1;
- (void)setNumUsersSharedBackingStoreNotStarted:(id)arg1;
- (void)setNumUsersSharedBackingStoreRunning:(id)arg1;
- (void)setNumUsersSharedBackingStoreSharedZoneWaitingForShareInvitation:(id)arg1;
- (void)setNumUsersWithIdentifyVoiceOff:(id)arg1;
- (void)setNumUsersWithPlayBackInfluencesForYouOff:(id)arg1;
- (void)setNumUsersWithSettings:(id)arg1;
- (id)shortDescription;

@end
