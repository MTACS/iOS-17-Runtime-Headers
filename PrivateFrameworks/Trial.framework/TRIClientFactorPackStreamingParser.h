
@interface TRIClientFactorPackStreamingParser : NSObject {
    NSData * _data;
    bool  _emittedUnrecognizedFieldWarning;
    NSString * _factorPackId;
    TRIClientSelectedNamespace * _selectedNamespace;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSString *factorPackId;
@property (nonatomic, readonly) bool hasFactorPackId;
@property (nonatomic, readonly) bool hasSelectedNamespace;
@property (nonatomic, readonly) TRIClientSelectedNamespace *selectedNamespace;

- (void).cxx_destruct;
- (unsigned int)_fieldTagForFieldName:(id)arg1;
- (void)_parseWithHandleFactorLevel:(id /* block */)arg1;
- (id)data;
- (void)enumerateFactorLevelsWithBlock:(id /* block */)arg1;
- (id)factorPackId;
- (bool)hasFactorPackId;
- (bool)hasSelectedNamespace;
- (id)init;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)selectedNamespace;

@end
