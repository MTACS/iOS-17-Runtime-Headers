
@interface GEORPThirdPartyPhotoSharingPreferenceUpdateResult : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _errors;
    struct { 
        unsigned int read_errors : 1; 
        unsigned int read_preference : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEORPThirdPartyPhotoSharingPreference * _preference;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, readonly) int*errors;
@property (nonatomic, readonly) unsigned long long errorsCount;
@property (nonatomic, readonly) bool hasPreference;
@property (nonatomic, retain) GEORPThirdPartyPhotoSharingPreference *preference;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsErrors:(id)arg1;
- (void)addErrors:(int)arg1;
- (void)clearErrors;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int*)errors;
- (id)errorsAsString:(int)arg1;
- (int)errorsAtIndex:(unsigned long long)arg1;
- (unsigned long long)errorsCount;
- (bool)hasPreference;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)preference;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setErrors:(int*)arg1 count:(unsigned long long)arg2;
- (void)setPreference:(id)arg1;
- (void)writeTo:(id)arg1;

@end
