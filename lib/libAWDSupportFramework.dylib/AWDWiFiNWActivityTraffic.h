
@interface AWDWiFiNWActivityTraffic : PBCodable <NSCopying> {
    struct { 
        unsigned int value : 1; 
        unsigned int traffic : 1; 
    }  _has;
    int  _traffic;
    unsigned long long  _value;
}

@property (nonatomic) bool hasTraffic;
@property (nonatomic) bool hasValue;
@property (nonatomic) int traffic;
@property (nonatomic) unsigned long long value;

- (int)StringAsTraffic:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTraffic;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTraffic:(bool)arg1;
- (void)setHasValue:(bool)arg1;
- (void)setTraffic:(int)arg1;
- (void)setValue:(unsigned long long)arg1;
- (int)traffic;
- (id)trafficAsString:(int)arg1;
- (unsigned long long)value;
- (void)writeTo:(id)arg1;

@end
