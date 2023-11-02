
@interface NUNIClassicResourceManager : NSObject <CLKUIResourceProviderDelegate> {
    unsigned long long  _clients;
    <MTLDevice> * _device;
    CLKUIResourceProviderKey * _resourceProviderKey;
    NSMapTable * _textureGroupHashTable;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_deallocInstance:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_asyncDeallocInstance;
- (void)addClient;
- (void)dealloc;
- (id)init;
- (id)provideAtlasBacking:(id)arg1;
- (void)removeClient;
- (id)resourceProviderKey;
- (id)textureGroupWithSuffix:(id)arg1;

@end
