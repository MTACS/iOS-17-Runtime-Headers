
@interface SUScriptRequestPerformance : SUScriptObject {
    ISURLRequestPerformance * _performance;
}

@property (readonly) NSString *JSONHeaders;
@property (readonly) double finishInterval;
@property (readonly) double receivedResponseInterval;
@property (readonly) double renderBeginInterval;
@property (readonly) double renderEndInterval;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)JSONHeaders;
- (id)_className;
- (id)attributeKeys;
- (void)dealloc;
- (double)finishInterval;
- (id)initWithRequestPerformance:(id)arg1;
- (double)receivedResponseInterval;
- (double)renderBeginInterval;
- (double)renderEndInterval;
- (id)scriptAttributeKeys;

@end
