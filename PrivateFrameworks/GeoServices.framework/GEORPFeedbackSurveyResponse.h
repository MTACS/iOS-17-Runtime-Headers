
@interface GEORPFeedbackSurveyResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_optionDescription : 1; 
        unsigned int read_optionId : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _optionDescription;
    NSString * _optionId;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasOptionDescription;
@property (nonatomic, readonly) bool hasOptionId;
@property (nonatomic, retain) NSString *optionDescription;
@property (nonatomic, retain) NSString *optionId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasOptionDescription;
- (bool)hasOptionId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)optionDescription;
- (id)optionId;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setOptionDescription:(id)arg1;
- (void)setOptionId:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
