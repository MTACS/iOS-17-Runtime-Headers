
@interface ATAParsedOpenURL : NSObject {
    NSURL * _URL;
    NSDictionary * _options;
    NSString * _tabBarItemIdentifier;
    unsigned long long  _type;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, copy) NSDictionary *options;
@property (nonatomic, retain) NSString *tabBarItemIdentifier;
@property (nonatomic) unsigned long long type;

+ (id)_logStringForType:(unsigned long long)arg1;
+ (id)parsedOpenURLWithURL:(id)arg1 andOptions:(id)arg2;

- (void).cxx_destruct;
- (id)URL;
- (id)_initWithURL:(id)arg1 options:(id)arg2 type:(unsigned long long)arg3;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)options;
- (void)setOptions:(id)arg1;
- (void)setTabBarItemIdentifier:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setURL:(id)arg1;
- (id)tabBarItemIdentifier;
- (unsigned long long)type;

@end
