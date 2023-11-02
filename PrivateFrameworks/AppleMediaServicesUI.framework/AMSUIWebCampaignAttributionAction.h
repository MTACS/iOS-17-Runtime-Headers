
@interface AMSUIWebCampaignAttributionAction : AMSUIWebAction {
    NSURL * _URL;
    ACAccount * _account;
    NSArray * _additionalQueryItems;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) NSArray *additionalQueryItems;

+ (id)_campaignAttributionTaskForURL:(id)arg1;

- (void).cxx_destruct;
- (id)URL;
- (id)account;
- (id)additionalQueryItems;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)runAction;
- (void)setAccount:(id)arg1;
- (void)setAdditionalQueryItems:(id)arg1;
- (void)setURL:(id)arg1;

@end
