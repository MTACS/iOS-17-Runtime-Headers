
@interface _UIBarButtonItemActionBinding : NSObject {
    NSArray * _barButtonItems;
    struct { 
        unsigned int isMonitoring : 1; 
    }  _flags;
    id /* block */  _registerObservers;
    id /* block */  _unregisterObservers;
}

@property (nonatomic, retain) NSArray *barButtonItems;
@property (nonatomic, copy) id /* block */ registerObservers;
@property (nonatomic, copy) id /* block */ unregisterObservers;

- (void).cxx_destruct;
- (void)_update:(id)arg1;
- (id)barButtonItems;
- (id)initWithBarButtonItems:(id)arg1 registerObservers:(id /* block */)arg2 unregisterObservers:(id /* block */)arg3;
- (id /* block */)registerObservers;
- (void)setBarButtonItems:(id)arg1;
- (void)setRegisterObservers:(id /* block */)arg1;
- (void)setUnregisterObservers:(id /* block */)arg1;
- (void)startMonitoring;
- (void)stopMonitoring;
- (id /* block */)unregisterObservers;

@end
