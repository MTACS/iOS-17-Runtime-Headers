
@interface BMWriteServerExported : NSObject <BMWriteServiceServer> {
    BMAccessControlPolicy * _policy;
    BMProcess * _process;
    NSString * _useCase;
    NSMutableDictionary * _writerCache;
}

- (void).cxx_destruct;
- (id)checkEntitlementsAndReturnWriterForStreamIdentifier:(id)arg1 user:(unsigned int)arg2 error:(id*)arg3;
- (void)configureConnectionForUseCase:(id)arg1 reply:(id /* block */)arg2;
- (id)initWithProcess:(id)arg1 accessControlPolicy:(id)arg2;
- (void)writeData:(id)arg1 version:(unsigned int)arg2 timestamp:(double)arg3 toStream:(id)arg4 asUser:(unsigned int)arg5 reply:(id /* block */)arg6;

@end
