
@interface PXSearchSampleQueryController : NSObject <PXSearchQueryControllerProtocol> {
    id /* block */  _sampleResultsHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) id /* block */ sampleResultsHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithResultsHandler:(id /* block */)arg1;
- (void)performSearch:(id)arg1;
- (id /* block */)sampleResultsHandler;

@end
