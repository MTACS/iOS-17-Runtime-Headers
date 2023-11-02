
@interface WKWebProcessBundleParameters : NSObject {
    struct RetainPtr<NSMutableDictionary> { 
        void *m_ptr; 
    }  _parameters;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (void)setParameter:(id)arg1 forKey:(id)arg2;
- (void)setParametersForKeyWithDictionary:(id)arg1;
- (id)valueForKey:(id)arg1;

@end
