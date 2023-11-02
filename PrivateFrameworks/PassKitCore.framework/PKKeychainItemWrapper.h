
@interface PKKeychainItemWrapper : NSObject {
    unsigned long long  _accessibility;
    bool  _invisible;
    NSString * _label;
    NSMutableDictionary * genericPasswordQuery;
    NSMutableDictionary * keychainItemData;
    unsigned long long  type;
}

@property (nonatomic) unsigned long long accessibility;
@property (nonatomic, retain) NSMutableDictionary *genericPasswordQuery;
@property (nonatomic, retain) NSMutableDictionary *keychainItemData;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (void)_resetKeychainItem:(bool)arg1;
- (unsigned long long)accessibility;
- (void)applyAccessibilityValueToDictionary:(id)arg1;
- (void)applySynchronizableValueToDictionary:(id)arg1;
- (id)dictionaryToSecItemFormat:(id)arg1;
- (id)genericPasswordQuery;
- (id)initWithIdentifier:(id)arg1 accessGroup:(id)arg2 serviceName:(id)arg3;
- (id)initWithIdentifier:(id)arg1 accessGroup:(id)arg2 serviceName:(id)arg3 type:(unsigned long long)arg4 invisible:(bool)arg5;
- (id)initWithIdentifier:(id)arg1 accessGroup:(id)arg2 serviceName:(id)arg3 type:(unsigned long long)arg4 invisible:(bool)arg5 accessibility:(unsigned long long)arg6;
- (id)keychainItemData;
- (id)label;
- (id)objectForKey:(id)arg1;
- (void)resetKeychainItem;
- (void)resetLocalKeychainItem;
- (id)secItemFormatToDictionary:(id)arg1;
- (void)setAccessibility:(unsigned long long)arg1;
- (void)setGenericPasswordQuery:(id)arg1;
- (void)setKeychainItemData:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;
- (void)writeToKeychain;

@end
