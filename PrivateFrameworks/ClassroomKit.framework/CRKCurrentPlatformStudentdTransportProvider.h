
@interface CRKCurrentPlatformStudentdTransportProvider : NSObject <CRKTransportProviding> {
    <CRKTransportProviding> * mBaseProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)fetchTransportWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)makeProviderForCurrentPlatform;

@end
