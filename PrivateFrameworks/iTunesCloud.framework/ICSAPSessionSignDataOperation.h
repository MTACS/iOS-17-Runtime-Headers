
@interface ICSAPSessionSignDataOperation : ICSAPSessionAbstractOperation {
    NSData * _data;
    id /* block */  _responseHandler;
}

@property (nonatomic, copy) NSData *data;
@property (nonatomic, copy) id /* block */ responseHandler;

- (void).cxx_destruct;
- (id)data;
- (void)executeWithSAPContext:(id)arg1;
- (void)finishWithSAPContextPreparationError:(id)arg1;
- (id /* block */)responseHandler;
- (void)setData:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;

@end
