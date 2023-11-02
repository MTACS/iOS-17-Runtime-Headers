
@interface HDCodableSharingRelationship : PBCodable <NSCopying> {
    NSMutableArray * _authorizationIdentifiers;
    double  _dateModified;
    struct { 
        unsigned int dateModified : 1; 
        unsigned int recipientType : 1; 
    }  _has;
    NSString * _recipientIdentifier;
    int  _recipientType;
    NSMutableArray * _sharingAuthorizations;
    HDCodableSyncIdentity * _syncIdentity;
}

@property (nonatomic, retain) NSMutableArray *authorizationIdentifiers;
@property (nonatomic) double dateModified;
@property (nonatomic) bool hasDateModified;
@property (nonatomic, readonly) bool hasRecipientIdentifier;
@property (nonatomic) bool hasRecipientType;
@property (nonatomic, readonly) bool hasSyncIdentity;
@property (nonatomic, retain) NSString *recipientIdentifier;
@property (nonatomic) int recipientType;
@property (nonatomic, retain) NSMutableArray *sharingAuthorizations;
@property (nonatomic, retain) HDCodableSyncIdentity *syncIdentity;

+ (Class)authorizationIdentifiersType;
+ (Class)sharingAuthorizationsType;

- (void).cxx_destruct;
- (int)StringAsRecipientType:(id)arg1;
- (void)addAuthorizationIdentifiers:(id)arg1;
- (void)addSharingAuthorizations:(id)arg1;
- (id)authorizationIdentifiers;
- (id)authorizationIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)authorizationIdentifiersCount;
- (void)clearAuthorizationIdentifiers;
- (void)clearSharingAuthorizations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)dateModified;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDateModified;
- (bool)hasRecipientIdentifier;
- (bool)hasRecipientType;
- (bool)hasSyncIdentity;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)recipientIdentifier;
- (int)recipientType;
- (id)recipientTypeAsString:(int)arg1;
- (void)setAuthorizationIdentifiers:(id)arg1;
- (void)setDateModified:(double)arg1;
- (void)setHasDateModified:(bool)arg1;
- (void)setHasRecipientType:(bool)arg1;
- (void)setRecipientIdentifier:(id)arg1;
- (void)setRecipientType:(int)arg1;
- (void)setSharingAuthorizations:(id)arg1;
- (void)setSyncIdentity:(id)arg1;
- (id)sharingAuthorizations;
- (id)sharingAuthorizationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sharingAuthorizationsCount;
- (id)syncIdentity;
- (void)writeTo:(id)arg1;

@end
