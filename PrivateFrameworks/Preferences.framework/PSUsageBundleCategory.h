
@interface PSUsageBundleCategory : NSObject {
    NSString * _identifier;
    NSString * _name;
    PSUsageBundleApp * _usageBundleApp;
}

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) PSUsageBundleApp *usageBundleApp;

+ (id)categoryNamed:(id)arg1 withIdentifier:(id)arg2 forUsageBundleApp:(id)arg3;

- (void).cxx_destruct;
- (id)description;
- (id)identifier;
- (id)name;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setUsageBundleApp:(id)arg1;
- (id)usageBundleApp;

@end
