
@interface ATXPBContactModeEntityMetrics : PBCodable <NSCopying> {
    NSString * _activityState;
    NSString * _bundleId;
    struct { 
        unsigned int numUniqueIncomingInteractionSenders : 1; 
        unsigned int numUniqueOutgoingInteractionRecipients : 1; 
    }  _has;
    unsigned int  _numUniqueIncomingInteractionSenders;
    unsigned int  _numUniqueOutgoingInteractionRecipients;
}

@property (nonatomic, retain) NSString *activityState;
@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic, readonly) bool hasActivityState;
@property (nonatomic, readonly) bool hasBundleId;
@property (nonatomic) bool hasNumUniqueIncomingInteractionSenders;
@property (nonatomic) bool hasNumUniqueOutgoingInteractionRecipients;
@property (nonatomic) unsigned int numUniqueIncomingInteractionSenders;
@property (nonatomic) unsigned int numUniqueOutgoingInteractionRecipients;

- (void).cxx_destruct;
- (id)activityState;
- (id)bundleId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActivityState;
- (bool)hasBundleId;
- (bool)hasNumUniqueIncomingInteractionSenders;
- (bool)hasNumUniqueOutgoingInteractionRecipients;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numUniqueIncomingInteractionSenders;
- (unsigned int)numUniqueOutgoingInteractionRecipients;
- (bool)readFrom:(id)arg1;
- (void)setActivityState:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setHasNumUniqueIncomingInteractionSenders:(bool)arg1;
- (void)setHasNumUniqueOutgoingInteractionRecipients:(bool)arg1;
- (void)setNumUniqueIncomingInteractionSenders:(unsigned int)arg1;
- (void)setNumUniqueOutgoingInteractionRecipients:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
