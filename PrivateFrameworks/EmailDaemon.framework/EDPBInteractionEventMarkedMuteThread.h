
@interface EDPBInteractionEventMarkedMuteThread : PBCodable <EDPBDataSetters, NSCopying> {
    long long  _conversationId;
    struct { 
        unsigned int conversationId : 1; 
        unsigned int value : 1; 
    }  _has;
    bool  _value;
}

@property (nonatomic) long long conversationId;
@property (nonatomic) bool hasConversationId;
@property (nonatomic) bool hasValue;
@property (nonatomic) bool value;

- (long long)conversationId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConversationId;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConversationId:(long long)arg1;
- (void)setHasConversationId:(bool)arg1;
- (void)setHasValue:(bool)arg1;
- (void)setValue:(bool)arg1;
- (bool)value;
- (void)withHasher:(id)arg1 setConversationID:(long long)arg2 data:(id)arg3;
- (void)writeTo:(id)arg1;

@end
