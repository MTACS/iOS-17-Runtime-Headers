
@interface PTProxySettingsDefinition : NSObject <NSSecureCoding> {
    NSDictionary * _childDefinitions;
    NSDictionary * _defaultValueArchive;
    PTModule * _module;
    PTSettingsClassStructure * _structure;
}

@property (nonatomic, retain) NSDictionary *childDefinitions;
@property (nonatomic, retain) NSDictionary *defaultValueArchive;
@property (nonatomic, retain) PTModule *module;
@property (nonatomic, retain) PTSettingsClassStructure *structure;

+ (id)definitionForSettingsClass:(Class)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allSettingsClassesExistAndHaveCorrectVersion;
- (id)childDefinitions;
- (id)defaultValueArchive;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)module;
- (void)setChildDefinitions:(id)arg1;
- (void)setDefaultValueArchive:(id)arg1;
- (void)setModule:(id)arg1;
- (void)setStructure:(id)arg1;
- (Class)settingsClass;
- (id)structure;

@end
