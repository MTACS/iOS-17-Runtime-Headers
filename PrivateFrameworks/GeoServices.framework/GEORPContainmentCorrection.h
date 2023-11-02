
@interface GEORPContainmentCorrection : PBCodable <NSCopying> {
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _addedMuids;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_addedMuids : 1; 
        unsigned int read_originalMuids : 1; 
        unsigned int read_removedMuids : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _originalMuids;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _removedMuids;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) unsigned long long*addedMuids;
@property (nonatomic, readonly) unsigned long long addedMuidsCount;
@property (nonatomic, readonly) unsigned long long*originalMuids;
@property (nonatomic, readonly) unsigned long long originalMuidsCount;
@property (nonatomic, readonly) unsigned long long*removedMuids;
@property (nonatomic, readonly) unsigned long long removedMuidsCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addAddedMuid:(unsigned long long)arg1;
- (void)addOriginalMuid:(unsigned long long)arg1;
- (void)addRemovedMuid:(unsigned long long)arg1;
- (unsigned long long)addedMuidAtIndex:(unsigned long long)arg1;
- (unsigned long long*)addedMuids;
- (unsigned long long)addedMuidsCount;
- (void)clearAddedMuids;
- (void)clearOriginalMuids;
- (void)clearRemovedMuids;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)originalMuidAtIndex:(unsigned long long)arg1;
- (unsigned long long*)originalMuids;
- (unsigned long long)originalMuidsCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)removedMuidAtIndex:(unsigned long long)arg1;
- (unsigned long long*)removedMuids;
- (unsigned long long)removedMuidsCount;
- (void)setAddedMuids:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setOriginalMuids:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setRemovedMuids:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
