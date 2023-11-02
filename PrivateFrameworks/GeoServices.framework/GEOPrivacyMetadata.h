
@interface GEOPrivacyMetadata : PBCodable <NSCopying> {
    struct { 
        unsigned int has_isManagedAccount : 1; 
        unsigned int has_isMismatchedStorefrontDeviceRegion : 1; 
        unsigned int has_isSharedIpadForEducation : 1; 
        unsigned int has_isUnderageAccount : 1; 
    }  _flags;
    bool  _isManagedAccount;
    bool  _isMismatchedStorefrontDeviceRegion;
    bool  _isSharedIpadForEducation;
    bool  _isUnderageAccount;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasIsManagedAccount;
@property (nonatomic) bool hasIsMismatchedStorefrontDeviceRegion;
@property (nonatomic) bool hasIsSharedIpadForEducation;
@property (nonatomic) bool hasIsUnderageAccount;
@property (nonatomic) bool isManagedAccount;
@property (nonatomic) bool isMismatchedStorefrontDeviceRegion;
@property (nonatomic) bool isSharedIpadForEducation;
@property (nonatomic) bool isUnderageAccount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsManagedAccount;
- (bool)hasIsMismatchedStorefrontDeviceRegion;
- (bool)hasIsSharedIpadForEducation;
- (bool)hasIsUnderageAccount;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isManagedAccount;
- (bool)isMismatchedStorefrontDeviceRegion;
- (bool)isSharedIpadForEducation;
- (bool)isUnderageAccount;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsManagedAccount:(bool)arg1;
- (void)setHasIsMismatchedStorefrontDeviceRegion:(bool)arg1;
- (void)setHasIsSharedIpadForEducation:(bool)arg1;
- (void)setHasIsUnderageAccount:(bool)arg1;
- (void)setIsManagedAccount:(bool)arg1;
- (void)setIsMismatchedStorefrontDeviceRegion:(bool)arg1;
- (void)setIsSharedIpadForEducation:(bool)arg1;
- (void)setIsUnderageAccount:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
