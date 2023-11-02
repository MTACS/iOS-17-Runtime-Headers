
@interface SUUISoftwareLibraryInterface : NSObject <SUUILibraryInterface>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)enumerateStatesForLibraryItems:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)exposedPlatformItemKinds;
- (bool)performActionForLibraryItem:(id)arg1;
- (id)stateForLibraryItem:(id)arg1;

@end
