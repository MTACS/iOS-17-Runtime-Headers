
@interface HMDMediaPlaybackAction : HMDAction <HMDBackingStoreObjectProtocol, NSSecureCoding> {
    bool  _encodePlaybackArchiveForExecution;
    HMDHome * _home;
    NSSet * _mediaProfiles;
    MPPlaybackArchive * _playbackArchive;
    NSSet * _profileUUIDs;
    long long  _state;
    NSNumber * _volume;
}

@property (readonly, copy) HMDMediaPlaybackActionAsCharacteristicWriteRequests *convertedCharacteristicWriteRequests;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool encodePlaybackArchiveForExecution;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHome *home;
@property (nonatomic, copy) NSSet *mediaProfiles;
@property (nonatomic, retain) MPPlaybackArchive *playbackArchive;
@property (nonatomic, retain) NSSet *profileUUIDs;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSNumber *volume;

+ (id)actionWithDictionaryRepresentation:(id)arg1 home:(id)arg2;
+ (bool)isPlaybackActionValidWithProfiles:(id)arg1 state:(long long)arg2 volume:(id)arg3;
+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_processPlaybackActionModelUpdated:(id)arg1 message:(id)arg2;
- (id)associatedAccessories;
- (void)configureWithHome:(id)arg1;
- (id)convertedCharacteristicWriteRequests;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)encodePlaybackArchiveForExecution;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithSource:(unsigned long long)arg1 clientName:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)home;
- (id)initWithCoder:(id)arg1;
- (id)initWithModelObject:(id)arg1 parent:(id)arg2 error:(id*)arg3;
- (id)initWithUUID:(id)arg1 mediaProfiles:(id)arg2 playbackState:(long long)arg3 volume:(id)arg4 playbackArchive:(id)arg5 actionSet:(id)arg6;
- (bool)isAssociatedWithAccessory:(id)arg1;
- (bool)isCompatibleWithAction:(id)arg1;
- (bool)isUnsecuringAction;
- (id)mediaProfiles;
- (Class)modelClass;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (id)modelObjectWithUpdatedMediaProfiles:(id)arg1;
- (id)playbackArchive;
- (id)profileUUIDs;
- (void)setEncodePlaybackArchiveForExecution:(bool)arg1;
- (void)setHome:(id)arg1;
- (void)setMediaProfiles:(id)arg1;
- (void)setPlaybackArchive:(id)arg1;
- (void)setProfileUUIDs:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setVolume:(id)arg1;
- (long long)state;
- (id)stateDump;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (unsigned long long)type;
- (id)validate;
- (id)volume;

@end
