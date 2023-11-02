
@interface BCSVisibility : PBCodable <NSCopying> {
    NSString * _country;
    struct { 
        unsigned int ratio : 1; 
    }  _has;
    NSString * _language;
    double  _ratio;
}

@property (nonatomic, retain) NSString *country;
@property (nonatomic, readonly) bool hasCountry;
@property (nonatomic, readonly) bool hasLanguage;
@property (nonatomic) bool hasRatio;
@property (nonatomic, retain) NSString *language;
@property (nonatomic) double ratio;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)country;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCountry;
- (bool)hasLanguage;
- (bool)hasRatio;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)language;
- (void)mergeFrom:(id)arg1;
- (double)ratio;
- (bool)readFrom:(id)arg1;
- (void)setCountry:(id)arg1;
- (void)setHasRatio:(bool)arg1;
- (void)setLanguage:(id)arg1;
- (void)setRatio:(double)arg1;
- (void)writeTo:(id)arg1;

@end
