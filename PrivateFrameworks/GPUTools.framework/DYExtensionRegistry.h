
@interface DYExtensionRegistry : NSObject {
    NSMutableDictionary * _identifiersMap;
    NSMutableDictionary * _slotsMap;
}

+ (id)sharedExtensionRegistry;

- (void)dealloc;
- (id)extensionsForSlot:(id)arg1;
- (id)init;
- (void)registerExtension:(id)arg1;

@end
