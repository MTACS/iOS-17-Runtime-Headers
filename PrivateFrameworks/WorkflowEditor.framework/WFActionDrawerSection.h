
@interface WFActionDrawerSection : NSObject {
    NSArray * _actions;
    NSString * _bundleIdentifier;
    NSArray * _donations;
    bool  _loading;
    NSString * _localizedTitle;
    long long  _sectionType;
}

@property (nonatomic, copy) NSArray *actions;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSArray *donations;
@property (getter=isLoading, nonatomic, readonly) bool loading;
@property (nonatomic, readonly, copy) NSString *localizedTitle;
@property (nonatomic, readonly) long long sectionType;

- (void).cxx_destruct;
- (id)actions;
- (id)bundleIdentifier;
- (id)donations;
- (id)initAsLoading;
- (id)initWithLocalizedTitle:(id)arg1 actions:(id)arg2 donations:(id)arg3 bundleIdentifier:(id)arg4 sectionType:(long long)arg5;
- (bool)isLoading;
- (id)localizedTitle;
- (long long)sectionType;
- (void)setActions:(id)arg1;
- (void)setDonations:(id)arg1;

@end
