
@interface IDSQRProtoParticipantUpdateIndication : PBCodable <NSCopying> {
    IDSQRProtoMaterialInfo * _contextBlob;
    struct { 
        unsigned int txnId : 1; 
        unsigned int operationFlags : 1; 
        unsigned int sessionStateCounter : 1; 
    }  _has;
    unsigned int  _operationFlags;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _participantIdLists;
    unsigned int  _sessionStateCounter;
    unsigned long long  _txnId;
}

@property (nonatomic, retain) IDSQRProtoMaterialInfo *contextBlob;
@property (nonatomic, readonly) bool hasContextBlob;
@property (nonatomic) bool hasOperationFlags;
@property (nonatomic) bool hasSessionStateCounter;
@property (nonatomic) bool hasTxnId;
@property (nonatomic) unsigned int operationFlags;
@property (nonatomic, readonly) unsigned long long*participantIdLists;
@property (nonatomic, readonly) unsigned long long participantIdListsCount;
@property (nonatomic) unsigned int sessionStateCounter;
@property (nonatomic) unsigned long long txnId;

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
- (bool)hasOperationFlags;
- (bool)hasSessionStateCounter;
- (bool)hasTxnId;
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
- (void)setHasOperationFlags:(bool)arg1;
- (void)setHasSessionStateCounter:(bool)arg1;
- (void)setHasTxnId:(bool)arg1;
- (void)setOperationFlags:(unsigned int)arg1;
- (void)setParticipantIdLists:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setSessionStateCounter:(unsigned int)arg1;
- (void)setTxnId:(unsigned long long)arg1;
- (unsigned long long)txnId;
- (void)writeTo:(id)arg1;

@end
