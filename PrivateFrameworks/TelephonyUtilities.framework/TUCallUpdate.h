
@interface TUCallUpdate : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    bool  _answeringMachineAvailable;
    TUCallServicesInterface * _callServicesInterface;
    NSUUID * _callUUID;
    id /* block */  _clarityEnabledBlock;
    id /* block */  _contactsCountBlock;
    bool  _conversation;
    id /* block */  _deviceTypeBlock;
    bool  _eligibleForScreening;
    <TUFeatureFlags> * _featureFlags;
    TUHandle * _handle;
    bool  _hasVideo;
    long long  _junkConfidence;
    long long  _priority;
    TUCallProvider * _provider;
    unsigned long long  _remoteParticipantCount;
}

@property (nonatomic, retain) NSUUID *UUID;
@property (getter=isAnsweringMachineAvailable, nonatomic) bool answeringMachineAvailable;
@property (nonatomic, retain) TUCallServicesInterface *callServicesInterface;
@property (nonatomic, retain) NSUUID *callUUID;
@property (nonatomic, copy) id /* block */ clarityEnabledBlock;
@property (nonatomic, copy) id /* block */ contactsCountBlock;
@property (getter=isConversation, nonatomic) bool conversation;
@property (nonatomic, copy) id /* block */ deviceTypeBlock;
@property (getter=isEligibleForScreening, nonatomic) bool eligibleForScreening;
@property (nonatomic, retain) <TUFeatureFlags> *featureFlags;
@property (nonatomic, retain) TUHandle *handle;
@property (nonatomic) bool hasVideo;
@property (nonatomic) long long junkConfidence;
@property (nonatomic) long long priority;
@property (nonatomic, retain) TUCallProvider *provider;
@property (nonatomic) unsigned long long remoteParticipantCount;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)callServicesInterface;
- (id)callUUID;
- (id /* block */)clarityEnabledBlock;
- (id /* block */)contactsCountBlock;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id /* block */)deviceTypeBlock;
- (void)encodeWithCoder:(id)arg1;
- (id)featureFlags;
- (id)handle;
- (bool)hasVideo;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithProvider:(id)arg1;
- (bool)isAnsweringMachineAvailable;
- (bool)isConversation;
- (bool)isEligibleForScreening;
- (long long)junkConfidence;
- (long long)priority;
- (id)provider;
- (unsigned long long)remoteParticipantCount;
- (void)setAnsweringMachineAvailable:(bool)arg1;
- (void)setCallServicesInterface:(id)arg1;
- (void)setCallUUID:(id)arg1;
- (void)setClarityEnabledBlock:(id /* block */)arg1;
- (void)setContactsCountBlock:(id /* block */)arg1;
- (void)setConversation:(bool)arg1;
- (void)setDeviceTypeBlock:(id /* block */)arg1;
- (void)setEligibleForScreening:(bool)arg1;
- (void)setFeatureFlags:(id)arg1;
- (void)setHandle:(id)arg1;
- (void)setHasVideo:(bool)arg1;
- (void)setJunkConfidence:(long long)arg1;
- (void)setPriority:(long long)arg1;
- (void)setProvider:(id)arg1;
- (void)setRemoteParticipantCount:(unsigned long long)arg1;
- (void)setUUID:(id)arg1;

@end
