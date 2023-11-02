
@interface _WKUserContentFilter : NSObject <WKObject> {
    struct RetainPtr<WKContentRuleList> { 
        void *m_ptr; 
    }  _contentRuleList;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (id)_initWithWKContentRuleList:(id)arg1;

@end
