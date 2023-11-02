
@interface _EARLanguageDetectorLoggingInfo : NSObject {
    _EARLanguageDetectorRequestContext * _context;
    NSDictionary * _loggingDict;
}

@property (nonatomic, copy) _EARLanguageDetectorRequestContext *context;
@property (nonatomic, copy) NSDictionary *loggingDict;

- (void).cxx_destruct;
- (id)context;
- (id)loggingDict;
- (void)setContext:(id)arg1;
- (void)setLoggingDict:(id)arg1;

@end
