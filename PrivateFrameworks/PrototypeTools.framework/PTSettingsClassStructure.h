
@interface PTSettingsClassStructure : NSObject <NSSecureCoding> {
    NSSet * _childKeys;
    NSDictionary * _classNames;
    NSDictionary * _classes;
    NSSet * _leafKeys;
    NSSet * _outletKeys;
    NSString * _settingsClassName;
    unsigned long long  _settingsClassVersion;
    NSDictionary * _structNames;
}

@property (nonatomic, retain) NSSet *childKeys;
@property (nonatomic, retain) NSSet *leafKeys;
@property (nonatomic, retain) NSSet *outletKeys;
@property (nonatomic, retain) NSString *settingsClassName;
@property (nonatomic) unsigned long long settingsClassVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (Class)_classForKey:(id)arg1;
- (id)_decodeStringSetForKey:(id)arg1 withCoder:(id)arg2;
- (id)_decodeStringStringDictionaryForKey:(id)arg1 withCoder:(id)arg2;
- (void)_generateClassNamesIfNecessary;
- (Class)childClassForKey:(id)arg1;
- (id)childKeys;
- (void)encodeWithCoder:(id)arg1;
- (id)filteredForProxySettings;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (Class)leafClassForKey:(id)arg1;
- (id)leafKeys;
- (id)leafStructNameForKey:(id)arg1;
- (id)outletKeys;
- (void)setChildKeys:(id)arg1;
- (void)setLeafKeys:(id)arg1;
- (void)setOutletKeys:(id)arg1;
- (void)setSettingsClassName:(id)arg1;
- (void)setSettingsClassVersion:(unsigned long long)arg1;
- (id)settingsClassName;
- (unsigned long long)settingsClassVersion;

@end
