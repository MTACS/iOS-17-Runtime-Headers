
@interface GEOWiFiQualityIndex : PBCodable <NSCopying, TBScore> {
    struct { 
        unsigned int has_type : 1; 
        unsigned int has_value : 1; 
    }  _flags;
    int  _type;
    unsigned int  _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasType;
@property (nonatomic) bool hasValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long score;
@property (readonly) Class superclass;
@property (nonatomic) int type;
@property (nonatomic, readonly) NSString *typeDescription;
@property (nonatomic) unsigned int value;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (bool)isValid:(id)arg1;

- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasType;
- (bool)hasValue;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHasValue:(bool)arg1;
- (void)setType:(int)arg1;
- (void)setValue:(unsigned int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (unsigned int)value;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy

- (long long)score;
- (id)typeDescription;

@end
