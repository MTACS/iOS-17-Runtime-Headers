
@interface AVEventManager : NSObject <AVEventPublishing> {
    NSMutableArray * _actionStorage;
    id  _owner;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addActionIfPossible:(id)arg1;
- (void)_ensureActionStorage;
- (void)addAction:(id /* block */)arg1 forEvent:(id)arg2;
- (void)addAction:(SEL)arg1 withTarget:(id)arg2 forEvent:(id)arg3;
- (id)initWithOwner:(id)arg1;
- (void)removeAction:(SEL)arg1 withTarget:(id)arg2 forEvent:(id)arg3;
- (void)sendActionsForEvent:(id)arg1;

@end
