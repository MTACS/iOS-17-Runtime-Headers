
@interface _INPBCallInvite : PBCodable <NSCopying, NSSecureCoding, _INPBCallInvite> {
    _INPBURLValue * _callURL;
    struct { 
        unsigned int inviteType : 1; 
    }  _has;
    int  _inviteType;
    NSArray * _participants;
}

@property (nonatomic, retain) _INPBURLValue *callURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasCallURL;
@property (nonatomic) bool hasInviteType;
@property (readonly) unsigned long long hash;
@property (nonatomic) int inviteType;
@property (nonatomic, copy) NSArray *participants;
@property (nonatomic, readonly) unsigned long long participantsCount;
@property (readonly) Class superclass;

+ (Class)participantsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsInviteType:(id)arg1;
- (void)addParticipants:(id)arg1;
- (id)callURL;
- (void)clearParticipants;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCallURL;
- (bool)hasInviteType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (int)inviteType;
- (id)inviteTypeAsString:(int)arg1;
- (bool)isEqual:(id)arg1;
- (id)participants;
- (id)participantsAtIndex:(unsigned long long)arg1;
- (unsigned long long)participantsCount;
- (bool)readFrom:(id)arg1;
- (void)setCallURL:(id)arg1;
- (void)setHasInviteType:(bool)arg1;
- (void)setInviteType:(int)arg1;
- (void)setParticipants:(id)arg1;
- (void)writeTo:(id)arg1;

@end
