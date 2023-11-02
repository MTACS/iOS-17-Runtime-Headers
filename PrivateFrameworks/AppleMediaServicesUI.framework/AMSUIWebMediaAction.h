
@interface AMSUIWebMediaAction : AMSUIWebAction <AMSUIWebActionRunnable> {
    NSArray * _bundleIdentifiers;
    NSString * _clientIdentifier;
    NSString * _clientVersion;
    NSArray * _includedResultKeys;
    NSArray * _itemIdentifiers;
    long long  _type;
    NSString * _urlString;
}

@property (nonatomic, retain) NSArray *bundleIdentifiers;
@property (nonatomic, retain) NSString *clientIdentifier;
@property (nonatomic, retain) NSString *clientVersion;
@property (nonatomic, readonly) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *includedResultKeys;
@property (nonatomic, retain) NSArray *itemIdentifiers;
@property (readonly) Class superclass;
@property (nonatomic) long long type;
@property (nonatomic, retain) NSString *urlString;

- (void).cxx_destruct;
- (id)_runMediaRequestWithType:(long long)arg1 clientIdentifier:(id)arg2 clientVersion:(id)arg3;
- (id)_runMediaRequestWithURL:(id)arg1 clientIdentifier:(id)arg2 clientVersion:(id)arg3;
- (id)bundleIdentifiers;
- (id)clientIdentifier;
- (id)clientVersion;
- (id)includedResultKeys;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)itemIdentifiers;
- (id)runAction;
- (void)setBundleIdentifiers:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setClientVersion:(id)arg1;
- (void)setIncludedResultKeys:(id)arg1;
- (void)setItemIdentifiers:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setUrlString:(id)arg1;
- (long long)type;
- (id)urlString;

@end
