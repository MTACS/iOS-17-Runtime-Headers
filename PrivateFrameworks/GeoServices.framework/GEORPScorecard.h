
@interface GEORPScorecard : PBCodable <NSCopying> {
    NSMutableArray * _categoryRatings;
    struct { 
        unsigned int has_recommended : 1; 
        unsigned int read_categoryRatings : 1; 
        unsigned int read_version : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    bool  _recommended;
    NSString * _version;
}

@property (nonatomic, retain) NSMutableArray *categoryRatings;
@property (nonatomic) bool hasRecommended;
@property (nonatomic, readonly) bool hasVersion;
@property (nonatomic) bool recommended;
@property (nonatomic, retain) NSString *version;

+ (Class)categoryRatingsType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addCategoryRatings:(id)arg1;
- (id)categoryRatings;
- (id)categoryRatingsAtIndex:(unsigned long long)arg1;
- (unsigned long long)categoryRatingsCount;
- (void)clearCategoryRatings;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRecommended;
- (bool)hasVersion;
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
- (bool)recommended;
- (void)setCategoryRatings:(id)arg1;
- (void)setHasRecommended:(bool)arg1;
- (void)setRecommended:(bool)arg1;
- (void)setVersion:(id)arg1;
- (id)version;
- (void)writeTo:(id)arg1;

@end
