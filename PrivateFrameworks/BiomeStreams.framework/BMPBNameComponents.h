
@interface BMPBNameComponents : PBCodable <NSCopying> {
    NSString * _familyName;
    NSString * _givenName;
    NSString * _middleName;
    NSString * _namePrefix;
    NSString * _nameSuffix;
    NSString * _nickname;
    NSString * _previousFamilyName;
}

@property (nonatomic, retain) NSString *familyName;
@property (nonatomic, retain) NSString *givenName;
@property (nonatomic, readonly) bool hasFamilyName;
@property (nonatomic, readonly) bool hasGivenName;
@property (nonatomic, readonly) bool hasMiddleName;
@property (nonatomic, readonly) bool hasNamePrefix;
@property (nonatomic, readonly) bool hasNameSuffix;
@property (nonatomic, readonly) bool hasNickname;
@property (nonatomic, readonly) bool hasPreviousFamilyName;
@property (nonatomic, retain) NSString *middleName;
@property (nonatomic, retain) NSString *namePrefix;
@property (nonatomic, retain) NSString *nameSuffix;
@property (nonatomic, retain) NSString *nickname;
@property (nonatomic, retain) NSString *previousFamilyName;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)familyName;
- (id)givenName;
- (bool)hasFamilyName;
- (bool)hasGivenName;
- (bool)hasMiddleName;
- (bool)hasNamePrefix;
- (bool)hasNameSuffix;
- (bool)hasNickname;
- (bool)hasPreviousFamilyName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)middleName;
- (id)namePrefix;
- (id)nameSuffix;
- (id)nickname;
- (id)previousFamilyName;
- (bool)readFrom:(id)arg1;
- (void)setFamilyName:(id)arg1;
- (void)setGivenName:(id)arg1;
- (void)setMiddleName:(id)arg1;
- (void)setNamePrefix:(id)arg1;
- (void)setNameSuffix:(id)arg1;
- (void)setNickname:(id)arg1;
- (void)setPreviousFamilyName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
