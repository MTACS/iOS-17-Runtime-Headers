
@interface PHMediaFormatConversionJob : NSObject {
    id /* block */  _completionHandler;
    PHMediaFormatConversionRequest * _conversionRequest;
}

@property (copy) id /* block */ completionHandler;
@property (retain) PHMediaFormatConversionRequest *conversionRequest;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)conversionRequest;
- (id)description;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setConversionRequest:(id)arg1;

@end
