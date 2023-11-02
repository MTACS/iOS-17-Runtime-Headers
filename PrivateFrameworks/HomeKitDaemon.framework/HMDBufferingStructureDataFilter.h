
@interface HMDBufferingStructureDataFilter : HMDStructuredDataFoundationWriter {
    id /* block */  _block;
    HMDStructuredWriter * _writer;
}

- (void).cxx_destruct;
- (void)emitRootValue:(id)arg1;
- (id)error;
- (void)failWithError:(id)arg1;
- (id)initWithUnderlyingWriter:(id)arg1 block:(id /* block */)arg2;

@end
