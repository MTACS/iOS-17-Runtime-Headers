
@interface SUScriptURLRequest : SUScriptObject {
    SSMutableURLRequestProperties * _requestProperties;
}

@property (copy) NSString *URLBagKey;
@property (copy) id URLs;
@property (copy) NSNumber *timeoutInterval;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)URLBagKey;
- (id)URLs;
- (id)_className;
- (id)attributeKeys;
- (id)copyNativeRequestProperties;
- (void)dealloc;
- (id)init;
- (id)initWithNativeRequestProperties:(id)arg1;
- (id)scriptAttributeKeys;
- (void)setTimeoutInterval:(id)arg1;
- (void)setURLBagKey:(id)arg1;
- (void)setURLs:(id)arg1;
- (id)timeoutInterval;

@end
