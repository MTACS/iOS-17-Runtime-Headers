
@interface CSListItem : NSObject <BSDescriptionProviding> {
    NCNotificationListSupplementaryViewConfiguration * _configuration;
    NSDate * _contentCreatedDate;
    UIViewController<CSListItemHosting> * _contentHost;
    NSString * _groupingIdentifier;
    NSString * _identifier;
    UIAction * _onTapAction;
    double  _relevanceScore;
    NSString * _sectionIdentifier;
    NSArray * _swipeActions;
}

@property (nonatomic, retain) NCNotificationListSupplementaryViewConfiguration *configuration;
@property (nonatomic, retain) NSDate *contentCreatedDate;
@property (nonatomic, retain) UIViewController<CSListItemHosting> *contentHost;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *groupingIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) UIAction *onTapAction;
@property (nonatomic) double relevanceScore;
@property (nonatomic, readonly) NSString *sectionIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *swipeActions;

- (void).cxx_destruct;
- (id)configuration;
- (id)contentCreatedDate;
- (id)contentHost;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)groupingIdentifier;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 groupingIdentifier:(id)arg2 sectionIdentifier:(id)arg3;
- (id)onTapAction;
- (double)relevanceScore;
- (id)sectionIdentifier;
- (void)setConfiguration:(id)arg1;
- (void)setContentCreatedDate:(id)arg1;
- (void)setContentHost:(id)arg1;
- (void)setOnTapAction:(id)arg1;
- (void)setRelevanceScore:(double)arg1;
- (void)setSwipeActions:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)swipeActions;

@end
