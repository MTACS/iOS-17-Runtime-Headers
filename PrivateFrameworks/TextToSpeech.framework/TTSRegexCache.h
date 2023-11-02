
@interface TTSRegexCache : NSObject {
    NSMutableDictionary * _cache;
}

@property (nonatomic, retain) NSMutableDictionary *cache;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)cache;
- (id)init;
- (id)regexForString:(id)arg1;
- (id)regexForString:(id)arg1 atStart:(bool)arg2;
- (void)setCache:(id)arg1;

@end
