
@interface TIGeocodeCompletionHandlerHolder : NSObject {
    id /* block */  _geocodeCompletionHandler;
}

@property (nonatomic, copy) id /* block */ geocodeCompletionHandler;

- (void).cxx_destruct;
- (id /* block */)geocodeCompletionHandler;
- (void)setGeocodeCompletionHandler:(id /* block */)arg1;

@end
