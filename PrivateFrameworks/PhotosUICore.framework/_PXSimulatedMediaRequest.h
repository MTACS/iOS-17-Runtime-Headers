
@interface _PXSimulatedMediaRequest : NSObject {
    id /* block */  _originalProgressHandler;
    <_RequestOptions> * _simulatedOptions;
    id /* block */  _simulatedResultHandler;
}

@property (nonatomic, readonly) <_RequestOptions> *simulatedOptions;

+ (id)defaultSimulatedMediaRequestWithOriginalOptions:(id)arg1 simulatedResultHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)handleOriginalProgress:(double)arg1 error:(id)arg2 stop:(bool*)arg3 info:(id)arg4;
- (void)handleOriginalResult:(id)arg1 info:(id)arg2;
- (id)init;
- (id)initWithOriginalOptions:(id)arg1 simulatedResultHandler:(id /* block */)arg2;
- (id)initWithWrappedMediaRequest:(id)arg1;
- (id)simulatedOptions;

@end
