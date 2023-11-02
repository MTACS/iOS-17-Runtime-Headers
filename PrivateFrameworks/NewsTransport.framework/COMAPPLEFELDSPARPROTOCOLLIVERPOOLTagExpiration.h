
@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagExpiration : PBCodable <NSCopying> {
    long long  _expireUtcTime;
    struct { 
        unsigned int expireUtcTime : 1; 
    }  _has;
    NSString * _tagId;
}

@property (nonatomic) long long expireUtcTime;
@property (nonatomic) bool hasExpireUtcTime;
@property (nonatomic, readonly) bool hasTagId;
@property (nonatomic, retain) NSString *tagId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)expireUtcTime;
- (bool)hasExpireUtcTime;
- (bool)hasTagId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setExpireUtcTime:(long long)arg1;
- (void)setHasExpireUtcTime:(bool)arg1;
- (void)setTagId:(id)arg1;
- (id)tagId;
- (void)writeTo:(id)arg1;

@end
