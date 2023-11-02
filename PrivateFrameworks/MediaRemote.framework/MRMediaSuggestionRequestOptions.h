
@interface MRMediaSuggestionRequestOptions : NSObject <MRMediaSuggestionRequestOptionsConfigurable> {
    NSArray * _bundleIdentifiers;
    NSArray * _contexts;
}

@property (nonatomic, copy) NSArray *bundleIdentifiers;
@property (nonatomic, copy) NSArray *contexts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultOptions;

- (void).cxx_destruct;
- (id)bundleIdentifiers;
- (id)contexts;
- (id)initWithBlock:(id /* block */)arg1;
- (void)setBundleIdentifiers:(id)arg1;
- (void)setContexts:(id)arg1;

@end
