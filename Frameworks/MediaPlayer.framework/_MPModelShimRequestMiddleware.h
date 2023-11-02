
@interface _MPModelShimRequestMiddleware : NSObject <MPMiddleware> {
    NSArray * _invalidationObservers;
    MPModelResponse * _modelResponse;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *invalidationObservers;
@property (nonatomic, retain) MPModelResponse *modelResponse;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)invalidationObservers;
- (id)modelResponse;
- (id)operationsForRequest:(id)arg1;
- (void)setInvalidationObservers:(id)arg1;
- (void)setModelResponse:(id)arg1;

@end
