
@interface GEORPFeedbackLayoutFormConfig : PBCodable <NSCopying> {
    bool  _enabled;
    struct { 
        unsigned int has_formType : 1; 
        unsigned int has_radius : 1; 
        unsigned int has_ttl : 1; 
        unsigned int has_enabled : 1; 
    }  _flags;
    int  _formType;
    NSMutableArray * _layoutFields;
    unsigned int  _radius;
    unsigned int  _ttl;
}

@property (nonatomic) bool enabled;
@property (nonatomic) int formType;
@property (nonatomic) bool hasEnabled;
@property (nonatomic) bool hasFormType;
@property (nonatomic) bool hasRadius;
@property (nonatomic) bool hasTtl;
@property (nonatomic, retain) NSMutableArray *layoutFields;
@property (nonatomic) unsigned int radius;
@property (nonatomic) unsigned int ttl;

+ (bool)isValid:(id)arg1;
+ (Class)layoutFieldType;

- (void).cxx_destruct;
- (int)StringAsFormType:(id)arg1;
- (void)addLayoutField:(id)arg1;
- (void)clearLayoutFields;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)enabled;
- (int)formType;
- (id)formTypeAsString:(int)arg1;
- (bool)hasEnabled;
- (bool)hasFormType;
- (bool)hasRadius;
- (bool)hasTtl;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)layoutFieldAtIndex:(unsigned long long)arg1;
- (id)layoutFields;
- (unsigned long long)layoutFieldsCount;
- (void)mergeFrom:(id)arg1;
- (unsigned int)radius;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFormType:(int)arg1;
- (void)setHasEnabled:(bool)arg1;
- (void)setHasFormType:(bool)arg1;
- (void)setHasRadius:(bool)arg1;
- (void)setHasTtl:(bool)arg1;
- (void)setLayoutFields:(id)arg1;
- (void)setRadius:(unsigned int)arg1;
- (void)setTtl:(unsigned int)arg1;
- (unsigned int)ttl;
- (void)writeTo:(id)arg1;

@end
