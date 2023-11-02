
@interface _GCGamepadEventKeyboardEventAdapter : NSObject <_GCGamepadEventSource> {
    _GCGamepadEventKeyboardEventAdapterConfig * _config;
    id  _observation;
    NSArray * _observers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) NSArray *observers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithConfiguration:(id)arg1 source:(id)arg2;
- (id)observeGamepadEvents:(id /* block */)arg1;
- (id)observers;
- (void)setObservers:(id)arg1;

@end
