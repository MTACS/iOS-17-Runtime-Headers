
@interface GEORPPostedBy : PBCodable <NSCopying> {
    struct { 
        unsigned int has_role : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_nickname : 1; 
        unsigned int read_userDsid : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _nickname;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _role;
    PBUnknownFields * _unknownFields;
    NSString * _userDsid;
}

@property (nonatomic, readonly) bool hasNickname;
@property (nonatomic) bool hasRole;
@property (nonatomic, readonly) bool hasUserDsid;
@property (nonatomic, retain) NSString *nickname;
@property (nonatomic) int role;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSString *userDsid;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsRole:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNickname;
- (bool)hasRole;
- (bool)hasUserDsid;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)nickname;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (int)role;
- (id)roleAsString:(int)arg1;
- (void)setHasRole:(bool)arg1;
- (void)setNickname:(id)arg1;
- (void)setRole:(int)arg1;
- (void)setUserDsid:(id)arg1;
- (id)unknownFields;
- (id)userDsid;
- (void)writeTo:(id)arg1;

@end
