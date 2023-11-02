
@interface TRIClientFactorPackStreamingWriter : NSObject {
    NSError * _firstError;
    bool  _hasFactorPackId;
    bool  _hasSelectedNamespace;
    TRIPBCodedOutputStream * _stream;
    NSOutputStream * _underlying;
}

+ (bool)copySourceFactorPack:(id)arg1 toDestPath:(id)arg2 error:(id*)arg3 modifyFactorLevel:(id /* block */)arg4;

- (void).cxx_destruct;
- (unsigned int)_fieldNumberForFieldName:(id)arg1;
- (bool)_streamExecWithError:(id*)arg1 block:(id /* block */)arg2;
- (void)appendFactorLevel:(id)arg1;
- (bool)closeWithError:(id*)arg1;
- (id)init;
- (id)initWithPath:(id)arg1;
- (void)writeFactorPackId:(id)arg1;
- (void)writeSelectedNamespace:(id)arg1;

@end
