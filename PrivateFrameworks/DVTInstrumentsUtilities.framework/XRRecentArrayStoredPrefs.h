
@interface XRRecentArrayStoredPrefs : XRRecentArray {
    NSString * _preferencePathArray;
    NSString * _preferencePathMaxCount;
}

+ (id)sharedInstanceForPreferencePath:(id)arg1;

- (void).cxx_destruct;
- (void)_readUserDefaults;
- (void)dealloc;
- (id)initWithMaximumRecentCount:(unsigned long long)arg1 preferencePath:(id)arg2;
- (void)synchronize;

@end
