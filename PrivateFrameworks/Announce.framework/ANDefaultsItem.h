
@interface ANDefaultsItem : NSObject {
    NSObject * _defaultValue;
    NSString * _userInfo;
}

@property (nonatomic, retain) NSObject *defaultValue;
@property (nonatomic, retain) NSString *userInfo;

+ (id)itemWithValue:(id)arg1 userInfo:(id)arg2;

- (void).cxx_destruct;
- (id)defaultValue;
- (void)setDefaultValue:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
