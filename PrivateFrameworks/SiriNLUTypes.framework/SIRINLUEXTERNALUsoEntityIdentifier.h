
@interface SIRINLUEXTERNALUsoEntityIdentifier : PBCodable <NSCopying> {
    NSString * _backingAppBundleId;
    unsigned int  _groupIndex;
    struct { 
        unsigned int groupIndex : 1; 
        unsigned int interpretationGroup : 1; 
        unsigned int nodeIndex : 1; 
        unsigned int sourceComponent : 1; 
    }  _has;
    unsigned int  _interpretationGroup;
    SIRICOMMONStringValue * _namespaceA;
    unsigned int  _nodeIndex;
    SIRICOMMONDoubleValue * _probability;
    int  _sourceComponent;
    NSString * _value;
}

@property (nonatomic, retain) NSString *backingAppBundleId;
@property (nonatomic) unsigned int groupIndex;
@property (nonatomic, readonly) bool hasBackingAppBundleId;
@property (nonatomic) bool hasGroupIndex;
@property (nonatomic) bool hasInterpretationGroup;
@property (nonatomic, readonly) bool hasNamespaceA;
@property (nonatomic) bool hasNodeIndex;
@property (nonatomic, readonly) bool hasProbability;
@property (nonatomic) bool hasSourceComponent;
@property (nonatomic, readonly) bool hasValue;
@property (nonatomic) unsigned int interpretationGroup;
@property (nonatomic, retain) SIRICOMMONStringValue *namespaceA;
@property (nonatomic) unsigned int nodeIndex;
@property (nonatomic, retain) SIRICOMMONDoubleValue *probability;
@property (nonatomic) int sourceComponent;
@property (nonatomic, retain) NSString *value;

- (void).cxx_destruct;
- (int)StringAsSourceComponent:(id)arg1;
- (id)backingAppBundleId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)groupIndex;
- (bool)hasBackingAppBundleId;
- (bool)hasGroupIndex;
- (bool)hasInterpretationGroup;
- (bool)hasNamespaceA;
- (bool)hasNodeIndex;
- (bool)hasProbability;
- (bool)hasSourceComponent;
- (bool)hasValue;
- (unsigned long long)hash;
- (unsigned int)interpretationGroup;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)namespaceA;
- (unsigned int)nodeIndex;
- (id)probability;
- (bool)readFrom:(id)arg1;
- (void)setBackingAppBundleId:(id)arg1;
- (void)setGroupIndex:(unsigned int)arg1;
- (void)setHasGroupIndex:(bool)arg1;
- (void)setHasInterpretationGroup:(bool)arg1;
- (void)setHasNodeIndex:(bool)arg1;
- (void)setHasSourceComponent:(bool)arg1;
- (void)setInterpretationGroup:(unsigned int)arg1;
- (void)setNamespaceA:(id)arg1;
- (void)setNodeIndex:(unsigned int)arg1;
- (void)setProbability:(id)arg1;
- (void)setSourceComponent:(int)arg1;
- (void)setValue:(id)arg1;
- (int)sourceComponent;
- (id)sourceComponentAsString:(int)arg1;
- (id)value;
- (void)writeTo:(id)arg1;

@end
