
@interface CRKFailIfSimulatorTransportProvider : NSObject <CRKTransportProviding> {
    <CRKTransportProviding> * _baseProvider;
    NSError * _failureError;
}

@property (nonatomic, readonly) <CRKTransportProviding> *baseProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *failureError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)baseProvider;
- (id)failureError;
- (void)fetchTransportWithCompletion:(id /* block */)arg1;
- (id)initWithTransportProvider:(id)arg1;
- (id)initWithTransportProvider:(id)arg1 failureError:(id)arg2;

@end
