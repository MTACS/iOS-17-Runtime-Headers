
@interface GEORestrictionInfo : PBCodable <NSCopying> {
    GEOFormattedString * _effectiveTimeRange;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_effectiveTimeRange : 1; 
        unsigned int read_restrictionDetails : 1; 
        unsigned int read_subTitleString : 1; 
        unsigned int read_titleString : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _restrictionDetails;
    GEOFormattedString * _subTitleString;
    GEOFormattedString * _titleString;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOFormattedString *effectiveTimeRange;
@property (nonatomic, readonly) bool hasEffectiveTimeRange;
@property (nonatomic, readonly) bool hasSubTitleString;
@property (nonatomic, readonly) bool hasTitleString;
@property (nonatomic, retain) NSMutableArray *restrictionDetails;
@property (nonatomic, retain) GEOFormattedString *subTitleString;
@property (nonatomic, retain) GEOFormattedString *titleString;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)restrictionDetailsType;

- (void).cxx_destruct;
- (void)addRestrictionDetails:(id)arg1;
- (void)clearRestrictionDetails;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)effectiveTimeRange;
- (bool)hasEffectiveTimeRange;
- (bool)hasSubTitleString;
- (bool)hasTitleString;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)restrictionDetails;
- (id)restrictionDetailsAtIndex:(unsigned long long)arg1;
- (unsigned long long)restrictionDetailsCount;
- (void)setEffectiveTimeRange:(id)arg1;
- (void)setRestrictionDetails:(id)arg1;
- (void)setSubTitleString:(id)arg1;
- (void)setTitleString:(id)arg1;
- (id)subTitleString;
- (id)titleString;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
