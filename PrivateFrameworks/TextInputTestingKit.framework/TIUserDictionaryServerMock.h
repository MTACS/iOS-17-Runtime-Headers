
@interface TIUserDictionaryServerMock : NSObject <TIUserDictionaryServing> {
    NSMutableArray * _observers;
    NSArray * _pairs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *pairs;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *userDictionaryUUID;

- (void).cxx_destruct;
- (id)addObserver:(id /* block */)arg1;
- (void)getPhraseShortcutPairs:(id /* block */)arg1;
- (id)init;
- (id)pairs;
- (void)removeObserver:(id)arg1;
- (void)setPairs:(id)arg1;
- (void)startServer;
- (id)userDictionaryUUID;

@end
