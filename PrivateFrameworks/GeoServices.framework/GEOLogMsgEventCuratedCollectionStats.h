
@interface GEOLogMsgEventCuratedCollectionStats : PBCodable <NSCopying> {
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _savedCollectionMuids;
}

@property (nonatomic, readonly) unsigned long long*savedCollectionMuids;
@property (nonatomic, readonly) unsigned long long savedCollectionMuidsCount;

+ (bool)isValid:(id)arg1;

- (void)addSavedCollectionMuids:(unsigned long long)arg1;
- (void)clearSavedCollectionMuids;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long*)savedCollectionMuids;
- (unsigned long long)savedCollectionMuidsAtIndex:(unsigned long long)arg1;
- (unsigned long long)savedCollectionMuidsCount;
- (void)setSavedCollectionMuids:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end
