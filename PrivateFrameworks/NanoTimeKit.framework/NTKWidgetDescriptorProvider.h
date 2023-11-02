
@interface NTKWidgetDescriptorProvider : NSObject <CHSWidgetDescriptorProviderObserver> {
    bool  _initalLoadCompleted;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSDictionary * _lock_descriptorsByExtensionIdentifier;
    bool  _lock_firstLoadCompleted;
    NSHashTable * _lock_observers;
    NSSet * _lock_widgetDescriptors;
    NSObject<OS_dispatch_queue> * _queue;
    CHSWidgetDescriptorProvider * _widgetDescriptorProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSSet *descriptors;
@property (nonatomic, readonly, copy) NSDictionary *descriptorsByExtensionIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool initalLoadCompleted;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_queue_widgetDescriptorsChanged;
- (id)descriptors;
- (id)descriptorsByExtensionIdentifier;
- (void)descriptorsDidChangeForDescriptorProvider:(id)arg1;
- (id)init;
- (bool)initalLoadCompleted;
- (void)registerObserver:(id)arg1;
- (void)reloadDescriptorsForContainerIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)unregisterObserver:(id)arg1;

@end
