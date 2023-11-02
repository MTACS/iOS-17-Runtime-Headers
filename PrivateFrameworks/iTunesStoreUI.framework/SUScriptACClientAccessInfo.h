
@interface SUScriptACClientAccessInfo : SUScriptObject {
    SUScriptAppleAccountType * _accountType;
    NSMutableDictionary * _dictionary;
}

@property (readonly) NSDictionary *accessInfoDictionary;
@property (readonly) NSString *accessKeyFacebookAppID;
@property (readonly) NSString *accessKeyFacebookPermissions;
@property (readonly) NSString *accessKeyPurposeStatement;
@property (retain) SUScriptAppleAccountType *accountType;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)accessInfoDictionary;
- (id)accessKeyFacebookAppID;
- (id)accessKeyFacebookPermissions;
- (id)accessKeyPurposeStatement;
- (id)accountType;
- (id)attributeKeys;
- (void)dealloc;
- (id)init;
- (id)scriptAttributeKeys;
- (void)setAccountType:(id)arg1;
- (void)setValue:(id)arg1 forAccessKey:(id)arg2;
- (id)valueForAccessKey:(id)arg1;

@end
