
@interface HDCodableFHIRCredential : PBCodable <NSCopying> {
    NSData * _accountSyncIdentifier;
    bool  _deleted;
    double  _expirationDate;
    struct { 
        unsigned int expirationDate : 1; 
        unsigned int receivedDate : 1; 
        unsigned int deleted : 1; 
    }  _has;
    NSData * _identifier;
    HDCodableMessageVersion * _messageVersion;
    NSString * _patientID;
    double  _receivedDate;
    NSString * _requestedScopeString;
    NSString * _scopeString;
    HDCodableSyncIdentity * _syncIdentity;
}

@property (nonatomic, retain) NSData *accountSyncIdentifier;
@property (nonatomic) bool deleted;
@property (nonatomic) double expirationDate;
@property (nonatomic, readonly) bool hasAccountSyncIdentifier;
@property (nonatomic) bool hasDeleted;
@property (nonatomic) bool hasExpirationDate;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasMessageVersion;
@property (nonatomic, readonly) bool hasPatientID;
@property (nonatomic) bool hasReceivedDate;
@property (nonatomic, readonly) bool hasRequestedScopeString;
@property (nonatomic, readonly) bool hasScopeString;
@property (nonatomic, readonly) bool hasSyncIdentity;
@property (nonatomic, retain) NSData *identifier;
@property (nonatomic, retain) HDCodableMessageVersion *messageVersion;
@property (nonatomic, retain) NSString *patientID;
@property (nonatomic) double receivedDate;
@property (nonatomic, retain) NSString *requestedScopeString;
@property (nonatomic, retain) NSString *scopeString;
@property (nonatomic, retain) HDCodableSyncIdentity *syncIdentity;

- (void).cxx_destruct;
- (id)accountSyncIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)deleted;
- (id)description;
- (id)dictionaryRepresentation;
- (double)expirationDate;
- (bool)hasAccountSyncIdentifier;
- (bool)hasDeleted;
- (bool)hasExpirationDate;
- (bool)hasIdentifier;
- (bool)hasMessageVersion;
- (bool)hasPatientID;
- (bool)hasReceivedDate;
- (bool)hasRequestedScopeString;
- (bool)hasScopeString;
- (bool)hasSyncIdentity;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)messageVersion;
- (id)patientID;
- (bool)readFrom:(id)arg1;
- (double)receivedDate;
- (id)requestedScopeString;
- (id)scopeString;
- (void)setAccountSyncIdentifier:(id)arg1;
- (void)setDeleted:(bool)arg1;
- (void)setExpirationDate:(double)arg1;
- (void)setHasDeleted:(bool)arg1;
- (void)setHasExpirationDate:(bool)arg1;
- (void)setHasReceivedDate:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMessageVersion:(id)arg1;
- (void)setPatientID:(id)arg1;
- (void)setReceivedDate:(double)arg1;
- (void)setRequestedScopeString:(id)arg1;
- (void)setScopeString:(id)arg1;
- (void)setSyncIdentity:(id)arg1;
- (id)syncIdentity;
- (void)writeTo:(id)arg1;

@end
