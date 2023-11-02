
@interface _INPBCallGroupConversation : PBCodable <NSCopying, NSSecureCoding, _INPBCallGroupConversation> {
    _INPBCallGroup * _callGroup;
    _INPBContactValue * _caller;
    NSString * _conversationId;
    struct { }  _has;
    NSArray * _otherParticipants;
}

@property (nonatomic, retain) _INPBCallGroup *callGroup;
@property (nonatomic, retain) _INPBContactValue *caller;
@property (nonatomic, copy) NSString *conversationId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasCallGroup;
@property (nonatomic, readonly) bool hasCaller;
@property (nonatomic, readonly) bool hasConversationId;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *otherParticipants;
@property (nonatomic, readonly) unsigned long long otherParticipantsCount;
@property (readonly) Class superclass;

+ (Class)otherParticipantsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addOtherParticipants:(id)arg1;
- (id)callGroup;
- (id)caller;
- (void)clearOtherParticipants;
- (id)conversationId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCallGroup;
- (bool)hasCaller;
- (bool)hasConversationId;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)otherParticipants;
- (id)otherParticipantsAtIndex:(unsigned long long)arg1;
- (unsigned long long)otherParticipantsCount;
- (bool)readFrom:(id)arg1;
- (void)setCallGroup:(id)arg1;
- (void)setCaller:(id)arg1;
- (void)setConversationId:(id)arg1;
- (void)setOtherParticipants:(id)arg1;
- (void)writeTo:(id)arg1;

@end
