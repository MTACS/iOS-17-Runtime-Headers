
@interface CKDPZoneRetrieveChangesResponseChangedZone : PBCodable <NSCopying> {
    CKDPAnonymousZoneInfo * _anonymousZoneInfo;
    CKDPZoneCapabilities * _capabilities;
    int  _changeType;
    int  _deleteType;
    struct { 
        unsigned int changeType : 1; 
        unsigned int deleteType : 1; 
        unsigned int isAnonymous : 1; 
    }  _has;
    bool  _isAnonymous;
    CKDPRecordZoneIdentifier * _zoneIdentifier;
}

@property (nonatomic, retain) CKDPAnonymousZoneInfo *anonymousZoneInfo;
@property (nonatomic, retain) CKDPZoneCapabilities *capabilities;
@property (nonatomic) int changeType;
@property (nonatomic) int deleteType;
@property (nonatomic, readonly) bool hasAnonymousZoneInfo;
@property (nonatomic, readonly) bool hasCapabilities;
@property (nonatomic) bool hasChangeType;
@property (nonatomic) bool hasDeleteType;
@property (nonatomic) bool hasIsAnonymous;
@property (nonatomic, readonly) bool hasZoneIdentifier;
@property (nonatomic) bool isAnonymous;
@property (nonatomic, retain) CKDPRecordZoneIdentifier *zoneIdentifier;

- (void).cxx_destruct;
- (int)StringAsChangeType:(id)arg1;
- (int)StringAsDeleteType:(id)arg1;
- (id)anonymousZoneInfo;
- (id)capabilities;
- (int)changeType;
- (id)changeTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)deleteType;
- (id)deleteTypeAsString:(int)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAnonymousZoneInfo;
- (bool)hasCapabilities;
- (bool)hasChangeType;
- (bool)hasDeleteType;
- (bool)hasIsAnonymous;
- (bool)hasZoneIdentifier;
- (unsigned long long)hash;
- (bool)isAnonymous;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAnonymousZoneInfo:(id)arg1;
- (void)setCapabilities:(id)arg1;
- (void)setChangeType:(int)arg1;
- (void)setDeleteType:(int)arg1;
- (void)setHasChangeType:(bool)arg1;
- (void)setHasDeleteType:(bool)arg1;
- (void)setHasIsAnonymous:(bool)arg1;
- (void)setIsAnonymous:(bool)arg1;
- (void)setZoneIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)zoneIdentifier;

@end
