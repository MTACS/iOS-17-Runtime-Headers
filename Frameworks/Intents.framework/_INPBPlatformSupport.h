
@interface _INPBPlatformSupport : PBCodable <NSCopying, NSSecureCoding, _INPBPlatformSupport> {
    struct { 
        unsigned int supportedPlatform : 1; 
    }  _has;
    NSString * _minimumOsVersion;
    int  _supportedPlatform;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasMinimumOsVersion;
@property (nonatomic) bool hasSupportedPlatform;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *minimumOsVersion;
@property (readonly) Class superclass;
@property (nonatomic) int supportedPlatform;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsSupportedPlatform:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasMinimumOsVersion;
- (bool)hasSupportedPlatform;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)minimumOsVersion;
- (bool)readFrom:(id)arg1;
- (void)setHasSupportedPlatform:(bool)arg1;
- (void)setMinimumOsVersion:(id)arg1;
- (void)setSupportedPlatform:(int)arg1;
- (int)supportedPlatform;
- (id)supportedPlatformAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
