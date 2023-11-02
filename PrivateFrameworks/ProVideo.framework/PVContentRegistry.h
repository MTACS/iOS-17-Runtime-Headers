
@interface PVContentRegistry : NSObject {
    NSMutableDictionary * _contentDictionary;
    NSLock * _dictionaryLock;
}

+ (id)sharedInstance;
+ (void)willTerminate:(id)arg1;

- (void).cxx_destruct;
- (id)bundleForID:(id)arg1;
- (id)contentGroupForID:(id)arg1;
- (id)contentPathForID:(id)arg1;
- (id)contentPropertiesForID:(id)arg1;
- (id)createContentInstance:(id)arg1;
- (void)dealloc;
- (bool)hasStyleTransfer:(id)arg1;
- (id)init;
- (void)initContentRegistry;
- (void)initContentRegistryWithHostDelegate:(id)arg1;
- (bool)isContentIDRegistered:(id)arg1;
- (bool)isSelfie:(id)arg1;
- (bool)isSingleWordTranscription:(id)arg1;
- (bool)isSketch:(id)arg1;
- (bool)isTranscription:(id)arg1;
- (id)listAllContentGroups;
- (id)listAllContentIDs;
- (id)listIDsForContentGroup:(id)arg1;
- (id)listIDsForContentGroups:(id)arg1;
- (id)listIDsForContentType:(id)arg1;
- (id)listIDsForContentTypes:(id)arg1;
- (id)lookupPropertyForID:(id)arg1 property:(id)arg2;
- (void)registerBuiltIns;
- (bool)registerContentBundle:(id)arg1;
- (bool)registerContentClass:(Class)arg1 forID:(id)arg2 type:(id)arg3 withProperties:(id)arg4;
- (bool)registerContentDictionary:(id)arg1 withBaseDir:(id)arg2;
- (bool)registerContentFile:(id)arg1 forID:(id)arg2 properties:(id)arg3;
- (bool)unregisterContentID:(id)arg1;

@end
