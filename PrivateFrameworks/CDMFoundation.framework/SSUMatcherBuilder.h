
@interface SSUMatcherBuilder : NSObject {
    NSMutableDictionary * __matchers;
}

@property (nonatomic, readonly) NSMutableDictionary *_matchers;

+ (id)buildMatcher:(id)arg1 error:(id*)arg2;
+ (id)sharedBuilder;

- (void).cxx_destruct;
- (id)_init;
- (id)_matchers;
- (id)getMatcherForBuildParams:(id)arg1 error:(id*)arg2;
- (bool)hasMatcher:(id)arg1;
- (unsigned long long)numMatchers;

@end
