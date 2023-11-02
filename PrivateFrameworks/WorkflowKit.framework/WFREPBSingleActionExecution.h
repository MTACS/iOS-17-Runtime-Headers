
@interface WFREPBSingleActionExecution : PBCodable <NSCopying> {
    NSString * _actionIdentifier;
    NSMutableArray * _inputs;
    NSMutableArray * _processedParameters;
    NSData * _serializedParameters;
    NSMutableArray * _variables;
}

@property (nonatomic, retain) NSString *actionIdentifier;
@property (nonatomic, readonly) bool hasSerializedParameters;
@property (nonatomic, retain) NSMutableArray *inputs;
@property (nonatomic, retain) NSMutableArray *processedParameters;
@property (nonatomic, retain) NSData *serializedParameters;
@property (nonatomic, retain) NSMutableArray *variables;

+ (Class)inputType;
+ (Class)processedParametersType;
+ (Class)variablesType;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (void)addInput:(id)arg1;
- (void)addProcessedParameters:(id)arg1;
- (void)addVariables:(id)arg1;
- (void)clearInputs;
- (void)clearProcessedParameters;
- (void)clearVariables;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSerializedParameters;
- (unsigned long long)hash;
- (id)inputAtIndex:(unsigned long long)arg1;
- (id)inputs;
- (unsigned long long)inputsCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)processedParameters;
- (id)processedParametersAtIndex:(unsigned long long)arg1;
- (unsigned long long)processedParametersCount;
- (bool)readFrom:(id)arg1;
- (id)serializedParameters;
- (void)setActionIdentifier:(id)arg1;
- (void)setInputs:(id)arg1;
- (void)setProcessedParameters:(id)arg1;
- (void)setSerializedParameters:(id)arg1;
- (void)setVariables:(id)arg1;
- (id)variables;
- (id)variablesAtIndex:(unsigned long long)arg1;
- (unsigned long long)variablesCount;
- (void)writeTo:(id)arg1;

@end
