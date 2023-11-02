
@interface IRDisplayMonitor : NSObject {
    NSString * _appInFocus;
    FBSDisplayLayoutMonitor * _displayLayoutMinitor;
    bool  _displayLocked;
    bool  _displayOn;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSHashTable * _observers;
}

@property (nonatomic, retain) NSString *appInFocus;
@property (nonatomic, retain) FBSDisplayLayoutMonitor *displayLayoutMinitor;
@property (nonatomic) bool displayLocked;
@property (nonatomic) bool displayOn;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, retain) NSHashTable *observers;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)appInFocus;
- (void)dealloc;
- (void)didUpdateDisplayLayout:(id)arg1;
- (id)displayLayoutMinitor;
- (bool)displayLocked;
- (bool)displayOn;
- (id)getAppInFocus;
- (id)init;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)setAppInFocus:(id)arg1;
- (void)setDisplayLayoutMinitor:(id)arg1;
- (void)setDisplayLocked:(bool)arg1;
- (void)setDisplayOn:(bool)arg1;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setObservers:(id)arg1;

@end
