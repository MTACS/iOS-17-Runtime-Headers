
@interface NPKProtoCatalogChangedRequest : PBRequest <NSCopying> {
    NPKProtoCatalog * _companionCatalog;
    struct { 
        unsigned int lastKnownResyncID : 1; 
        unsigned int resyncID : 1; 
        unsigned int syncID : 1; 
    }  _has;
    unsigned int  _lastKnownResyncID;
    unsigned int  _resyncID;
    unsigned int  _syncID;
    NPKProtoCatalog * _watchCatalog;
}

@property (nonatomic, retain) NPKProtoCatalog *companionCatalog;
@property (nonatomic) bool hasLastKnownResyncID;
@property (nonatomic) bool hasResyncID;
@property (nonatomic) bool hasSyncID;
@property (nonatomic, readonly) bool hasWatchCatalog;
@property (nonatomic) unsigned int lastKnownResyncID;
@property (nonatomic) unsigned int resyncID;
@property (nonatomic) unsigned int syncID;
@property (nonatomic, retain) NPKProtoCatalog *watchCatalog;

- (void).cxx_destruct;
- (id)companionCatalog;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLastKnownResyncID;
- (bool)hasResyncID;
- (bool)hasSyncID;
- (bool)hasWatchCatalog;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)lastKnownResyncID;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)resyncID;
- (void)setCompanionCatalog:(id)arg1;
- (void)setHasLastKnownResyncID:(bool)arg1;
- (void)setHasResyncID:(bool)arg1;
- (void)setHasSyncID:(bool)arg1;
- (void)setLastKnownResyncID:(unsigned int)arg1;
- (void)setResyncID:(unsigned int)arg1;
- (void)setSyncID:(unsigned int)arg1;
- (void)setWatchCatalog:(id)arg1;
- (unsigned int)syncID;
- (id)watchCatalog;
- (void)writeTo:(id)arg1;

@end
