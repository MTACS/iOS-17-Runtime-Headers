
@interface APConfiguration : NSObject <APConfigurationProtocol> {
    <APPurgeableCacheNotifierP> * _notifier;
    NSDictionary * configDictionary;
}

@property (nonatomic, retain) NSDictionary *configDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *identifier;
@property (nonatomic, retain) <APPurgeableCacheNotifierP> *notifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long version;

+ (id)path;

- (void).cxx_destruct;
- (id)configDictionary;
- (void)forwardInvocation:(id)arg1;
- (id)identifier;
- (id)initWithConfig:(id)arg1 notifier:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)notifier;
- (void)setConfigDictionary:(id)arg1;
- (void)setNotifier:(id)arg1;
- (long long)version;

@end
