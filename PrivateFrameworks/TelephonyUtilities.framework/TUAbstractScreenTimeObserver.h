
@interface TUAbstractScreenTimeObserver : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accessorLock;
    TUDelegateController<TUAbstractScreenTimeObserverDelegate> * _delegateController;
    <TUNotifyObserver> * _notifyObserver;
    <TUScreenTimeStateDataSource> * _screenTimeDataSource;
    bool  _screenTimeEnabled;
}

@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } accessorLock;
@property (nonatomic, readonly) TUDelegateController<TUAbstractScreenTimeObserverDelegate> *delegateController;
@property (nonatomic, readonly) <TUNotifyObserver> *notifyObserver;
@property (nonatomic, readonly) <TUScreenTimeStateDataSource> *screenTimeDataSource;
@property (getter=isScreenTimeEnabled, nonatomic) bool screenTimeEnabled;

- (void).cxx_destruct;
- (struct os_unfair_lock_s { unsigned int x1; })accessorLock;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (id)delegateController;
- (id)initWithQueue:(id)arg1 dataSource:(id)arg2 notificationName:(id)arg3;
- (bool)isScreenTimeEnabled;
- (id)notifyObserver;
- (void)removeDelegate:(id)arg1;
- (id)screenTimeDataSource;
- (void)setScreenTimeEnabled:(bool)arg1;
- (void)updateScreenTimeEnabled;

@end
