
@interface CKMultipleCTSubscriptionsController : PSListController {
    NSString * _controllerTitle;
    NSArray * _ctSubscriptions;
    NSString * _defaultsKey;
    NSString * _headerKey;
}

@property (nonatomic, copy) NSString *controllerTitle;
@property (nonatomic, retain) NSArray *ctSubscriptions;
@property (nonatomic, copy) NSString *defaultsKey;
@property (nonatomic, copy) NSString *headerKey;

- (void).cxx_destruct;
- (id)controllerTitle;
- (id)ctSubscriptions;
- (id)defaultsKey;
- (id)headerKey;
- (id)isEnabledForSubscription:(id)arg1;
- (void)setControllerTitle:(id)arg1;
- (void)setCtSubscriptions:(id)arg1;
- (void)setDefaultsKey:(id)arg1;
- (void)setEnabledForSubscription:(id)arg1 specifier:(id)arg2;
- (void)setHeaderKey:(id)arg1;
- (id)specifiers;
- (void)systemApplicationWillEnterForeground;
- (void)viewWillAppear:(bool)arg1;

@end
