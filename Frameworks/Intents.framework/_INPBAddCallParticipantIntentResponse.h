
@interface _INPBAddCallParticipantIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBAddCallParticipantIntentResponse> {
    struct { }  _has;
    NSArray * _invites;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *invites;
@property (nonatomic, readonly) unsigned long long invitesCount;
@property (readonly) Class superclass;

+ (Class)invitesType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addInvites:(id)arg1;
- (void)clearInvites;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)invites;
- (id)invitesAtIndex:(unsigned long long)arg1;
- (unsigned long long)invitesCount;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setInvites:(id)arg1;
- (void)writeTo:(id)arg1;

@end
