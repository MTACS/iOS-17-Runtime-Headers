
@interface _HDFeaturePropertiesWriting : NSObject <HDFeaturePropertiesWriting> {
    NSString * _localDomain;
    NSUserDefaults * _userDefaults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithLocalDomain:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)synchronize;

@end
