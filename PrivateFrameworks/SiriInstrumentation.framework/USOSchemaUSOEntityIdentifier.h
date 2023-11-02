
@interface USOSchemaUSOEntityIdentifier : SISchemaInstrumentationMessage {
    int  _backingAppBundleType;
    unsigned int  _groupIndex;
    struct { 
        unsigned int nodeIndex : 1; 
        unsigned int probability : 1; 
        unsigned int sourceNluComponent : 1; 
        unsigned int backingAppBundleType : 1; 
        unsigned int groupIndex : 1; 
        unsigned int interpretationGroup : 1; 
    }  _has;
    bool  _hasIdentifierNamespace;
    NSString * _identifierNamespace;
    unsigned int  _interpretationGroup;
    unsigned int  _nodeIndex;
    double  _probability;
    int  _sourceNluComponent;
}

@property (nonatomic) int backingAppBundleType;
@property (nonatomic) unsigned int groupIndex;
@property (nonatomic) bool hasBackingAppBundleType;
@property (nonatomic) bool hasGroupIndex;
@property (nonatomic) bool hasIdentifierNamespace;
@property (nonatomic) bool hasInterpretationGroup;
@property (nonatomic) bool hasNodeIndex;
@property (nonatomic) bool hasProbability;
@property (nonatomic) bool hasSourceNluComponent;
@property (nonatomic, copy) NSString *identifierNamespace;
@property (nonatomic) unsigned int interpretationGroup;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int nodeIndex;
@property (nonatomic) double probability;
@property (nonatomic) int sourceNluComponent;

- (void).cxx_destruct;
- (int)backingAppBundleType;
- (void)deleteBackingAppBundleType;
- (void)deleteGroupIndex;
- (void)deleteIdentifierNamespace;
- (void)deleteInterpretationGroup;
- (void)deleteNodeIndex;
- (void)deleteProbability;
- (void)deleteSourceNluComponent;
- (id)dictionaryRepresentation;
- (unsigned int)groupIndex;
- (bool)hasBackingAppBundleType;
- (bool)hasGroupIndex;
- (bool)hasIdentifierNamespace;
- (bool)hasInterpretationGroup;
- (bool)hasNodeIndex;
- (bool)hasProbability;
- (bool)hasSourceNluComponent;
- (unsigned long long)hash;
- (id)identifierNamespace;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (unsigned int)interpretationGroup;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)nodeIndex;
- (double)probability;
- (bool)readFrom:(id)arg1;
- (void)setBackingAppBundleType:(int)arg1;
- (void)setGroupIndex:(unsigned int)arg1;
- (void)setHasBackingAppBundleType:(bool)arg1;
- (void)setHasGroupIndex:(bool)arg1;
- (void)setHasIdentifierNamespace:(bool)arg1;
- (void)setHasInterpretationGroup:(bool)arg1;
- (void)setHasNodeIndex:(bool)arg1;
- (void)setHasProbability:(bool)arg1;
- (void)setHasSourceNluComponent:(bool)arg1;
- (void)setIdentifierNamespace:(id)arg1;
- (void)setInterpretationGroup:(unsigned int)arg1;
- (void)setNodeIndex:(unsigned int)arg1;
- (void)setProbability:(double)arg1;
- (void)setSourceNluComponent:(int)arg1;
- (int)sourceNluComponent;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
