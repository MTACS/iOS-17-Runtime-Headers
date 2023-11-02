
@interface HDCodableAuthorization : PBCodable <NSCopying> {
    long long  _authorizationMode;
    long long  _authorizationRequest;
    long long  _authorizationStatus;
    struct { 
        unsigned int authorizationMode : 1; 
        unsigned int authorizationRequest : 1; 
        unsigned int authorizationStatus : 1; 
        unsigned int modificationDate : 1; 
        unsigned int modificationEpoch : 1; 
        unsigned int objectType : 1; 
    }  _has;
    double  _modificationDate;
    long long  _modificationEpoch;
    long long  _objectType;
    HDCodableSyncIdentity * _syncIdentity;
}

@property (nonatomic) long long authorizationMode;
@property (nonatomic) long long authorizationRequest;
@property (nonatomic) long long authorizationStatus;
@property (nonatomic) bool hasAuthorizationMode;
@property (nonatomic) bool hasAuthorizationRequest;
@property (nonatomic) bool hasAuthorizationStatus;
@property (nonatomic) bool hasModificationDate;
@property (nonatomic) bool hasModificationEpoch;
@property (nonatomic) bool hasObjectType;
@property (nonatomic, readonly) bool hasSyncIdentity;
@property (nonatomic) double modificationDate;
@property (nonatomic) long long modificationEpoch;
@property (nonatomic) long long objectType;
@property (nonatomic, retain) HDCodableSyncIdentity *syncIdentity;

- (void).cxx_destruct;
- (long long)_authorizationMode;
- (long long)_authorizationRequest;
- (long long)_authorizationStatus;
- (long long)_dataTypeCode;
- (id)_modificationDate;
- (void)_setAuthorizationModeWithNumber:(id)arg1;
- (void)_setAuthorizationRequestWithNumber:(id)arg1;
- (void)_setAuthorizationStatusWithNumber:(id)arg1;
- (void)_setDataTypeCodeWithObjectType:(id)arg1;
- (void)_setModificationDate:(id)arg1;
- (long long)authorizationMode;
- (long long)authorizationRequest;
- (long long)authorizationStatus;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAuthorizationMode;
- (bool)hasAuthorizationRequest;
- (bool)hasAuthorizationStatus;
- (bool)hasModificationDate;
- (bool)hasModificationEpoch;
- (bool)hasObjectType;
- (bool)hasSyncIdentity;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)modificationDate;
- (long long)modificationEpoch;
- (long long)objectType;
- (bool)readFrom:(id)arg1;
- (void)setAuthorizationMode:(long long)arg1;
- (void)setAuthorizationRequest:(long long)arg1;
- (void)setAuthorizationStatus:(long long)arg1;
- (void)setHasAuthorizationMode:(bool)arg1;
- (void)setHasAuthorizationRequest:(bool)arg1;
- (void)setHasAuthorizationStatus:(bool)arg1;
- (void)setHasModificationDate:(bool)arg1;
- (void)setHasModificationEpoch:(bool)arg1;
- (void)setHasObjectType:(bool)arg1;
- (void)setModificationDate:(double)arg1;
- (void)setModificationEpoch:(long long)arg1;
- (void)setObjectType:(long long)arg1;
- (void)setSyncIdentity:(id)arg1;
- (id)syncIdentity;
- (void)writeTo:(id)arg1;

@end
