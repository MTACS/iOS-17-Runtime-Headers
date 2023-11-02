
@interface _INPBCallGroupConversationFilter : PBCodable <NSCopying, NSSecureCoding, _INPBCallGroupConversationFilter> {
    _INPBCallGroup * _callGroup;
    _INPBContact * _caller;
    struct { 
        unsigned int matchCallerAndParticipantsExactly : 1; 
    }  _has;
    bool  _matchCallerAndParticipantsExactly;
    NSArray * _participants;
}

@property (nonatomic, retain) _INPBCallGroup *callGroup;
@property (nonatomic, retain) _INPBContact *caller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasCallGroup;
@property (nonatomic, readonly) bool hasCaller;
@property (nonatomic) bool hasMatchCallerAndParticipantsExactly;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool matchCallerAndParticipantsExactly;
@property (nonatomic, copy) NSArray *participants;
@property (nonatomic, readonly) unsigned long long participantsCount;
@property (readonly) Class superclass;

+ (Class)participantsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addParticipants:(id)arg1;
- (id)callGroup;
- (id)caller;
- (void)clearParticipants;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCallGroup;
- (bool)hasCaller;
- (bool)hasMatchCallerAndParticipantsExactly;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)matchCallerAndParticipantsExactly;
- (id)participants;
- (id)participantsAtIndex:(unsigned long long)arg1;
- (unsigned long long)participantsCount;
- (bool)readFrom:(id)arg1;
- (void)setCallGroup:(id)arg1;
- (void)setCaller:(id)arg1;
- (void)setHasMatchCallerAndParticipantsExactly:(bool)arg1;
- (void)setMatchCallerAndParticipantsExactly:(bool)arg1;
- (void)setParticipants:(id)arg1;
- (void)writeTo:(id)arg1;

@end
