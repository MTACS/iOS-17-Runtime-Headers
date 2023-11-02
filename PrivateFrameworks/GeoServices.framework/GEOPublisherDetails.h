
@interface GEOPublisherDetails : PBCodable <NSCopying> {
    bool  _currentlyFollowing;
    struct { 
        unsigned int has_currentlyFollowing : 1; 
    }  _flags;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _publisherIds;
}

@property (nonatomic) bool currentlyFollowing;
@property (nonatomic) bool hasCurrentlyFollowing;
@property (nonatomic, readonly) unsigned long long*publisherIds;
@property (nonatomic, readonly) unsigned long long publisherIdsCount;

+ (bool)isValid:(id)arg1;

- (void)addPublisherId:(unsigned long long)arg1;
- (void)clearPublisherIds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)currentlyFollowing;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCurrentlyFollowing;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)publisherIdAtIndex:(unsigned long long)arg1;
- (unsigned long long*)publisherIds;
- (unsigned long long)publisherIdsCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCurrentlyFollowing:(bool)arg1;
- (void)setHasCurrentlyFollowing:(bool)arg1;
- (void)setPublisherIds:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end
