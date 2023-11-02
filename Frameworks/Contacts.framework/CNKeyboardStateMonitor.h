
@interface CNKeyboardStateMonitor : NSObject <CNKeyboardStateMonitor> {
    <NSObject> * _didHideObserver;
    <NSObject> * _didShowObserver;
    long long  _keyboardState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <NSObject> *didHideObserver;
@property (nonatomic, retain) <NSObject> *didShowObserver;
@property (readonly) unsigned long long hash;
@property long long keyboardState;
@property (readonly) Class superclass;

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (void)dealloc;
- (id)didHideObserver;
- (id)didShowObserver;
- (id)init;
- (long long)keyboardState;
- (void)setDidHideObserver:(id)arg1;
- (void)setDidShowObserver:(id)arg1;
- (void)setKeyboardState:(long long)arg1;

@end
