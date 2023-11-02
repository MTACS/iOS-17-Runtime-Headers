
@interface DKReporterRegistry : NSObject <DKExtensionRegistry> {
    NSMutableDictionary * _componentDedup;
    NSMutableDictionary * _generatorLookup;
}

@property (nonatomic, retain) NSMutableDictionary *componentDedup;
@property (nonatomic, readonly) NSSet *components;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) Class extensionClass;
@property (nonatomic, retain) NSMutableDictionary *generatorLookup;
@property (nonatomic, readonly) NSSet *generators;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) Class responseObjectClass;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addExtensionAdapter:(id)arg1;
- (id)componentDedup;
- (id)components;
- (void)enumerateExtensionAdaptersWithBlock:(id /* block */)arg1;
- (Class)extensionClass;
- (id)generatorForComponentIdentity:(id)arg1;
- (id)generatorLookup;
- (id)generators;
- (id)init;
- (Class)responseObjectClass;
- (void)setComponentDedup:(id)arg1;
- (void)setGeneratorLookup:(id)arg1;

@end
