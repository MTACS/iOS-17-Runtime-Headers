
@interface _GCKeyboardEventFusion : NSObject <_GCKeyboardEventSource> {
    NSArray * _observations;
    NSArray * _observers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *observations;
@property (copy) NSArray *observers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithSources:(id)arg1;
- (id)observations;
- (id)observeKeyboardEvents:(id /* block */)arg1;
- (id)observers;
- (void)setObservations:(id)arg1;
- (void)setObservers:(id)arg1;

@end
