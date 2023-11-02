
@interface NPKProtoRemotePassActionEnvelope : PBCodable <NSCopying> {
    NSString * _caption;
    int  _cardType;
    struct { 
        unsigned int cardType : 1; 
    }  _has;
    bool  _isResponse;
    NSData * _messageProtoData;
    int  _messageType;
    NSString * _passLocalizedDescription;
    NSString * _passOrganizationName;
    NSString * _summaryText;
    unsigned int  _version;
}

@property (nonatomic, retain) NSString *caption;
@property (nonatomic) int cardType;
@property (nonatomic, readonly) bool hasCaption;
@property (nonatomic) bool hasCardType;
@property (nonatomic, readonly) bool hasPassLocalizedDescription;
@property (nonatomic, readonly) bool hasPassOrganizationName;
@property (nonatomic, readonly) bool hasSummaryText;
@property (nonatomic) bool isResponse;
@property (nonatomic, retain) NSData *messageProtoData;
@property (nonatomic) int messageType;
@property (nonatomic, retain) NSString *passLocalizedDescription;
@property (nonatomic, retain) NSString *passOrganizationName;
@property (nonatomic, retain) NSString *summaryText;
@property (nonatomic) unsigned int version;

- (void).cxx_destruct;
- (int)StringAsCardType:(id)arg1;
- (int)StringAsMessageType:(id)arg1;
- (id)caption;
- (int)cardType;
- (id)cardTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCaption;
- (bool)hasCardType;
- (bool)hasPassLocalizedDescription;
- (bool)hasPassOrganizationName;
- (bool)hasSummaryText;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isResponse;
- (void)mergeFrom:(id)arg1;
- (id)messageProtoData;
- (int)messageType;
- (id)messageTypeAsString:(int)arg1;
- (id)passLocalizedDescription;
- (id)passOrganizationName;
- (bool)readFrom:(id)arg1;
- (void)setCaption:(id)arg1;
- (void)setCardType:(int)arg1;
- (void)setHasCardType:(bool)arg1;
- (void)setIsResponse:(bool)arg1;
- (void)setMessageProtoData:(id)arg1;
- (void)setMessageType:(int)arg1;
- (void)setPassLocalizedDescription:(id)arg1;
- (void)setPassOrganizationName:(id)arg1;
- (void)setSummaryText:(id)arg1;
- (void)setVersion:(unsigned int)arg1;
- (id)summaryText;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
