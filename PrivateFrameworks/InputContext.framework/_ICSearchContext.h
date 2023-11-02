
@interface _ICSearchContext : NSObject {
    NSString * _applicationBundleIdentifier;
    bool  _isResponseContextDenylisted;
    NSString * _locale;
    NSArray * _recipients;
    bool  _shouldDisableAutoCaps;
}

@property (nonatomic, readonly) NSString *applicationBundleIdentifier;
@property (nonatomic, readonly) bool isResponseContextDenylisted;
@property (nonatomic, readonly) NSString *locale;
@property (nonatomic, readonly) NSArray *recipients;
@property (nonatomic, readonly) bool shouldDisableAutoCaps;

- (void).cxx_destruct;
- (id)applicationBundleIdentifier;
- (id)initWithLocale:(id)arg1 recipients:(id)arg2 applicationBundleIdentifier:(id)arg3 isResponseContextDenylisted:(bool)arg4 shouldDisableAutoCaps:(bool)arg5;
- (bool)isResponseContextDenylisted;
- (id)locale;
- (id)recipients;
- (bool)shouldDisableAutoCaps;

@end
