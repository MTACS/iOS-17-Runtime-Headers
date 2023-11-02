
@interface SUScriptAppleAccountType : SUScriptObject {
    ACAccountType * _accountType;
}

@property (readonly) id accessGranted;
@property (readonly) NSString *accountTypeDescription;
@property (readonly) NSString *identifier;
@property (nonatomic, readonly) ACAccountType *nativeAccountType;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)_className;
- (id)accessGranted;
- (id)accountTypeDescription;
- (id)attributeKeys;
- (void)dealloc;
- (id)identifier;
- (id)initWithACAccountType:(id)arg1;
- (id)nativeAccountType;
- (id)scriptAttributeKeys;

@end
