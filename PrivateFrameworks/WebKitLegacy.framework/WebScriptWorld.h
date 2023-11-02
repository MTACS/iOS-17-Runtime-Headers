
@interface WebScriptWorld : NSObject {
    WebScriptWorldPrivate * _private;
}

+ (id)findOrCreateWorld:(void*)arg1;
+ (id)scriptWorldForGlobalContext:(struct OpaqueJSContext { }*)arg1;
+ (id)scriptWorldForJavaScriptContext:(id)arg1;
+ (id)standardWorld;
+ (id)world;

- (void)dealloc;
- (id)init;
- (id)initWithWorld:(void*)arg1;
- (void)unregisterWorld;

@end
