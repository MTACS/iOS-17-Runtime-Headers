
@interface NSSUserDefaultsDataDestructionItem : NSObject <NSCopying> {
    NSString * _domainName;
    NSSet * _stickyKeys;
    NSUserDefaults * _userDefaults;
}

@property (nonatomic, copy) NSString *domainName;
@property (nonatomic, copy) NSSet *stickyKeys;
@property (nonatomic, retain) NSUserDefaults *userDefaults;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)domainName;
- (id)init;
- (id)initWithUserDefaults:(id)arg1 domainName:(id)arg2 stickyKeys:(id)arg3;
- (void)setDomainName:(id)arg1;
- (void)setStickyKeys:(id)arg1;
- (void)setUserDefaults:(id)arg1;
- (id)stickyKeys;
- (id)userDefaults;

@end
