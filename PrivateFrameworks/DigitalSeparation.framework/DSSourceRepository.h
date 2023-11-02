
@interface DSSourceRepository : NSObject {
    NSDictionary * _sourcesByName;
}

@property (nonatomic, readonly, copy) NSArray *sources;
@property (nonatomic, copy) NSDictionary *sourcesByName;

+ (void)initialize;
+ (id)repositoryWithURL:(id)arg1;
+ (bool)runtimeFeatureFlagsEnabledFor:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSources:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setSourcesByName:(id)arg1;
- (id)sources;
- (id)sourcesByName;

@end
