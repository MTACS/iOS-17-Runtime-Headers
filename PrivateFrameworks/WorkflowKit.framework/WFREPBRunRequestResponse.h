
@interface WFREPBRunRequestResponse : PBCodable <NSCopying> {
    NSData * _errorData;
    NSMutableArray * _outputDatas;
    NSString * _runRequestIdentifier;
    NSMutableArray * _variablesDatas;
}

@property (nonatomic, retain) NSData *errorData;
@property (nonatomic, readonly) bool hasErrorData;
@property (nonatomic, retain) NSMutableArray *outputDatas;
@property (nonatomic, retain) NSString *runRequestIdentifier;
@property (nonatomic, retain) NSMutableArray *variablesDatas;

+ (Class)outputDataType;
+ (Class)variablesDataType;

- (void).cxx_destruct;
- (void)addOutputData:(id)arg1;
- (void)addVariablesData:(id)arg1;
- (void)clearOutputDatas;
- (void)clearVariablesDatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorData;
- (bool)hasErrorData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)outputDataAtIndex:(unsigned long long)arg1;
- (id)outputDatas;
- (unsigned long long)outputDatasCount;
- (bool)readFrom:(id)arg1;
- (id)runRequestIdentifier;
- (void)setErrorData:(id)arg1;
- (void)setOutputDatas:(id)arg1;
- (void)setRunRequestIdentifier:(id)arg1;
- (void)setVariablesDatas:(id)arg1;
- (id)variablesDataAtIndex:(unsigned long long)arg1;
- (id)variablesDatas;
- (unsigned long long)variablesDatasCount;
- (void)writeTo:(id)arg1;

@end
