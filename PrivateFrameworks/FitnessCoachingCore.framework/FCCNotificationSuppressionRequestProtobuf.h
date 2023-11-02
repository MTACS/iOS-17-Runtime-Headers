
@interface FCCNotificationSuppressionRequestProtobuf : PBCodable <NSCopying> {
    double  _expirationDate;
    struct { 
        unsigned int expirationDate : 1; 
    }  _has;
    NSString * _identifier;
}

@property (nonatomic) double expirationDate;
@property (nonatomic) bool hasExpirationDate;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, retain) NSString *identifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)expirationDate;
- (bool)hasExpirationDate;
- (bool)hasIdentifier;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setExpirationDate:(double)arg1;
- (void)setHasExpirationDate:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
