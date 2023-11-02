
@interface BMPBNumDevicesPerTechnology : PBCodable <NSCopying> {
    struct { 
        unsigned int number : 1; 
    }  _has;
    int  _number;
    NSString * _technologyString;
}

@property (nonatomic) bool hasNumber;
@property (nonatomic, readonly) bool hasTechnologyString;
@property (nonatomic) int number;
@property (nonatomic, retain) NSString *technologyString;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNumber;
- (bool)hasTechnologyString;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)number;
- (bool)readFrom:(id)arg1;
- (void)setHasNumber:(bool)arg1;
- (void)setNumber:(int)arg1;
- (void)setTechnologyString:(id)arg1;
- (id)technologyString;
- (void)writeTo:(id)arg1;

@end
