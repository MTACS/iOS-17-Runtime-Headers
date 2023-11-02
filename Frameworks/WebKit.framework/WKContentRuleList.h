
@interface WKContentRuleList : NSObject <WKObject> {
    struct ObjectStorage<API::ContentRuleList> { 
        struct type { 
            unsigned char __lx[56]; 
        } data; 
    }  _contentRuleList;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (readonly) Class superclass;

+ (id)_parseRuleList:(id)arg1;
+ (bool)_supportsRegularExpression:(id)arg1;

- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (void)dealloc;
- (id)identifier;

@end
