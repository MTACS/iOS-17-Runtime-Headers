
@interface NPKProtoSetPeerPaymentPreferencesResponse : PBCodable <NSCopying> {
    NSData * _errorData;
    struct { 
        unsigned int pending : 1; 
    }  _has;
    NSData * _peerPaymentPreferencesData;
    bool  _pending;
}

@property (nonatomic, retain) NSData *errorData;
@property (nonatomic, readonly) bool hasErrorData;
@property (nonatomic, readonly) bool hasPeerPaymentPreferencesData;
@property (nonatomic) bool hasPending;
@property (nonatomic, retain) NSData *peerPaymentPreferencesData;
@property (nonatomic) bool pending;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorData;
- (bool)hasErrorData;
- (bool)hasPeerPaymentPreferencesData;
- (bool)hasPending;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)peerPaymentPreferencesData;
- (bool)pending;
- (bool)readFrom:(id)arg1;
- (void)setErrorData:(id)arg1;
- (void)setHasPending:(bool)arg1;
- (void)setPeerPaymentPreferencesData:(id)arg1;
- (void)setPending:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
