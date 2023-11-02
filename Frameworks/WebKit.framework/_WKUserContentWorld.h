
@interface _WKUserContentWorld : NSObject <WKObject> {
    struct RetainPtr<WKContentWorld> { 
        void *m_ptr; 
    }  _contentWorld;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;

+ (id)normalWorld;
+ (id)worldWithName:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (id)_init;
- (id)_initWithContentWorld:(id)arg1;
- (id)_initWithName:(id)arg1;
- (id)name;

@end
