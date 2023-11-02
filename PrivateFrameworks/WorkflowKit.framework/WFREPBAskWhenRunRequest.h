
@interface WFREPBAskWhenRunRequest : PBRequest <NSCopying> {
    NSString * _actionIdentifier;
    NSData * _actionSerializedParameters;
    NSString * _associatedRunRequestIdentifier;
    NSMutableArray * _parameterKeys;
    NSMutableArray * _parameterKeysAndStates;
    NSMutableArray * _possibleStates;
}

@property (nonatomic, retain) NSString *actionIdentifier;
@property (nonatomic, retain) NSData *actionSerializedParameters;
@property (nonatomic, retain) NSString *associatedRunRequestIdentifier;
@property (nonatomic, readonly) bool hasActionSerializedParameters;
@property (nonatomic, retain) NSMutableArray *parameterKeys;
@property (nonatomic, retain) NSMutableArray *parameterKeysAndStates;
@property (nonatomic, retain) NSMutableArray *possibleStates;

+ (Class)parameterKeysAndStatesType;
+ (Class)parameterKeysType;
+ (Class)possibleStatesType;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)actionSerializedParameters;
- (void)addParameterKeys:(id)arg1;
- (void)addParameterKeysAndStates:(id)arg1;
- (void)addPossibleStates:(id)arg1;
- (id)associatedRunRequestIdentifier;
- (void)clearParameterKeys;
- (void)clearParameterKeysAndStates;
- (void)clearPossibleStates;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActionSerializedParameters;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)parameterKeys;
- (id)parameterKeysAndStates;
- (id)parameterKeysAndStatesAtIndex:(unsigned long long)arg1;
- (unsigned long long)parameterKeysAndStatesCount;
- (id)parameterKeysAtIndex:(unsigned long long)arg1;
- (unsigned long long)parameterKeysCount;
- (id)possibleStates;
- (id)possibleStatesAtIndex:(unsigned long long)arg1;
- (unsigned long long)possibleStatesCount;
- (bool)readFrom:(id)arg1;
- (void)setActionIdentifier:(id)arg1;
- (void)setActionSerializedParameters:(id)arg1;
- (void)setAssociatedRunRequestIdentifier:(id)arg1;
- (void)setParameterKeys:(id)arg1;
- (void)setParameterKeysAndStates:(id)arg1;
- (void)setPossibleStates:(id)arg1;
- (void)writeTo:(id)arg1;

@end
