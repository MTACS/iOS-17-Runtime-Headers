
@interface WKWebInspectorPreferenceObserver : NSObject {
    struct RetainPtr<NSUserDefaults> { 
        void *m_ptr; 
    }  m_userDefaults;
}

+ (id)sharedInstance;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
