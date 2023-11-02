
@interface AWDBarcodeSupportCodeActivatedEvent : PBCodable <NSCopying> {
    int  _appLinkActivationOpenStrategy;
    int  _barcodeDataType;
    int  _barcodeSourceType;
    int  _barcodeURLType;
    int  _clientType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int appLinkActivationOpenStrategy : 1; 
        unsigned int barcodeDataType : 1; 
        unsigned int barcodeSourceType : 1; 
        unsigned int barcodeURLType : 1; 
        unsigned int clientType : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic) int appLinkActivationOpenStrategy;
@property (nonatomic) int barcodeDataType;
@property (nonatomic) int barcodeSourceType;
@property (nonatomic) int barcodeURLType;
@property (nonatomic) int clientType;
@property (nonatomic) bool hasAppLinkActivationOpenStrategy;
@property (nonatomic) bool hasBarcodeDataType;
@property (nonatomic) bool hasBarcodeSourceType;
@property (nonatomic) bool hasBarcodeURLType;
@property (nonatomic) bool hasClientType;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsAppLinkActivationOpenStrategy:(id)arg1;
- (int)StringAsBarcodeDataType:(id)arg1;
- (int)StringAsBarcodeSourceType:(id)arg1;
- (int)StringAsBarcodeURLType:(id)arg1;
- (int)StringAsClientType:(id)arg1;
- (int)appLinkActivationOpenStrategy;
- (id)appLinkActivationOpenStrategyAsString:(int)arg1;
- (int)barcodeDataType;
- (id)barcodeDataTypeAsString:(int)arg1;
- (int)barcodeSourceType;
- (id)barcodeSourceTypeAsString:(int)arg1;
- (int)barcodeURLType;
- (id)barcodeURLTypeAsString:(int)arg1;
- (int)clientType;
- (id)clientTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAppLinkActivationOpenStrategy;
- (bool)hasBarcodeDataType;
- (bool)hasBarcodeSourceType;
- (bool)hasBarcodeURLType;
- (bool)hasClientType;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAppLinkActivationOpenStrategy:(int)arg1;
- (void)setBarcodeDataType:(int)arg1;
- (void)setBarcodeSourceType:(int)arg1;
- (void)setBarcodeURLType:(int)arg1;
- (void)setClientType:(int)arg1;
- (void)setHasAppLinkActivationOpenStrategy:(bool)arg1;
- (void)setHasBarcodeDataType:(bool)arg1;
- (void)setHasBarcodeSourceType:(bool)arg1;
- (void)setHasBarcodeURLType:(bool)arg1;
- (void)setHasClientType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
