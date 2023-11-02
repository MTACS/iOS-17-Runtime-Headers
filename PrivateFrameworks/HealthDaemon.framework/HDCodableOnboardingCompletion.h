
@interface HDCodableOnboardingCompletion : PBCodable <NSCopying> {
    double  _completionDate;
    NSString * _countryCode;
    long long  _countryCodeProvenance;
    bool  _deleted;
    NSString * _featureIdentifier;
    struct { 
        unsigned int completionDate : 1; 
        unsigned int countryCodeProvenance : 1; 
        unsigned int modificationDate : 1; 
        unsigned int version : 1; 
        unsigned int deleted : 1; 
    }  _has;
    double  _modificationDate;
    HDCodableSyncIdentity * _syncIdentity;
    NSData * _uuid;
    long long  _version;
}

@property (nonatomic) double completionDate;
@property (nonatomic, retain) NSString *countryCode;
@property (nonatomic) long long countryCodeProvenance;
@property (nonatomic) bool deleted;
@property (nonatomic, retain) NSString *featureIdentifier;
@property (nonatomic) bool hasCompletionDate;
@property (nonatomic, readonly) bool hasCountryCode;
@property (nonatomic) bool hasCountryCodeProvenance;
@property (nonatomic) bool hasDeleted;
@property (nonatomic, readonly) bool hasFeatureIdentifier;
@property (nonatomic) bool hasModificationDate;
@property (nonatomic, readonly) bool hasSyncIdentity;
@property (nonatomic, readonly) bool hasUuid;
@property (nonatomic) bool hasVersion;
@property (nonatomic) double modificationDate;
@property (nonatomic, retain) HDCodableSyncIdentity *syncIdentity;
@property (nonatomic, retain) NSData *uuid;
@property (nonatomic) long long version;

- (void).cxx_destruct;
- (double)completionDate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (long long)countryCodeProvenance;
- (id)decodedCompletionDate;
- (id)decodedModificationDate;
- (id)decodedUUID;
- (bool)deleted;
- (id)description;
- (id)dictionaryRepresentation;
- (id)featureIdentifier;
- (bool)hasCompletionDate;
- (bool)hasCountryCode;
- (bool)hasCountryCodeProvenance;
- (bool)hasDeleted;
- (bool)hasFeatureIdentifier;
- (bool)hasModificationDate;
- (bool)hasSyncIdentity;
- (bool)hasUuid;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isValidWithError:(id*)arg1;
- (void)mergeFrom:(id)arg1;
- (double)modificationDate;
- (bool)readFrom:(id)arg1;
- (void)setCompletionDate:(double)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setCountryCodeProvenance:(long long)arg1;
- (void)setDeleted:(bool)arg1;
- (void)setFeatureIdentifier:(id)arg1;
- (void)setHasCompletionDate:(bool)arg1;
- (void)setHasCountryCodeProvenance:(bool)arg1;
- (void)setHasDeleted:(bool)arg1;
- (void)setHasModificationDate:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setModificationDate:(double)arg1;
- (void)setSyncIdentity:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setVersion:(long long)arg1;
- (id)syncIdentity;
- (id)uuid;
- (long long)version;
- (void)writeTo:(id)arg1;

@end
