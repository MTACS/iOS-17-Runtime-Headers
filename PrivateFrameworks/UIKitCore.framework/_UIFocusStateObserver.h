
@interface _UIFocusStateObserver : NSObject {
    struct { 
        unsigned int wasActive : 1; 
        unsigned int supressNotifyObservers : 1; 
    }  _flags;
    NSMapTable * _observers;
}

@property (getter=isActive, nonatomic, readonly) bool active;

- (void).cxx_destruct;
- (id)addObserver:(id /* block */)arg1;
- (id)description;
- (id)descriptionBuilder;
- (id)init;
- (bool)isActive;
- (void)notifyObserversIfNecessary;
- (void)performUpdatesAndNotifyObservers:(id /* block */)arg1;
- (void)removeObserver:(id)arg1;

@end
