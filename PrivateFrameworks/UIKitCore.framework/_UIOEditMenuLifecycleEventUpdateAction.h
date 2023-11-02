
@interface _UIOEditMenuLifecycleEventUpdateAction : _UIOClientAction {
    NSString * _menuIdentifier;
}

@property (nonatomic, readonly) long long lifecycleEvent;
@property (nonatomic, readonly) NSString *menuIdentifier;

- (void).cxx_destruct;
- (void)handleClientActionToOverlayService:(id)arg1;
- (id)identifier;
- (id)initWithMenuIdentifier:(id)arg1 event:(long long)arg2;
- (long long)lifecycleEvent;
- (id)menuIdentifier;

@end
