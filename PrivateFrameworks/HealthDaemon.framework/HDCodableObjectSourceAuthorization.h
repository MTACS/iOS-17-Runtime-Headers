
@interface HDCodableObjectSourceAuthorization : PBCodable <NSCopying> {
    long long  _authorizationStatus;
    struct { 
        unsigned int authorizationStatus : 1; 
        unsigned int modificationDate : 1; 
    }  _has;
    double  _modificationDate;
    NSData * _sessionUUID;
    NSData * _sourceUUID;
    HDCodableSyncIdentity * _syncIdentity;
}

@property (nonatomic) long long authorizationStatus;
@property (nonatomic) bool hasAuthorizationStatus;
@property (nonatomic) bool hasModificationDate;
@property (nonatomic, readonly) bool hasSessionUUID;
@property (nonatomic, readonly) bool hasSourceUUID;
@property (nonatomic, readonly) bool hasSyncIdentity;
@property (nonatomic) double modificationDate;
@property (nonatomic, retain) NSData *sessionUUID;
@property (nonatomic, retain) NSData *sourceUUID;
@property (nonatomic, retain) HDCodableSyncIdentity *syncIdentity;

- (void).cxx_destruct;
- (long long)authorizationStatus;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAuthorizationStatus;
- (bool)hasModificationDate;
- (bool)hasSessionUUID;
- (bool)hasSourceUUID;
- (bool)hasSyncIdentity;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)modificationDate;
- (bool)readFrom:(id)arg1;
- (id)sessionUUID;
- (void)setAuthorizationStatus:(long long)arg1;
- (void)setHasAuthorizationStatus:(bool)arg1;
- (void)setHasModificationDate:(bool)arg1;
- (void)setModificationDate:(double)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setSourceUUID:(id)arg1;
- (void)setSyncIdentity:(id)arg1;
- (id)sourceUUID;
- (id)syncIdentity;
- (void)writeTo:(id)arg1;

@end
