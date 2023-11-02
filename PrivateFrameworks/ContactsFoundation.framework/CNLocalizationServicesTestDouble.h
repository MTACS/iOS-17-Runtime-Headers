
@interface CNLocalizationServicesTestDouble : NSObject <CNLocalizationServices> {
    NSMutableDictionary * _values;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)storageKeyForKey:(id)arg1 table:(id)arg2 inBundleForClass:(Class)arg3;

- (void).cxx_destruct;
- (void)givenLocalizedString:(id)arg1 forKey:(id)arg2 table:(id)arg3 bundleForClass:(Class)arg4;
- (id)init;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 bundleForClass:(Class)arg4 comment:(id)arg5;

@end
