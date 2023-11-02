
@interface IDSGroupSessionActiveParticipant : NSObject {
    bool  _givenNSNullToken;
    NSUUID * _groupUUID;
    bool  _isKnown;
    unsigned long long  _participantIdentifier;
    IDSPushToken * _participantPushTokenObject;
    IDSURI * _participantURIObject;
}

@property (nonatomic, readonly) NSUUID *groupUUID;
@property (nonatomic, readonly) bool isKnown;
@property (nonatomic, readonly) unsigned long long participantIdentifier;
@property (nonatomic, readonly) NSData *participantPushToken;
@property (nonatomic, readonly) IDSPushToken *participantPushTokenObject;
@property (nonatomic, readonly) NSString *participantURI;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)dictionaryRepresentation;
- (id)groupUUID;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithGroupUUID:(id)arg1 participantIdentifier:(unsigned long long)arg2 isKnown:(bool)arg3 participantURI:(id)arg4 pushToken:(id)arg5;
- (id)initWithGroupUUID:(id)arg1 participantIdentifier:(unsigned long long)arg2 isKnown:(bool)arg3 participantURIObject:(id)arg4 pushTokenObject:(id)arg5;
- (bool)isKnown;
- (unsigned long long)participantIdentifier;
- (id)participantPushToken;
- (id)participantPushTokenObject;
- (id)participantURI;

@end
