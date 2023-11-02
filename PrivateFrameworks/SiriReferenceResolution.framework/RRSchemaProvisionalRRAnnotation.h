
@interface RRSchemaProvisionalRRAnnotation : SISchemaInstrumentationMessage {
    unsigned long long  _annotationAddedTimestampInSeconds;
    struct { 
        unsigned int name : 1; 
        unsigned int annotationAddedTimestampInSeconds : 1; 
    }  _has;
    int  _name;
}

@property (nonatomic) unsigned long long annotationAddedTimestampInSeconds;
@property (nonatomic) bool hasAnnotationAddedTimestampInSeconds;
@property (nonatomic) bool hasName;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int name;

- (unsigned long long)annotationAddedTimestampInSeconds;
- (id)dictionaryRepresentation;
- (bool)hasAnnotationAddedTimestampInSeconds;
- (bool)hasName;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)name;
- (bool)readFrom:(id)arg1;
- (void)setAnnotationAddedTimestampInSeconds:(unsigned long long)arg1;
- (void)setHasAnnotationAddedTimestampInSeconds:(bool)arg1;
- (void)setHasName:(bool)arg1;
- (void)setName:(int)arg1;
- (void)writeTo:(id)arg1;

@end
