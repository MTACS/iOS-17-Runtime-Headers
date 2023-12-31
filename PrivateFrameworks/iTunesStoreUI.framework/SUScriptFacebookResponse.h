
@interface SUScriptFacebookResponse : SUScriptObject {
    NSString * _bodyData;
    SUScriptError * _error;
    long long  _statusCode;
}

@property (readonly) long long HTTPStatusCode;
@property (readonly) NSString *bodyData;
@property (readonly) SUScriptError *error;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;

- (long long)HTTPStatusCode;
- (id)_className;
- (id)attributeKeys;
- (id)bodyData;
- (void)dealloc;
- (id)error;
- (id)initWithData:(id)arg1 response:(id)arg2 error:(id)arg3;
- (id)scriptAttributeKeys;

@end
