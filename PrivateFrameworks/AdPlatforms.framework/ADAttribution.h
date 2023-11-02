
@interface ADAttribution : NSObject {
    bool  _hasCompletedResponse;
    unsigned char  _numRetries;
}

@property (nonatomic) bool hasCompletedResponse;
@property (nonatomic) unsigned char numRetries;

+ (id)sharedInstance;

- (bool)hasCompletedResponse;
- (id)init;
- (void)initiateRequestOnConnection:(id)arg1 withBlock:(id /* block */)arg2;
- (unsigned char)numRetries;
- (void)requestAttributionDetailsWithBlock:(id /* block */)arg1;
- (void)setHasCompletedResponse:(bool)arg1;
- (void)setNumRetries:(unsigned char)arg1;
- (void)setServerToTest:(long long)arg1;
- (void)setStocksAdEnabled:(bool)arg1;

@end
