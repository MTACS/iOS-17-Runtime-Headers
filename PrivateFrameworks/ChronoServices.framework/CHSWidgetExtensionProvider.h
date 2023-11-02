
@interface CHSWidgetExtensionProvider : NSObject <BSDescriptionProviding, BSInvalidatable, CHSChronoServiceClient> {
    id /* block */  _eduModeProvider;
    <CHSIconResolving> * _iconResolver;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    CHSChronoServicesConnection * _lock_connection;
    CHSWidgetExtensionSet * _lock_extensionSet;
    NSDictionary * _lock_iconVersionByExtensionIdentity;
    bool  _lock_invalidated;
    NSHashTable * _lock_observers;
    <BSInvalidatable> * _lock_subscription;
}

@property (nonatomic, readonly) CHSWidgetExtensionSet *_widgetExtensionSet;
@property (nonatomic, retain) CHSChronoServicesConnection *connection;
@property (nonatomic, readonly) NSSet *containers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ eduModeProvider;
@property (nonatomic, readonly) NSSet *extensions;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSSet *sbh_descriptors;
@property (nonatomic, readonly, copy) NSDictionary *sbh_descriptorsByExtensionIdentifier;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices

+ (id)_computeIconVersionsByForExtensions:(id)arg1 withIconResolver:(id)arg2;
+ (id)_makeWidgetExtensionSetWithExtensions:(id)arg1 iconResolver:(id)arg2;

- (void).cxx_destruct;
- (bool)_isEDUMode;
- (void)_lock_loadContentInitiallySynchronouslyIfNecessary;
- (void)_lock_notifyObserversExtensionsDidChange;
- (void)_lock_widgetExtensionsDidChange:(id)arg1 postNotification:(bool)arg2;
- (id)_widgetExtensionSet;
- (id)connection;
- (id)containers;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id /* block */)eduModeProvider;
- (id)extensions;
- (id)init;
- (id)initIncludingIntents:(bool)arg1;
- (id)initWithConnection:(id)arg1 eduProvider:(id /* block */)arg2;
- (id)initWithIncludeDefaultIntents:(bool)arg1;
- (void)invalidate;
- (void)registerObserver:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setEduModeProvider:(id /* block */)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)unregisterObserver:(id)arg1;
- (id)widgetExtensionContainerForContainerBundleIdentifier:(id)arg1;
- (id)widgetExtensionContainerForExtensionBundleIdentifier:(id)arg1;
- (void)widgetExtensionsDidChange:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome

- (id)sbh_descriptorForPersonality:(id)arg1;
- (id)sbh_descriptorForWidgetIdentifiable:(id)arg1;
- (id)sbh_descriptors;
- (id)sbh_descriptorsByExtensionIdentifier;
- (id)sbh_extensions;

@end
