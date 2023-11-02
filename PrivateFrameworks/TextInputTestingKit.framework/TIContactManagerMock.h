
@interface TIContactManagerMock : NSObject <TIContactManaging> {
    TIContactCollection * _contactCollection;
    NSMutableArray * _observers;
}

@property (nonatomic, readonly, copy) NSUUID *contactCollectionUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *observers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)addContactObserver:(id /* block */)arg1;
- (id)contactCollectionUUID;
- (void)getOnce:(id /* block */)arg1;
- (id)initWithContactCollection:(id)arg1;
- (void)keyboardActivityDidTransition:(id)arg1;
- (id)observers;
- (void)removeContactObserver:(id /* block */)arg1;
- (void)unload;

@end
