
@interface COStateManagerClientInterfaceMediator : NSObject <COStateManagerClientInterface> {
    COStateManager * _manager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) COStateManager *manager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)changesObserved:(id)arg1 forPredicate:(id)arg2;
- (id)initWithStateManager:(id)arg1;
- (id)manager;

@end
