
@interface SAClientUserActivity : SAUserActivity

@property (nonatomic, copy) NSArray *keywords;
@property (nonatomic, copy) NSArray *requiredUserInfoKeys;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSDictionary *userInfo;
@property (nonatomic, copy) NSURL *webpageURL;

+ (id)clientUserActivity;
+ (id)clientUserActivityWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)keywords;
- (id)requiredUserInfoKeys;
- (void)setKeywords:(id)arg1;
- (void)setRequiredUserInfoKeys:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setWebpageURL:(id)arg1;
- (id)title;
- (id)type;
- (id)userInfo;
- (id)webpageURL;

@end
