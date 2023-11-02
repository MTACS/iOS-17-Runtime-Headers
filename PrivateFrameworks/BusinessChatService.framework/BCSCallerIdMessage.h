
@interface BCSCallerIdMessage : PBCodable <NSCopying> {
    NSString * _businessId;
    NSString * _companyId;
    NSString * _conflatedMuid;
    struct { 
        unsigned int phoneHash : 1; 
        unsigned int isVerified : 1; 
    }  _has;
    BCSCallerIdLocalizedString * _intent;
    bool  _isVerified;
    NSString * _locationId;
    NSString * _logoUrl;
    BCSCallerIdLocalizedString * _name;
    long long  _phoneHash;
}

@property (nonatomic, retain) NSString *businessId;
@property (nonatomic, retain) NSString *companyId;
@property (nonatomic, retain) NSString *conflatedMuid;
@property (nonatomic, readonly) bool hasBusinessId;
@property (nonatomic, readonly) bool hasCompanyId;
@property (nonatomic, readonly) bool hasConflatedMuid;
@property (nonatomic, readonly) bool hasIntent;
@property (nonatomic) bool hasIsVerified;
@property (nonatomic, readonly) bool hasLocationId;
@property (nonatomic, readonly) bool hasLogoUrl;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic) bool hasPhoneHash;
@property (nonatomic, retain) BCSCallerIdLocalizedString *intent;
@property (nonatomic) bool isVerified;
@property (nonatomic, retain) NSString *locationId;
@property (nonatomic, retain) NSString *logoUrl;
@property (nonatomic, retain) BCSCallerIdLocalizedString *name;
@property (nonatomic) long long phoneHash;

- (void).cxx_destruct;
- (id)businessId;
- (id)companyId;
- (id)conflatedMuid;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBusinessId;
- (bool)hasCompanyId;
- (bool)hasConflatedMuid;
- (bool)hasIntent;
- (bool)hasIsVerified;
- (bool)hasLocationId;
- (bool)hasLogoUrl;
- (bool)hasName;
- (bool)hasPhoneHash;
- (unsigned long long)hash;
- (id)intent;
- (bool)isEqual:(id)arg1;
- (bool)isVerified;
- (id)locationId;
- (id)logoUrl;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (long long)phoneHash;
- (bool)readFrom:(id)arg1;
- (void)setBusinessId:(id)arg1;
- (void)setCompanyId:(id)arg1;
- (void)setConflatedMuid:(id)arg1;
- (void)setHasIsVerified:(bool)arg1;
- (void)setHasPhoneHash:(bool)arg1;
- (void)setIntent:(id)arg1;
- (void)setIsVerified:(bool)arg1;
- (void)setLocationId:(id)arg1;
- (void)setLogoUrl:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPhoneHash:(long long)arg1;
- (void)writeTo:(id)arg1;

@end
