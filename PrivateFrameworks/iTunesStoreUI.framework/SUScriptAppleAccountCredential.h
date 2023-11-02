
@interface SUScriptAppleAccountCredential : SUScriptObject {
    ACAccountCredential * _credential;
}

@property (readonly) NSString *oauthToken;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)_className;
- (id)attributeKeys;
- (void)dealloc;
- (id)initWithACAccountCredential:(id)arg1;
- (id)oauthToken;
- (id)scriptAttributeKeys;

@end
