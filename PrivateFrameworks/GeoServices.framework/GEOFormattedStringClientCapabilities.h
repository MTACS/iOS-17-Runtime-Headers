
@interface GEOFormattedStringClientCapabilities : PBCodable <NSCopying> {
    bool  _concatenatingFormatStringsSupported;
    struct { 
        unsigned int has_concatenatingFormatStringsSupported : 1; 
        unsigned int has_styleSupported : 1; 
        unsigned int has_timestampFormatPatternSupported : 1; 
    }  _flags;
    bool  _styleSupported;
    bool  _timestampFormatPatternSupported;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool concatenatingFormatStringsSupported;
@property (nonatomic) bool hasConcatenatingFormatStringsSupported;
@property (nonatomic) bool hasStyleSupported;
@property (nonatomic) bool hasTimestampFormatPatternSupported;
@property (nonatomic) bool styleSupported;
@property (nonatomic) bool timestampFormatPatternSupported;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (bool)concatenatingFormatStringsSupported;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConcatenatingFormatStringsSupported;
- (bool)hasStyleSupported;
- (bool)hasTimestampFormatPatternSupported;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConcatenatingFormatStringsSupported:(bool)arg1;
- (void)setHasConcatenatingFormatStringsSupported:(bool)arg1;
- (void)setHasStyleSupported:(bool)arg1;
- (void)setHasTimestampFormatPatternSupported:(bool)arg1;
- (void)setStyleSupported:(bool)arg1;
- (void)setTimestampFormatPatternSupported:(bool)arg1;
- (bool)styleSupported;
- (bool)timestampFormatPatternSupported;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
