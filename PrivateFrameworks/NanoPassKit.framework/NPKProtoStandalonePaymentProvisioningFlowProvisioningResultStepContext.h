
@interface NPKProtoStandalonePaymentProvisioningFlowProvisioningResultStepContext : PBCodable <NSCopying> {
    bool  _cardAdded;
    NPKProtoStandaloneError * _error;
    struct { 
        unsigned int cardAdded : 1; 
    }  _has;
}

@property (nonatomic) bool cardAdded;
@property (nonatomic, retain) NPKProtoStandaloneError *error;
@property (nonatomic) bool hasCardAdded;
@property (nonatomic, readonly) bool hasError;

- (void).cxx_destruct;
- (bool)cardAdded;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)error;
- (bool)hasCardAdded;
- (bool)hasError;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCardAdded:(bool)arg1;
- (void)setError:(id)arg1;
- (void)setHasCardAdded:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
