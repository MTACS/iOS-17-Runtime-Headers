
@interface CRKAlwaysFailingTransportProvider : NSObject <CRKTransportProviding> {
    NSError * mError;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)fetchTransportWithCompletion:(id /* block */)arg1;
- (id)initWithError:(id)arg1;

@end
