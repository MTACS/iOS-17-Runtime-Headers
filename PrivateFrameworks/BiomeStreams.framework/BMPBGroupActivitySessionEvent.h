
@interface BMPBGroupActivitySessionEvent : PBCodable <NSCopying> {
    NSString * _activityId;
    NSString * _activitySessionId;
    NSString * _experienceType;
    struct { 
        unsigned int isActive : 1; 
    }  _has;
    bool  _isActive;
    NSMutableArray * _memberHandles;
    NSString * _messagesChatGuid;
    NSMutableArray * _participantHandles;
    NSString * _sourceBundleId;
}

@property (nonatomic, retain) NSString *activityId;
@property (nonatomic, retain) NSString *activitySessionId;
@property (nonatomic, retain) NSString *experienceType;
@property (nonatomic, readonly) bool hasActivityId;
@property (nonatomic, readonly) bool hasActivitySessionId;
@property (nonatomic, readonly) bool hasExperienceType;
@property (nonatomic) bool hasIsActive;
@property (nonatomic, readonly) bool hasMessagesChatGuid;
@property (nonatomic, readonly) bool hasSourceBundleId;
@property (nonatomic) bool isActive;
@property (nonatomic, retain) NSMutableArray *memberHandles;
@property (nonatomic, retain) NSString *messagesChatGuid;
@property (nonatomic, retain) NSMutableArray *participantHandles;
@property (nonatomic, retain) NSString *sourceBundleId;

+ (Class)memberHandlesType;
+ (Class)participantHandlesType;

- (void).cxx_destruct;
- (id)activityId;
- (id)activitySessionId;
- (void)addMemberHandles:(id)arg1;
- (void)addParticipantHandles:(id)arg1;
- (void)clearMemberHandles;
- (void)clearParticipantHandles;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)experienceType;
- (bool)hasActivityId;
- (bool)hasActivitySessionId;
- (bool)hasExperienceType;
- (bool)hasIsActive;
- (bool)hasMessagesChatGuid;
- (bool)hasSourceBundleId;
- (unsigned long long)hash;
- (bool)isActive;
- (bool)isEqual:(id)arg1;
- (id)memberHandles;
- (id)memberHandlesAtIndex:(unsigned long long)arg1;
- (unsigned long long)memberHandlesCount;
- (void)mergeFrom:(id)arg1;
- (id)messagesChatGuid;
- (id)participantHandles;
- (id)participantHandlesAtIndex:(unsigned long long)arg1;
- (unsigned long long)participantHandlesCount;
- (bool)readFrom:(id)arg1;
- (void)setActivityId:(id)arg1;
- (void)setActivitySessionId:(id)arg1;
- (void)setExperienceType:(id)arg1;
- (void)setHasIsActive:(bool)arg1;
- (void)setIsActive:(bool)arg1;
- (void)setMemberHandles:(id)arg1;
- (void)setMessagesChatGuid:(id)arg1;
- (void)setParticipantHandles:(id)arg1;
- (void)setSourceBundleId:(id)arg1;
- (id)sourceBundleId;
- (void)writeTo:(id)arg1;

@end
