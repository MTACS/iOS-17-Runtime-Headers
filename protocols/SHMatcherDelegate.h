
@protocol SHMatcherDelegate <NSObject, SHSpectralOutputDelegate>

@required

- (void)matcher:(id <SHMatcher>)arg1 didProduceResponse:(SHMatcherResponse *)arg2;

@end
