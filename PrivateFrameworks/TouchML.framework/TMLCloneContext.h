
@interface TMLCloneContext : NSObject {
    JSValue * _apiObject;
    NSString * _apiObjectKey;
    JSContext * _jsContext;
    TMLMetaContext * _metaContext;
}

@property (nonatomic) JSValue *apiObject;
@property (nonatomic, copy) NSString *apiObjectKey;
@property (nonatomic) JSContext *jsContext;
@property (nonatomic, readonly) TMLMetaContext *metaContext;
@property (nonatomic, readonly) TMLMetaObject *rootObject;

- (void).cxx_destruct;
- (id)apiObject;
- (id)apiObjectKey;
- (id)initWithMetaContext:(id)arg1;
- (id)jsContext;
- (id)metaContext;
- (id)rootObject;
- (void)setApiObject:(id)arg1;
- (void)setApiObjectKey:(id)arg1;
- (void)setJsContext:(id)arg1;

@end
