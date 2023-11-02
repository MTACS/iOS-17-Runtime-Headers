
@interface HFDifference : NSObject <NSCopying> {
    NSString * _key;
    unsigned long long  _priority;
    NSDictionary * _userInfo;
}

@property (nonatomic, retain) NSString *key;
@property (nonatomic) unsigned long long priority;
@property (nonatomic, retain) NSDictionary *userInfo;

+ (id)difference:(id)arg1;
+ (id)difference:(id)arg1 priority:(unsigned long long)arg2;
+ (id)difference:(id)arg1 priority:(unsigned long long)arg2 withBlock:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)_subclass_description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilder;
- (id)initWithKey:(id)arg1;
- (id)initWithKey:(id)arg1 priority:(unsigned long long)arg2;
- (id)key;
- (unsigned long long)priority;
- (void)setKey:(id)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;
- (id)withPriority:(unsigned long long)arg1;

@end
