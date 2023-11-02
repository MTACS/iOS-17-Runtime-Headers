
@interface CSDMessagingMemberAssociationClaim : PBCodable <NSCopying> {
    CSDMessagingHandle * _associatedPseudonym;
    NSString * _conversationGroupUUIDString;
    struct { 
        unsigned int primaryIdentifier : 1; 
        unsigned int type : 1; 
        unsigned int version : 1; 
    }  _has;
    NSString * _primaryAvcIdentifier;
    CSDMessagingHandle * _primaryHandle;
    unsigned long long  _primaryIdentifier;
    int  _type;
    unsigned int  _version;
}

@property (nonatomic, retain) CSDMessagingHandle *associatedPseudonym;
@property (nonatomic, retain) NSString *conversationGroupUUIDString;
@property (nonatomic, readonly) bool hasAssociatedPseudonym;
@property (nonatomic, readonly) bool hasConversationGroupUUIDString;
@property (nonatomic, readonly) bool hasPrimaryAvcIdentifier;
@property (nonatomic, readonly) bool hasPrimaryHandle;
@property (nonatomic) bool hasPrimaryIdentifier;
@property (nonatomic) bool hasType;
@property (nonatomic) bool hasVersion;
@property (nonatomic, retain) NSString *primaryAvcIdentifier;
@property (nonatomic, retain) CSDMessagingHandle *primaryHandle;
@property (nonatomic) unsigned long long primaryIdentifier;
@property (nonatomic) int type;
@property (nonatomic) unsigned int version;

- (void).cxx_destruct;
- (id)associatedPseudonym;
- (id)conversationGroupUUIDString;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAssociatedPseudonym;
- (bool)hasConversationGroupUUIDString;
- (bool)hasPrimaryAvcIdentifier;
- (bool)hasPrimaryHandle;
- (bool)hasPrimaryIdentifier;
- (bool)hasType;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)primaryAvcIdentifier;
- (id)primaryHandle;
- (unsigned long long)primaryIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedPseudonym:(id)arg1;
- (void)setConversationGroupUUIDString:(id)arg1;
- (void)setHasPrimaryIdentifier:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setPrimaryAvcIdentifier:(id)arg1;
- (void)setPrimaryHandle:(id)arg1;
- (void)setPrimaryIdentifier:(unsigned long long)arg1;
- (void)setType:(int)arg1;
- (void)setVersion:(unsigned int)arg1;
- (id)tuAssociationForHandle:(id)arg1;
- (int)type;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
