
@interface GEOAvailableAnnouncements : PBCodable <NSCopying> {
    NSMutableArray * _announcements;
    struct { 
        unsigned int read_announcements : 1; 
        unsigned int read_languageCode : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _languageCode;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, retain) NSMutableArray *announcements;
@property (nonatomic, readonly) bool hasLanguageCode;
@property (nonatomic, retain) NSString *languageCode;

+ (Class)announcementType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addAnnouncement:(id)arg1;
- (id)announcementAtIndex:(unsigned long long)arg1;
- (id)announcements;
- (unsigned long long)announcementsCount;
- (void)clearAnnouncements;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasLanguageCode;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)languageCode;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAnnouncements:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)writeTo:(id)arg1;

@end
