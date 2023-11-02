
@interface GEOCachedCategorySuggestionsPlaceResponse : PBCodable <NSCopying> {
    NSString * _countryCode;
    struct { 
        unsigned int has_timestamp : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_countryCode : 1; 
        unsigned int read_language : 1; 
        unsigned int read_response : 1; 
        unsigned int read_sourceURL : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _language;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOPDPlaceResponse * _response;
    NSString * _sourceURL;
    double  _timestamp;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *countryCode;
@property (nonatomic, readonly) bool hasCountryCode;
@property (nonatomic, readonly) bool hasLanguage;
@property (nonatomic, readonly) bool hasResponse;
@property (nonatomic, readonly) bool hasSourceURL;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSString *language;
@property (nonatomic, retain) GEOPDPlaceResponse *response;
@property (nonatomic, retain) NSString *sourceURL;
@property (nonatomic) double timestamp;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCountryCode;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasLanguage;
- (bool)hasResponse;
- (bool)hasSourceURL;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)language;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)response;
- (void)setCountryCode:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setLanguage:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setSourceURL:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (id)sourceURL;
- (double)timestamp;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
