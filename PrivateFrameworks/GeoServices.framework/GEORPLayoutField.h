
@interface GEORPLayoutField : PBCodable <NSCopying> {
    NSString * _displayText;
    bool  _enabled;
    struct { 
        unsigned int has_ordinal : 1; 
        unsigned int has_type : 1; 
        unsigned int has_enabled : 1; 
        unsigned int read_displayText : 1; 
        unsigned int read_name : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEORPFeedbackLayoutFieldName * _name;
    unsigned int  _ordinal;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _type;
}

@property (nonatomic, retain) NSString *displayText;
@property (nonatomic) bool enabled;
@property (nonatomic, readonly) bool hasDisplayText;
@property (nonatomic) bool hasEnabled;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic) bool hasOrdinal;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) GEORPFeedbackLayoutFieldName *name;
@property (nonatomic) unsigned int ordinal;
@property (nonatomic) int type;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayText;
- (bool)enabled;
- (bool)hasDisplayText;
- (bool)hasEnabled;
- (bool)hasName;
- (bool)hasOrdinal;
- (bool)hasType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (unsigned int)ordinal;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDisplayText:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHasEnabled:(bool)arg1;
- (void)setHasOrdinal:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setOrdinal:(unsigned int)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
