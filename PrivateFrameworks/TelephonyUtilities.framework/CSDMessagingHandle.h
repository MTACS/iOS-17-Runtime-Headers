
@interface CSDMessagingHandle : PBCodable <NSCopying> {
    struct { 
        unsigned int type : 1; 
    }  _has;
    NSString * _isoCountryCode;
    int  _type;
    NSString * _value;
}

@property (nonatomic, readonly) bool hasIsoCountryCode;
@property (nonatomic) bool hasType;
@property (nonatomic, readonly) bool hasValue;
@property (nonatomic, retain) NSString *isoCountryCode;
@property (nonatomic, readonly) TUHandle *tuHandle;
@property (nonatomic) int type;
@property (nonatomic, retain) NSString *value;

+ (id)handleWithTUHandle:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsoCountryCode;
- (bool)hasType;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)isoCountryCode;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIsoCountryCode:(id)arg1;
- (void)setType:(int)arg1;
- (void)setValue:(id)arg1;
- (id)tuHandle;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)value;
- (void)writeTo:(id)arg1;

@end
