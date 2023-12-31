
@interface IMParticipantChangeItem : IMItem <IMRemoteObjectCoding, NSCopying, NSSecureCoding> {
    NSUUID * _activeTelephonyConversationUUID;
    long long  _changeType;
    NSString * _otherCountryCode;
    NSString * _otherHandle;
    NSString * _otherUnformattedID;
}

@property (nonatomic, retain) NSUUID *activeTelephonyConversationUUID;
@property (nonatomic) long long changeType;
@property (nonatomic, retain) NSString *otherCountryCode;
@property (nonatomic, retain) NSString *otherHandle;
@property (nonatomic, retain) NSString *otherUnformattedID;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

+ (bool)supportsSecureCoding;

- (id)activeTelephonyConversationUUID;
- (long long)changeType;
- (id)copyDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)otherCountryCode;
- (id)otherHandle;
- (id)otherUnformattedID;
- (void)setActiveTelephonyConversationUUID:(id)arg1;
- (void)setChangeType:(long long)arg1;
- (void)setOtherCountryCode:(id)arg1;
- (void)setOtherHandle:(id)arg1;
- (void)setOtherUnformattedID:(id)arg1;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (id)_newChatItems;
- (id)_newChatItemsWithChatContext:(id)arg1;

@end
