
@interface FCEmailSignupConfig : NSObject {
    NSString * _alertAcceptActionTitle;
    NSString * _alertDeclineActionTitle;
    NSString * _alertEmailAvailableMessage;
    NSString * _alertEmailUnavailableMessage;
    NSString * _alertTitle;
    unsigned long long  _emailSignupStyle;
    NSString * _landingPageArticleID;
}

@property (nonatomic, copy) NSString *alertAcceptActionTitle;
@property (nonatomic, copy) NSString *alertDeclineActionTitle;
@property (nonatomic, copy) NSString *alertEmailAvailableMessage;
@property (nonatomic, copy) NSString *alertEmailUnavailableMessage;
@property (nonatomic, copy) NSString *alertTitle;
@property (nonatomic) unsigned long long emailSignupStyle;
@property (nonatomic, copy) NSString *landingPageArticleID;

- (void).cxx_destruct;
- (id)alertAcceptActionTitle;
- (id)alertDeclineActionTitle;
- (id)alertEmailAvailableMessage;
- (id)alertEmailUnavailableMessage;
- (id)alertTitle;
- (unsigned long long)emailSignupStyle;
- (id)initWithConfigDictionary:(id)arg1;
- (id)landingPageArticleID;
- (void)setAlertAcceptActionTitle:(id)arg1;
- (void)setAlertDeclineActionTitle:(id)arg1;
- (void)setAlertEmailAvailableMessage:(id)arg1;
- (void)setAlertEmailUnavailableMessage:(id)arg1;
- (void)setAlertTitle:(id)arg1;
- (void)setEmailSignupStyle:(unsigned long long)arg1;
- (void)setLandingPageArticleID:(id)arg1;

@end
