
@interface SIRINLUINTERNALComponentOverride : PBCodable <NSCopying> {
    unsigned long long  _creationTimestampMsSinceUnixEpoch;
    bool  _enabled;
    struct { 
        unsigned int creationTimestampMsSinceUnixEpoch : 1; 
        unsigned int overrideNamespace : 1; 
        unsigned int enabled : 1; 
    }  _has;
    NSString * _idA;
    NSMutableArray * _nluRequestRules;
    int  _overrideNamespace;
    NSData * _serializedValue;
    SIRINLUINTERNALOverrideValue * _value;
}

@property (nonatomic) unsigned long long creationTimestampMsSinceUnixEpoch;
@property (nonatomic) bool enabled;
@property (nonatomic) bool hasCreationTimestampMsSinceUnixEpoch;
@property (nonatomic) bool hasEnabled;
@property (nonatomic, readonly) bool hasIdA;
@property (nonatomic) bool hasOverrideNamespace;
@property (nonatomic, readonly) bool hasSerializedValue;
@property (nonatomic, readonly) bool hasValue;
@property (nonatomic, retain) NSString *idA;
@property (nonatomic, retain) NSMutableArray *nluRequestRules;
@property (nonatomic) int overrideNamespace;
@property (nonatomic, retain) NSData *serializedValue;
@property (nonatomic, retain) SIRINLUINTERNALOverrideValue *value;

+ (Class)nluRequestRulesType;

- (void).cxx_destruct;
- (int)StringAsOverrideNamespace:(id)arg1;
- (void)addNluRequestRules:(id)arg1;
- (void)clearNluRequestRules;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)creationTimestampMsSinceUnixEpoch;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)enabled;
- (bool)hasCreationTimestampMsSinceUnixEpoch;
- (bool)hasEnabled;
- (bool)hasIdA;
- (bool)hasOverrideNamespace;
- (bool)hasSerializedValue;
- (bool)hasValue;
- (unsigned long long)hash;
- (id)idA;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nluRequestRules;
- (id)nluRequestRulesAtIndex:(unsigned long long)arg1;
- (unsigned long long)nluRequestRulesCount;
- (int)overrideNamespace;
- (id)overrideNamespaceAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (id)serializedValue;
- (void)setCreationTimestampMsSinceUnixEpoch:(unsigned long long)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHasCreationTimestampMsSinceUnixEpoch:(bool)arg1;
- (void)setHasEnabled:(bool)arg1;
- (void)setHasOverrideNamespace:(bool)arg1;
- (void)setIdA:(id)arg1;
- (void)setNluRequestRules:(id)arg1;
- (void)setOverrideNamespace:(int)arg1;
- (void)setSerializedValue:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (void)writeTo:(id)arg1;

@end
