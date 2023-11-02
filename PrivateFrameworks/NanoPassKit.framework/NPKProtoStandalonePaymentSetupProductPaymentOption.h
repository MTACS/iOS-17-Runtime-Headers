
@interface NPKProtoStandalonePaymentSetupProductPaymentOption : PBCodable <NSCopying> {
    long long  _cardType;
    struct { 
        unsigned int cardType : 1; 
        unsigned int priority : 1; 
        unsigned int supportedProtocols : 1; 
    }  _has;
    unsigned long long  _priority;
    long long  _supportedProtocols;
}

@property (nonatomic) long long cardType;
@property (nonatomic) bool hasCardType;
@property (nonatomic) bool hasPriority;
@property (nonatomic) bool hasSupportedProtocols;
@property (nonatomic) unsigned long long priority;
@property (nonatomic) long long supportedProtocols;

- (long long)cardType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCardType;
- (bool)hasPriority;
- (bool)hasSupportedProtocols;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)priority;
- (bool)readFrom:(id)arg1;
- (void)setCardType:(long long)arg1;
- (void)setHasCardType:(bool)arg1;
- (void)setHasPriority:(bool)arg1;
- (void)setHasSupportedProtocols:(bool)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (void)setSupportedProtocols:(long long)arg1;
- (long long)supportedProtocols;
- (void)writeTo:(id)arg1;

@end
