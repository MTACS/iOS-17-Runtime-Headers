
@interface TPSDiscoverabilitySignal : NSObject {
    NSString * _bundleIdentifier;
    NSString * _context;
    NSString * _identifier;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *context;
@property (nonatomic, copy) NSString *identifier;

+ (id)osBuild;

- (void).cxx_destruct;
- (id)_discoverabilitySignalsStream;
- (id)_knowledgeStore;
- (id)bundleIdentifier;
- (id)context;
- (void)donateSignalWithCompletion:(id /* block */)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 context:(id)arg3;
- (void)setBundleIdentifier:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end
