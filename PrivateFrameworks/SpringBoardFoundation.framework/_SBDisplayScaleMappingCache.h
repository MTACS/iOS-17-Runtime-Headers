
@interface _SBDisplayScaleMappingCache : NSObject <FBSDisplayObserving> {
    FBDisplayManager * _displayManager;
    NSMutableDictionary * _hardwareIdentifierToMappings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)cacheMapping:(id)arg1;
- (void)dealloc;
- (void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2;
- (id)init;
- (id)mappingForDisplayIdentifier:(id)arg1;

@end
