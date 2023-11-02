
@interface GEORPFeedbackFormField : PBCodable <NSCopying> {
    GEORPFeedbackFormFieldAnnotations * _annotations;
    NSString * _fieldId;
    struct { 
        unsigned int has_name : 1; 
        unsigned int read_annotations : 1; 
        unsigned int read_fieldId : 1; 
        unsigned int read_formId : 1; 
        unsigned int read_parentFieldId : 1; 
        unsigned int read_tags : 1; 
        unsigned int read_value : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _formId;
    int  _name;
    NSString * _parentFieldId;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _tags;
    GEORPFeedbackFieldValue * _value;
}

@property (nonatomic, retain) GEORPFeedbackFormFieldAnnotations *annotations;
@property (nonatomic, retain) NSString *fieldId;
@property (nonatomic, retain) NSString *formId;
@property (nonatomic, readonly) bool hasAnnotations;
@property (nonatomic, readonly) bool hasFieldId;
@property (nonatomic, readonly) bool hasFormId;
@property (nonatomic) bool hasName;
@property (nonatomic, readonly) bool hasParentFieldId;
@property (nonatomic, readonly) bool hasValue;
@property (nonatomic) int name;
@property (nonatomic, retain) NSString *parentFieldId;
@property (nonatomic, retain) NSMutableArray *tags;
@property (nonatomic, retain) GEORPFeedbackFieldValue *value;

+ (bool)isValid:(id)arg1;
+ (Class)tagType;

- (void).cxx_destruct;
- (int)StringAsName:(id)arg1;
- (void)addTag:(id)arg1;
- (id)annotations;
- (void)clearTags;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fieldId;
- (id)formId;
- (bool)hasAnnotations;
- (bool)hasFieldId;
- (bool)hasFormId;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasName;
- (bool)hasParentFieldId;
- (bool)hasValue;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (int)name;
- (id)nameAsString:(int)arg1;
- (id)parentFieldId;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAnnotations:(id)arg1;
- (void)setFieldId:(id)arg1;
- (void)setFormId:(id)arg1;
- (void)setHasName:(bool)arg1;
- (void)setName:(int)arg1;
- (void)setParentFieldId:(id)arg1;
- (void)setTags:(id)arg1;
- (void)setValue:(id)arg1;
- (id)tagAtIndex:(unsigned long long)arg1;
- (id)tags;
- (unsigned long long)tagsCount;
- (id)value;
- (void)writeTo:(id)arg1;

@end
