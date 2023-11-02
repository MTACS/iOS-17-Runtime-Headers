
@interface HMMTRClusterDescription : HMFObject {
    NSDictionary * _arguments;
    Class  _clusterClass;
    SEL  _clusterSelector;
    id /* block */  _mapValue;
    id /* block */  _mapWriteValueToExpectedValues;
    NSDictionary * _paramsArguments;
    Class  _paramsClass;
    NSNumber * _paramsIndex;
    id  _primaryArg;
    NSNumber * _primaryArgIndex;
    NSString * _primaryArgType;
    bool  _syncWriteFunc;
}

@property (nonatomic, retain) NSDictionary *arguments;
@property (readonly) Class clusterClass;
@property (readonly) SEL clusterSelector;
@property (nonatomic, copy) id /* block */ mapValue;
@property (nonatomic, copy) id /* block */ mapWriteValueToExpectedValues;
@property (nonatomic, retain) NSDictionary *paramsArguments;
@property (nonatomic, retain) Class paramsClass;
@property (nonatomic, retain) NSNumber *paramsIndex;
@property (nonatomic, retain) id primaryArg;
@property (nonatomic, retain) NSNumber *primaryArgIndex;
@property (nonatomic, retain) NSString *primaryArgType;
@property (nonatomic) bool syncWriteFunc;

- (void).cxx_destruct;
- (id)arguments;
- (Class)clusterClass;
- (SEL)clusterSelector;
- (id)initWithClass:(id)arg1 selectorString:(id)arg2;
- (id /* block */)mapValue;
- (id /* block */)mapWriteValueToExpectedValues;
- (id)paramsArguments;
- (Class)paramsClass;
- (id)paramsIndex;
- (id)primaryArg;
- (id)primaryArgIndex;
- (id)primaryArgType;
- (void)setArguments:(id)arg1;
- (void)setMapValue:(id /* block */)arg1;
- (void)setMapWriteValueToExpectedValues:(id /* block */)arg1;
- (void)setParamsArguments:(id)arg1;
- (void)setParamsClass:(Class)arg1;
- (void)setParamsIndex:(id)arg1;
- (void)setPrimaryArg:(id)arg1;
- (void)setPrimaryArgIndex:(id)arg1;
- (void)setPrimaryArgType:(id)arg1;
- (void)setSyncWriteFunc:(bool)arg1;
- (bool)syncWriteFunc;

@end
