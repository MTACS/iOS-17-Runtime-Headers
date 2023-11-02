
@interface GEOAsset : PBCodable <NSCopying> {
    struct { 
        unsigned int has_scaleFactor : 1; 
    }  _flags;
    int  _scaleFactor;
    PBUnknownFields * _unknownFields;
    NSString * _url;
}

@property (nonatomic) bool hasScaleFactor;
@property (nonatomic, readonly) bool hasUrl;
@property (nonatomic) int scaleFactor;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSString *url;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsScaleFactor:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasScaleFactor;
- (bool)hasUrl;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (int)scaleFactor;
- (id)scaleFactorAsString:(int)arg1;
- (void)setHasScaleFactor:(bool)arg1;
- (void)setScaleFactor:(int)arg1;
- (void)setUrl:(id)arg1;
- (id)unknownFields;
- (id)url;
- (void)writeTo:(id)arg1;

@end
