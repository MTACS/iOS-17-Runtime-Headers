
@interface TUConversationHandoffEligibility : NSObject <NSCopying, NSSecureCoding> {
    TUConversationParticipantAssociation * _association;
    NSUUID * _conversationGroupUUID;
    bool  _eligible;
    NSString * _originatingDeviceType;
    bool  _sendingVideo;
    bool  _uplinkMuted;
}

@property (nonatomic, retain) TUConversationParticipantAssociation *association;
@property (nonatomic, retain) NSUUID *conversationGroupUUID;
@property (getter=isEligible, nonatomic) bool eligible;
@property (nonatomic, readonly) NSString *localizedDeviceCategory;
@property (nonatomic, retain) NSString *originatingDeviceType;
@property (getter=isSendingVideo, nonatomic) bool sendingVideo;
@property (getter=isUplinkMuted, nonatomic) bool uplinkMuted;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)association;
- (id)conversationGroupUUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithHandoffEligibility:(id)arg1;
- (bool)isEligible;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToHandoffEligibility:(id)arg1;
- (bool)isSendingVideo;
- (bool)isUplinkMuted;
- (id)localizedDeviceCategory;
- (id)originatingDeviceType;
- (void)setAssociation:(id)arg1;
- (void)setConversationGroupUUID:(id)arg1;
- (void)setEligible:(bool)arg1;
- (void)setOriginatingDeviceType:(id)arg1;
- (void)setSendingVideo:(bool)arg1;
- (void)setUplinkMuted:(bool)arg1;

@end
