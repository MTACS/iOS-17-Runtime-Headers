
@interface CDPLocalizedStringBuilder : NSObject {
    NSString * _key;
    NSString * _table;
}

+ (id)builderForKey:(id)arg1;
+ (id)builderForKey:(id)arg1 inTable:(id)arg2;

- (void).cxx_destruct;
- (id)addDeviceClass:(id)arg1;
- (id)addSecretType:(unsigned long long)arg1;
- (id)addUnqualifiedDeviceClass:(id)arg1;
- (id)currentKey;
- (id)localizedString;

@end
