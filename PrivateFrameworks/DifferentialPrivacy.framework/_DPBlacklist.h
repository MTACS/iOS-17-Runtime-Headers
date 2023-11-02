
@interface _DPBlacklist : NSObject {
    NSSet * _blacklist;
    NSString * _key;
    long long  _version;
}

@property (nonatomic, readonly) NSSet *blacklist;
@property (nonatomic, readonly, copy) NSString *key;
@property (nonatomic, readonly) long long version;

+ (bool)blacklistExistsWithKey:(id)arg1 inDirectory:(id)arg2;
+ (id)blacklistForKey:(id)arg1 fromConfigurationsFile:(id)arg2;
+ (id)blacklistForKey:(id)arg1 systemBlacklistDirectory:(id)arg2 runtimeBlacklistDirectory:(id)arg3;
+ (id)extractKeyFromFileName:(id)arg1;
+ (id)filePathWithKey:(id)arg1 inDirectory:(id)arg2;
+ (void)initialize;
+ (void)removeBlackListForKey:(id)arg1;
+ (void)removeBlackListsForKeys:(id)arg1;
+ (void)resetAllBlacklists;

- (void).cxx_destruct;
- (id)blacklist;
- (id)init;
- (id)initWithKey:(id)arg1 fromConfigurationsFile:(id)arg2;
- (id)key;
- (long long)version;

@end
