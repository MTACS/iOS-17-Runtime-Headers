
@interface BMPBDeviceMetadataEvent : PBCodable <NSCopying> {
    NSString * _build;
    struct { 
        unsigned int platform : 1; 
        unsigned int rapidSecurityResponsePreReboot : 1; 
    }  _has;
    NSString * _name;
    int  _platform;
    bool  _rapidSecurityResponsePreReboot;
    NSString * _supplementalBuild;
}

@property (nonatomic, retain) NSString *build;
@property (nonatomic, readonly) bool hasBuild;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic) bool hasPlatform;
@property (nonatomic) bool hasRapidSecurityResponsePreReboot;
@property (nonatomic, readonly) bool hasSupplementalBuild;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) int platform;
@property (nonatomic) bool rapidSecurityResponsePreReboot;
@property (nonatomic, retain) NSString *supplementalBuild;

- (void).cxx_destruct;
- (int)StringAsPlatform:(id)arg1;
- (id)build;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBuild;
- (bool)hasName;
- (bool)hasPlatform;
- (bool)hasRapidSecurityResponsePreReboot;
- (bool)hasSupplementalBuild;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (int)platform;
- (id)platformAsString:(int)arg1;
- (bool)rapidSecurityResponsePreReboot;
- (bool)readFrom:(id)arg1;
- (void)setBuild:(id)arg1;
- (void)setHasPlatform:(bool)arg1;
- (void)setHasRapidSecurityResponsePreReboot:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setPlatform:(int)arg1;
- (void)setRapidSecurityResponsePreReboot:(bool)arg1;
- (void)setSupplementalBuild:(id)arg1;
- (id)supplementalBuild;
- (void)writeTo:(id)arg1;

@end
