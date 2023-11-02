
@interface DBBuddyMonitor : NSObject {
    bool  _buddyFinished;
    CARObserverHashTable * _observers;
}

@property (nonatomic) bool buddyFinished;
@property (retain) CARObserverHashTable *observers;

- (void).cxx_destruct;
- (void)_updateBuddyFinished;
- (void)addObserver:(id)arg1;
- (bool)buddyFinished;
- (void)dealloc;
- (id)init;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)setBuddyFinished:(bool)arg1;
- (void)setObservers:(id)arg1;

@end
