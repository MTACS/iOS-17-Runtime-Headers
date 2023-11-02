
@interface RRSchemaProvisionalRRAnnotatedEntity : SISchemaInstrumentationMessage {
    NSArray * _annotations;
    RRSchemaProvisionalRRGroupIdentifier * _group;
    struct { 
        unsigned int saliencyScore : 1; 
        unsigned int saliencyComputedAtTimestampInSeconds : 1; 
        unsigned int hasReference : 1; 
    }  _has;
    bool  _hasGroup;
    bool  _hasReference;
    bool  _hasSwiftClassName;
    bool  _hasUsoGraph;
    unsigned long long  _saliencyComputedAtTimestampInSeconds;
    float  _saliencyScore;
    NSString * _swiftClassName;
    USOSchemaUSOGraph * _usoGraph;
}

@property (nonatomic, copy) NSArray *annotations;
@property (nonatomic, retain) RRSchemaProvisionalRRGroupIdentifier *group;
@property (nonatomic) bool hasGroup;
@property (nonatomic) bool hasHasReference;
@property (nonatomic) bool hasReference;
@property (nonatomic) bool hasSaliencyComputedAtTimestampInSeconds;
@property (nonatomic) bool hasSaliencyScore;
@property (nonatomic) bool hasSwiftClassName;
@property (nonatomic) bool hasUsoGraph;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned long long saliencyComputedAtTimestampInSeconds;
@property (nonatomic) float saliencyScore;
@property (nonatomic, copy) NSString *swiftClassName;
@property (nonatomic, retain) USOSchemaUSOGraph *usoGraph;

- (void).cxx_destruct;
- (void)addAnnotations:(id)arg1;
- (id)annotations;
- (id)annotationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)annotationsCount;
- (void)clearAnnotations;
- (id)dictionaryRepresentation;
- (id)group;
- (bool)hasGroup;
- (bool)hasHasReference;
- (bool)hasReference;
- (bool)hasSaliencyComputedAtTimestampInSeconds;
- (bool)hasSaliencyScore;
- (bool)hasSwiftClassName;
- (bool)hasUsoGraph;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (unsigned long long)saliencyComputedAtTimestampInSeconds;
- (float)saliencyScore;
- (void)setAnnotations:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setHasGroup:(bool)arg1;
- (void)setHasHasReference:(bool)arg1;
- (void)setHasReference:(bool)arg1;
- (void)setHasSaliencyComputedAtTimestampInSeconds:(bool)arg1;
- (void)setHasSaliencyScore:(bool)arg1;
- (void)setHasSwiftClassName:(bool)arg1;
- (void)setHasUsoGraph:(bool)arg1;
- (void)setSaliencyComputedAtTimestampInSeconds:(unsigned long long)arg1;
- (void)setSaliencyScore:(float)arg1;
- (void)setSwiftClassName:(id)arg1;
- (void)setUsoGraph:(id)arg1;
- (id)swiftClassName;
- (id)usoGraph;
- (void)writeTo:(id)arg1;

@end
