
@interface BRFieldCKInfo : PBCodable <NSCopying, PQLValuable> {
    NSData * _deletionChangeToken;
    NSString * _etag;
    NSString * _etagBeforeCrossZoneMove;
    struct { 
        unsigned int knownToServer : 1; 
        unsigned int wasCached : 1; 
    }  _has;
    bool  _knownToServer;
    bool  _wasCached;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSData *deletionChangeToken;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *etag;
@property (nonatomic, retain) NSString *etagBeforeCrossZoneMove;
@property (nonatomic, readonly) bool hasDeletionChangeToken;
@property (nonatomic, readonly) bool hasEtag;
@property (nonatomic, readonly) bool hasEtagBeforeCrossZoneMove;
@property (nonatomic) bool hasKnownToServer;
@property (nonatomic) bool hasWasCached;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool knownToServer;
@property (readonly) Class superclass;
@property (nonatomic) bool wasCached;

+ (id)newFromSqliteStatement:(struct sqlite3_stmt { }*)arg1 atIndex:(int)arg2;
+ (id)newFromSqliteValue:(struct sqlite3_value { }*)arg1;

- (void).cxx_destruct;
- (void)clearCrossZoneMoveEtag;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deletionChangeToken;
- (id)description;
- (id)dictionaryRepresentation;
- (id)etag;
- (id)etagBeforeCrossZoneMove;
- (bool)hasDeletionChangeToken;
- (bool)hasEtag;
- (bool)hasEtagBeforeCrossZoneMove;
- (bool)hasKnownToServer;
- (bool)hasWasCached;
- (unsigned long long)hash;
- (id)initWithRecord:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)knownToServer;
- (void)markCrossZoneMoved;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)revertEtagsForOldZoneTombstone;
- (void)setCKInfoFieldsInRecord:(id)arg1 includeCZMEtag:(bool)arg2;
- (void)setDeletionChangeToken:(id)arg1;
- (void)setEtag:(id)arg1;
- (void)setEtagBeforeCrossZoneMove:(id)arg1;
- (void)setHasKnownToServer:(bool)arg1;
- (void)setHasWasCached:(bool)arg1;
- (void)setKnownToServer:(bool)arg1;
- (void)setWasCached:(bool)arg1;
- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;
- (bool)wasCached;
- (void)writeTo:(id)arg1;

@end
