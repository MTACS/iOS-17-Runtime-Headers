
@interface SUScriptAMSViewController : SUScriptViewController {
    NSString * _DSID;
    NSString * _URL;
    SUScriptAccount * _primaryAccount;
}

@property (nonatomic, copy) NSString *DSID;
@property (nonatomic, copy) NSString *URL;
@property (nonatomic, retain) SUScriptAccount *primaryAccount;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (void).cxx_destruct;
- (id)DSID;
- (id)URL;
- (id)_className;
- (id)attributeKeys;
- (id)initWithPrimaryAccount:(id)arg1;
- (id)newNativeViewController;
- (id)primaryAccount;
- (id)scriptAttributeKeys;
- (void)setDSID:(id)arg1;
- (void)setPrimaryAccount:(id)arg1;
- (void)setURL:(id)arg1;

@end
