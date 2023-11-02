
@interface CRKStudentdTransportProvider : NSObject <CRKTransportProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)fetchTransportWithCompletion:(id /* block */)arg1;

@end
