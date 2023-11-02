
@interface _MFSearchMatcherContext : NSObject {
    CPSearchMatcher * _lastMatcher;
    char * _lastSearchString;
    unsigned long long  _lastSearchStringLength;
    NSMutableDictionary * _matchers;
}

@property (nonatomic, retain) CPSearchMatcher *lastMatcher;
@property (nonatomic) char *lastSearchString;
@property (nonatomic) unsigned long long lastSearchStringLength;
@property (nonatomic, retain) NSMutableDictionary *matchers;

- (void).cxx_destruct;
- (void)dealloc;
- (void)flush;
- (id)lastMatcher;
- (char *)lastSearchString;
- (unsigned long long)lastSearchStringLength;
- (id)matchers;
- (void)setLastMatcher:(id)arg1;
- (void)setLastSearchString:(char *)arg1;
- (void)setLastSearchStringLength:(unsigned long long)arg1;
- (void)setMatchers:(id)arg1;

@end
