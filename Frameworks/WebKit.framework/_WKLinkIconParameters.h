
@interface _WKLinkIconParameters : NSObject {
    struct RetainPtr<NSMutableDictionary> { 
        void *m_ptr; 
    }  _attributes;
    long long  _iconType;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _mimeType;
    struct RetainPtr<NSNumber> { 
        void *m_ptr; 
    }  _size;
    struct RetainPtr<NSURL> { 
        void *m_ptr; 
    }  _url;
}

@property (nonatomic, readonly, copy) NSDictionary *attributes;
@property (nonatomic, readonly) long long iconType;
@property (nonatomic, readonly, copy) NSString *mimeType;
@property (nonatomic, readonly, copy) NSNumber *size;
@property (nonatomic, readonly, copy) NSURL *url;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithLinkIcon:(const void*)arg1;
- (id)attributes;
- (long long)iconType;
- (id)mimeType;
- (id)size;
- (id)url;

@end
