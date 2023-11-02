
@interface CLSNowPlayingStreamReader : NSObject {
    unsigned long long  _conversionOptions;
}

@property (nonatomic) unsigned long long conversionOptions;

- (unsigned long long)conversionOptions;
- (void)enumerateSessionsWithBlock:(id /* block */)arg1;
- (id)init;
- (void)setConversionOptions:(unsigned long long)arg1;

@end
