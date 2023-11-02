
@interface WFWeatherStoreCallbackWrapper : NSObject {
    id /* block */  _aqiScaleRetrievalCompletionBlock;
    bool  _executedCompletionBlock;
    id /* block */  _forecastRetrievalCompletionBlock;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _requestType;
}

@property (nonatomic, copy) id /* block */ aqiScaleRetrievalCompletionBlock;
@property (nonatomic, readonly) bool executedCompletionBlock;
@property (nonatomic, copy) id /* block */ forecastRetrievalCompletionBlock;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic) unsigned long long requestType;

- (void).cxx_destruct;
- (id /* block */)aqiScaleRetrievalCompletionBlock;
- (void)executeCallbackwithResponse:(id)arg1 error:(id)arg2;
- (bool)executedCompletionBlock;
- (id /* block */)forecastRetrievalCompletionBlock;
- (id)initWithAQIScaleRetrievalBlock:(id /* block */)arg1;
- (id)initWithForecastRetrievalBlock:(id /* block */)arg1;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (unsigned long long)requestType;
- (void)setAqiScaleRetrievalCompletionBlock:(id /* block */)arg1;
- (void)setForecastRetrievalCompletionBlock:(id /* block */)arg1;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setRequestType:(unsigned long long)arg1;

@end
