
@interface WBSHostTabProviderManager : NSObject {
    NSMapTable * _hostTabMapTable;
    NSMapTable * _providerMapTable;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_hostTabForContentUUID:(id)arg1;
- (id)init;
- (id)providerForContentUUID:(id)arg1;
- (void)registerHostTab:(id)arg1;
- (void)unregisterHostTab:(id)arg1;

@end
