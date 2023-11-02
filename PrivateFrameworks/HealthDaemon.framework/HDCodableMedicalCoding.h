
@interface HDCodableMedicalCoding : PBCodable <NSCopying> {
    NSString * _code;
    NSString * _codingSystem;
    NSString * _codingVersion;
    NSString * _displayString;
}

@property (nonatomic, retain) NSString *code;
@property (nonatomic, retain) NSString *codingSystem;
@property (nonatomic, retain) NSString *codingVersion;
@property (nonatomic, retain) NSString *displayString;
@property (nonatomic, readonly) bool hasCode;
@property (nonatomic, readonly) bool hasCodingSystem;
@property (nonatomic, readonly) bool hasCodingVersion;
@property (nonatomic, readonly) bool hasDisplayString;

- (void).cxx_destruct;
- (id)code;
- (id)codingSystem;
- (id)codingVersion;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayString;
- (bool)hasCode;
- (bool)hasCodingSystem;
- (bool)hasCodingVersion;
- (bool)hasDisplayString;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCode:(id)arg1;
- (void)setCodingSystem:(id)arg1;
- (void)setCodingVersion:(id)arg1;
- (void)setDisplayString:(id)arg1;
- (void)writeTo:(id)arg1;

@end
