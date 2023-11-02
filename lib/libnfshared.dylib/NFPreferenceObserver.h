
@interface NFPreferenceObserver : NSObject {
    id /* block */  _callback;
}

@property (copy) id /* block */ callback;

- (void).cxx_destruct;
- (id /* block */)callback;
- (void)dealloc;
- (void)handlePreferencesOrProfileChanged;
- (void)setCallback:(id /* block */)arg1;
- (void)start:(id /* block */)arg1;
- (void)stop;

@end
