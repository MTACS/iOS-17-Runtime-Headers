
@interface WKUserDefaults : NSUserDefaults {
    struct WeakObjCPtr<WKPreferenceObserver> { 
        id m_weakReference; 
    }  m_observer;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  m_suiteName;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_notifyObserversOfChangeFromValuesForKeys:(id)arg1 toValuesForKeys:(id)arg2;
- (void)findPreferenceChangesAndNotifyForKeys:(id)arg1 toValuesForKeys:(id)arg2;
- (id)initWithSuiteName:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
