
@interface HDCloudSyncCodableChange : PBCodable <NSCopying> {
    HDCodableSyncAnchorRangeMap * _anchorRangeMap;
    long long  _changeIndex;
    long long  _changeSize;
    bool  _finalForSequence;
    struct { 
        unsigned int changeIndex : 1; 
        unsigned int changeSize : 1; 
        unsigned int protocolVersion : 1; 
        unsigned int finalForSequence : 1; 
    }  _has;
    long long  _protocolVersion;
}

@property (nonatomic, retain) HDCodableSyncAnchorRangeMap *anchorRangeMap;
@property (nonatomic) long long changeIndex;
@property (nonatomic) long long changeSize;
@property (nonatomic) bool finalForSequence;
@property (nonatomic, readonly) bool hasAnchorRangeMap;
@property (nonatomic) bool hasChangeIndex;
@property (nonatomic) bool hasChangeSize;
@property (nonatomic) bool hasFinalForSequence;
@property (nonatomic) bool hasProtocolVersion;
@property (nonatomic) long long protocolVersion;

- (void).cxx_destruct;
- (id)anchorRangeMap;
- (long long)changeIndex;
- (long long)changeSize;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)finalForSequence;
- (bool)hasAnchorRangeMap;
- (bool)hasChangeIndex;
- (bool)hasChangeSize;
- (bool)hasFinalForSequence;
- (bool)hasProtocolVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)protocolVersion;
- (bool)readFrom:(id)arg1;
- (void)setAnchorRangeMap:(id)arg1;
- (void)setChangeIndex:(long long)arg1;
- (void)setChangeSize:(long long)arg1;
- (void)setFinalForSequence:(bool)arg1;
- (void)setHasChangeIndex:(bool)arg1;
- (void)setHasChangeSize:(bool)arg1;
- (void)setHasFinalForSequence:(bool)arg1;
- (void)setHasProtocolVersion:(bool)arg1;
- (void)setProtocolVersion:(long long)arg1;
- (void)writeTo:(id)arg1;

@end
