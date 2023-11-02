
@interface TIKeyboardInputManagerLoader : NSObject {
    NSMutableDictionary * _activeInputManagers;
    NSMutableDictionary * _availableInputManagers;
    TIKeyboardInputManagerLoaderSyncHelper * _helper;
    NSXPCConnection * _interactingConnection;
    NSMutableDictionary * _lastUsedDate;
}

@property (nonatomic) NSXPCConnection *interactingConnection;

+ (id)sharedLoader;

- (void).cxx_destruct;
- (id)activeInputModeIdentifiers;
- (void)cacheInputManager:(id)arg1;
- (id)currentLoadedInputModes;
- (void)dealloc;
- (bool)hasActiveInputManagers;
- (id)init;
- (id)inputManagerForInputMode:(id)arg1 withKeyboardState:(id)arg2 class:(Class)arg3;
- (id)interactingConnection;
- (bool)isActiveInputManager:(id)arg1;
- (void)prepareForKeyboardActivity;
- (void)prepareForKeyboardInactivity;
- (void)reduceInputManagerCacheToSize:(int)arg1;
- (void)registerMaintenanceActivity;
- (void)releaseAllInputManagers;
- (void)removeInputModeFromAllContainers:(id)arg1;
- (void)setInteractingConnection:(id)arg1;
- (void)startSyncHelper;

@end
