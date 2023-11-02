
@interface IDSQRProtoParticipantUpdateRequest : PBRequest <NSCopying> {
    IDSQRProtoMaterialInfo * _contextBlob;
    struct { 
        unsigned int sessionStateCounter : 1; 
    }  _has;
    unsigned int  _operationFlags;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _participantIdLists;
    unsigned int  _sessionStateCounter;
}

@property (nonatomic, retain) IDSQRProtoMaterialInfo *contextBlob;
@property (nonatomic, readonly) bool hasContextBlob;
@property (nonatomic) bool hasSessionStateCounter;
@property (nonatomic) unsigned int operationFlags;
@property (nonatomic, readonly) unsigned long long*participantIdLists;
@property (nonatomic, readonly) unsigned long long participantIdListsCount;
@property (nonatomic) unsigned int sessionStateCounter;

- (void).cxx_destruct;
- (void)addParticipantIdList:(unsigned long long)arg1;
- (void)clearParticipantIdLists;
- (id)contextBlob;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContextBlob;
- (bool)hasSessionStateCounter;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)operationFlags;
- (unsigned long long)participantIdListAtIndex:(unsigned long long)arg1;
- (unsigned long long*)participantIdLists;
- (unsigned long long)participantIdListsCount;
- (bool)readFrom:(id)arg1;
- (unsigned int)sessionStateCounter;
- (void)setContextBlob:(id)arg1;
- (void)setHasSessionStateCounter:(bool)arg1;
- (void)setOperationFlags:(unsigned int)arg1;
- (void)setParticipantIdLists:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setSessionStateCounter:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
