
@interface CKDPZoneCapabilities : PBCodable <NSCopying> {
    bool  _atomicSaves;
    bool  _ckql;
    bool  _fetchChanges;
    struct { 
        unsigned int sharingType : 1; 
        unsigned int atomicSaves : 1; 
        unsigned int ckql : 1; 
        unsigned int fetchChanges : 1; 
        unsigned int hierarchicalSharing : 1; 
        unsigned int zoneSharing : 1; 
    }  _has;
    bool  _hierarchicalSharing;
    int  _sharingType;
    bool  _zoneSharing;
}

@property (nonatomic) bool atomicSaves;
@property (nonatomic) bool ckql;
@property (nonatomic) bool fetchChanges;
@property (nonatomic) bool hasAtomicSaves;
@property (nonatomic) bool hasCkql;
@property (nonatomic) bool hasFetchChanges;
@property (nonatomic) bool hasHierarchicalSharing;
@property (nonatomic) bool hasSharingType;
@property (nonatomic) bool hasZoneSharing;
@property (nonatomic) bool hierarchicalSharing;
@property (nonatomic) int sharingType;
@property (nonatomic) bool zoneSharing;

- (int)StringAsSharingType:(id)arg1;
- (bool)atomicSaves;
- (bool)ckql;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)fetchChanges;
- (bool)hasAtomicSaves;
- (bool)hasCkql;
- (bool)hasFetchChanges;
- (bool)hasHierarchicalSharing;
- (bool)hasSharingType;
- (bool)hasZoneSharing;
- (unsigned long long)hash;
- (bool)hierarchicalSharing;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAtomicSaves:(bool)arg1;
- (void)setCkql:(bool)arg1;
- (void)setFetchChanges:(bool)arg1;
- (void)setHasAtomicSaves:(bool)arg1;
- (void)setHasCkql:(bool)arg1;
- (void)setHasFetchChanges:(bool)arg1;
- (void)setHasHierarchicalSharing:(bool)arg1;
- (void)setHasSharingType:(bool)arg1;
- (void)setHasZoneSharing:(bool)arg1;
- (void)setHierarchicalSharing:(bool)arg1;
- (void)setSharingType:(int)arg1;
- (void)setZoneSharing:(bool)arg1;
- (int)sharingType;
- (id)sharingTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;
- (bool)zoneSharing;

@end
