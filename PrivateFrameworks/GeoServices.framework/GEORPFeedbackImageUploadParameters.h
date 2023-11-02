
@interface GEORPFeedbackImageUploadParameters : PBCodable <NSCopying> {
    struct { 
        unsigned int has_isEnrichment : 1; 
    }  _flags;
    NSMutableArray * _images;
    bool  _isEnrichment;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasIsEnrichment;
@property (nonatomic, retain) NSMutableArray *images;
@property (nonatomic) bool isEnrichment;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)imageType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addImage:(id)arg1;
- (void)clearImages;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasIsEnrichment;
- (unsigned long long)hash;
- (id)imageAtIndex:(unsigned long long)arg1;
- (id)images;
- (unsigned long long)imagesCount;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEnrichment;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsEnrichment:(bool)arg1;
- (void)setImages:(id)arg1;
- (void)setIsEnrichment:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
