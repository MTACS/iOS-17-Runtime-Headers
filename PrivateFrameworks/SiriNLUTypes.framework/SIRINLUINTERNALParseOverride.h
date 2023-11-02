
@interface SIRINLUINTERNALParseOverride : PBCodable <NSCopying> {
    unsigned long long  _creationTimestampMsSinceUnixEpoch;
    bool  _enabled;
    struct { 
        unsigned int creationTimestampMsSinceUnixEpoch : 1; 
        unsigned int parserIdentifier : 1; 
        unsigned int enabled : 1; 
    }  _has;
    NSString * _idA;
    NSMutableArray * _nluRequestRules;
    SIRINLUEXTERNALUserParse * _parse;
    int  _parserIdentifier;
    NSData * _serializedParse;
}

@property (nonatomic) unsigned long long creationTimestampMsSinceUnixEpoch;
@property (nonatomic) bool enabled;
@property (nonatomic) bool hasCreationTimestampMsSinceUnixEpoch;
@property (nonatomic) bool hasEnabled;
@property (nonatomic, readonly) bool hasIdA;
@property (nonatomic, readonly) bool hasParse;
@property (nonatomic) bool hasParserIdentifier;
@property (nonatomic, readonly) bool hasSerializedParse;
@property (nonatomic, retain) NSString *idA;
@property (nonatomic, retain) NSMutableArray *nluRequestRules;
@property (nonatomic, retain) SIRINLUEXTERNALUserParse *parse;
@property (nonatomic) int parserIdentifier;
@property (nonatomic, retain) NSData *serializedParse;

+ (Class)nluRequestRulesType;

- (void).cxx_destruct;
- (int)StringAsParserIdentifier:(id)arg1;
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
- (bool)hasParse;
- (bool)hasParserIdentifier;
- (bool)hasSerializedParse;
- (unsigned long long)hash;
- (id)idA;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nluRequestRules;
- (id)nluRequestRulesAtIndex:(unsigned long long)arg1;
- (unsigned long long)nluRequestRulesCount;
- (id)parse;
- (int)parserIdentifier;
- (id)parserIdentifierAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (id)serializedParse;
- (void)setCreationTimestampMsSinceUnixEpoch:(unsigned long long)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHasCreationTimestampMsSinceUnixEpoch:(bool)arg1;
- (void)setHasEnabled:(bool)arg1;
- (void)setHasParserIdentifier:(bool)arg1;
- (void)setIdA:(id)arg1;
- (void)setNluRequestRules:(id)arg1;
- (void)setParse:(id)arg1;
- (void)setParserIdentifier:(int)arg1;
- (void)setSerializedParse:(id)arg1;
- (void)writeTo:(id)arg1;

@end
