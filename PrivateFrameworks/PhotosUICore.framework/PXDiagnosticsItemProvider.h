
@interface PXDiagnosticsItemProvider : NSObject {
    NSMutableDictionary * __loadHandlers;
}

@property (nonatomic, readonly) NSMutableDictionary *_loadHandlers;
@property (nonatomic, readonly) NSSet *registeredIdentifiers;

+ (id)providerWithItem:(id)arg1 identifier:(id)arg2;

- (void).cxx_destruct;
- (id)_loadHandlers;
- (bool)hasItemForIdentifier:(id)arg1;
- (id)init;
- (id)itemForIdentifier:(id)arg1;
- (void)registerItem:(id)arg1 forIdentifier:(id)arg2;
- (void)registerItemForIdentifier:(id)arg1 loadHandler:(id /* block */)arg2;
- (id)registeredIdentifiers;

@end
