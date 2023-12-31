
@interface DDScanServer : DDScannerService {
    long long  _options;
    double  _timeout;
}

@property (nonatomic) long long options;
@property (nonatomic) double timeout;

- (id)init;
- (long long)options;
- (id)scanString:(id)arg1;
- (void)scanString:(id)arg1 resultsBlock:(id /* block */)arg2;
- (void)setOptions:(long long)arg1;
- (void)setTimeout:(double)arg1;
- (double)timeout;

@end
