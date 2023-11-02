
@interface CHSWidgetDescriptorProvider : NSObject <BSDescriptionProviding, CHSWidgetExtensionProviderObserver> {
    id /* block */  _eduModeProvider;
    CHSWidgetExtensionProvider * _extensionProvider;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    CHSChronoServicesConnection * _lock_connection;
    NSDictionary * _lock_descriptorsByExtensionIdentifier;
    NSMutableSet * _lock_observers;
    bool  _lock_observing;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSSet *descriptors;
@property (nonatomic, readonly, copy) NSDictionary *descriptorsByExtensionIdentifier;
@property (nonatomic, copy) id /* block */ eduModeProvider;
@property (nonatomic, retain) CHSWidgetExtensionProvider *extensionProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_descriptorsFromExtensions:(id)arg1;
- (bool)_isEDUMode;
- (void)_lock_addNewDescriptorsFromDescriptors:(id)arg1;
- (void)_lock_notifyObserversDescriptorsDidChange;
- (void)_lock_reloadContentAsynchronouslyForContainerIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)descriptorForPersonality:(id)arg1;
- (id)descriptors;
- (id)descriptorsByExtensionIdentifier;
- (id /* block */)eduModeProvider;
- (id)extensionProvider;
- (void)extensionsDidChangeForExtensionProvider:(id)arg1;
- (void)fetchDescriptorsForContainerIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initIncludingIntents:(bool)arg1;
- (id)initWithConnection:(id)arg1 extensionProvider:(id)arg2;
- (id)initWithIncludeDefaultIntents:(bool)arg1;
- (void)reloadDescriptorsForContainerIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)removeObserver:(id)arg1;
- (void)setEduModeProvider:(id /* block */)arg1;
- (void)setExtensionProvider:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
