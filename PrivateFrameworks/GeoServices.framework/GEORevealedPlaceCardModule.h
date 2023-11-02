
@interface GEORevealedPlaceCardModule : PBCodable <NSCopying> {
    struct { 
        unsigned int has_type : 1; 
        unsigned int read_hours : 1; 
        unsigned int read_infos : 1; 
        unsigned int read_photos : 1; 
        unsigned int read_showcase : 1; 
        unsigned int read_title : 1; 
        unsigned int read_unifiedActionRow : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEORevealedPlaceCardModuleTypeHours * _hours;
    GEORevealedPlaceCardModuleTypeInfos * _infos;
    GEORevealedPlaceCardModuleTypePhotos * _photos;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEORevealedPlaceCardModuleTypeShowcase * _showcase;
    GEORevealedPlaceCardModuleTypeTitle * _title;
    int  _type;
    GEORevealedPlaceCardModuleTypeUnifiedActionRow * _unifiedActionRow;
}

@property (nonatomic, readonly) bool hasHours;
@property (nonatomic, readonly) bool hasInfos;
@property (nonatomic, readonly) bool hasPhotos;
@property (nonatomic, readonly) bool hasShowcase;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic) bool hasType;
@property (nonatomic, readonly) bool hasUnifiedActionRow;
@property (nonatomic, retain) GEORevealedPlaceCardModuleTypeHours *hours;
@property (nonatomic, retain) GEORevealedPlaceCardModuleTypeInfos *infos;
@property (nonatomic, retain) GEORevealedPlaceCardModuleTypePhotos *photos;
@property (nonatomic, retain) GEORevealedPlaceCardModuleTypeShowcase *showcase;
@property (nonatomic, retain) GEORevealedPlaceCardModuleTypeTitle *title;
@property (nonatomic) int type;
@property (nonatomic, retain) GEORevealedPlaceCardModuleTypeUnifiedActionRow *unifiedActionRow;

+ (bool)isValid:(id)arg1;
+ (id)moduleWithType:(int)arg1;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHours;
- (bool)hasInfos;
- (bool)hasPhotos;
- (bool)hasShowcase;
- (bool)hasTitle;
- (bool)hasType;
- (bool)hasUnifiedActionRow;
- (unsigned long long)hash;
- (id)hours;
- (id)infos;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)photos;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHours:(id)arg1;
- (void)setInfos:(id)arg1;
- (void)setPhotos:(id)arg1;
- (void)setShowcase:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(int)arg1;
- (void)setUnifiedActionRow:(id)arg1;
- (id)showcase;
- (id)title;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)unifiedActionRow;
- (void)writeTo:(id)arg1;

@end
