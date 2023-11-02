
@interface WKPreferenceObserver : NSObject {
    struct Vector<WTF::RetainPtr<WKUserDefaults>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { 
        void *m_buffer; 
        unsigned int m_capacity; 
        unsigned int m_size; 
    }  m_userDefaults;
}

+ (id)sharedInstance;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;
- (void)preferenceDidChange:(id)arg1 key:(id)arg2 encodedValue:(id)arg3;

@end
