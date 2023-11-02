
@interface GEOConditionalFormattedString : PBCodable <GEOServerConditionalString, NSCopying> {
    GEOCondition * _condition;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_condition : 1; 
        unsigned int read_formattedString : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOFormattedString * _formattedString;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) <GEOServerCondition> *condition;
@property (nonatomic, retain) GEOCondition *condition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <GEOServerFormattedString> *formattedString;
@property (nonatomic, retain) GEOFormattedString *formattedString;
@property (nonatomic, readonly) bool hasCondition;
@property (nonatomic, readonly) bool hasFormattedString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (id)condition;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)formattedString;
- (bool)hasCondition;
- (bool)hasFormattedString;
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
- (void)setCondition:(id)arg1;
- (void)setFormattedString:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
