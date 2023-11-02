
@interface BKSHIDEventRouter : NSObject <BSDescriptionProviding> {
    long long  _destination;
    NSObject<OS_dispatch_queue> * _queue;
    NSSet * _queue_cachedHidEventDescriptors;
    <_BKSHIDEventRouterDelegate> * _queue_delegate;
    NSMutableSet * _queue_hidEventDescriptors;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) long long destination;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSSet *hidEventDescriptors;
@property (readonly) Class superclass;

+ (id)defaultEventRouters;
+ (id)defaultFocusedAppEventRouter;
+ (id)defaultSystemAppEventRouter;
+ (id)routerWithDestination:(long long)arg1;

- (void).cxx_destruct;
- (id)_initWithDestination:(long long)arg1 hidEventDescriptors:(id)arg2;
- (void)_setDelegate:(id)arg1;
- (void)addHIDEventDescriptors:(id)arg1;
- (bool)containsDescriptor:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (long long)destination;
- (unsigned long long)hash;
- (id)hidEventDescriptors;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)removeHIDEventDescriptors:(id)arg1;
- (bool)specifiesDescriptor:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
