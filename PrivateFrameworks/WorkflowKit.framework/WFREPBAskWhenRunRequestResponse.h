
@interface WFREPBAskWhenRunRequestResponse : PBCodable <NSCopying> {
    WFREPBError * _error;
    NSMutableArray * _inputtedStates;
    NSString * _originatingRequestIdentifier;
}

@property (nonatomic, retain) WFREPBError *error;
@property (nonatomic, readonly) bool hasError;
@property (nonatomic, retain) NSMutableArray *inputtedStates;
@property (nonatomic, retain) NSString *originatingRequestIdentifier;

+ (Class)inputtedStatesType;

- (void).cxx_destruct;
- (void)addInputtedStates:(id)arg1;
- (void)clearInputtedStates;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)error;
- (bool)hasError;
- (unsigned long long)hash;
- (id)inputtedStates;
- (id)inputtedStatesAtIndex:(unsigned long long)arg1;
- (unsigned long long)inputtedStatesCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)originatingRequestIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setError:(id)arg1;
- (void)setInputtedStates:(id)arg1;
- (void)setOriginatingRequestIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
