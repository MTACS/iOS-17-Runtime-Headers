
@interface CMIOExtensionProviderProperties : NSObject {
    CMIOExtensionClient * _client;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _propertiesDictionary;
}

@property (retain) NSString *manufacturer;
@property (retain) NSString *name;
@property (copy) NSDictionary *propertiesDictionary;

+ (id)providerPropertiesWithDictionary:(id)arg1;

- (id)client;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (id)initWithPropertyValues:(id)arg1 client:(id)arg2;
- (id)manufacturer;
- (id)name;
- (id)propertiesDictionary;
- (void)setManufacturer:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPropertiesDictionary:(id)arg1;
- (void)setPropertyState:(id)arg1 forProperty:(id)arg2;

@end
