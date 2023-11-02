
@interface HDCodableSignedClinicalDataIssuer : PBCodable <NSCopying> {
    NSString * _identifier;
    HDCodableMessageVersion * _messageVersion;
    NSString * _subtitle;
    HDCodableSyncIdentity * _syncIdentity;
    NSString * _title;
    NSString * _wellKnownURL;
}

@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasMessageVersion;
@property (nonatomic, readonly) bool hasSubtitle;
@property (nonatomic, readonly) bool hasSyncIdentity;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, readonly) bool hasWellKnownURL;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) HDCodableMessageVersion *messageVersion;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) HDCodableSyncIdentity *syncIdentity;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *wellKnownURL;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentifier;
- (bool)hasMessageVersion;
- (bool)hasSubtitle;
- (bool)hasSyncIdentity;
- (bool)hasTitle;
- (bool)hasWellKnownURL;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)messageVersion;
- (bool)readFrom:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMessageVersion:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSyncIdentity:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setWellKnownURL:(id)arg1;
- (id)subtitle;
- (id)syncIdentity;
- (id)title;
- (id)wellKnownURL;
- (void)writeTo:(id)arg1;

@end
