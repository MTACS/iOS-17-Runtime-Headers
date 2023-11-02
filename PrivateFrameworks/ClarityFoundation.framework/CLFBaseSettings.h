
@interface CLFBaseSettings : AXBaseSettings {
    NSMutableDictionary * _preferenceKeysBySelectorName;
}

+ (id)allPreferenceSelectorsAsStrings;
+ (void)deleteAllKeys;
+ (id)domainName;

- (void).cxx_destruct;
- (id)domainNameForPreferenceKey:(id)arg1;
- (id)init;
- (id)observeUpdatesForSelector:(SEL)arg1 handler:(id /* block */)arg2;
- (id)preferenceKeyForSelector:(SEL)arg1;
- (void)registerUpdateBlock:(id /* block */)arg1 withListener:(id)arg2;

@end
