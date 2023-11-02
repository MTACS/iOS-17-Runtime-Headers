
@interface VTUIDictationDataSharingOptInAlertViewModel : NSObject {
    NSString * _learnMoreButtonTitle;
    NSString * _message;
    NSString * _optInButtonTitle;
    NSString * _optOutButtonTitle;
    NSString * _title;
}

@property (nonatomic, copy) NSString *learnMoreButtonTitle;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *optInButtonTitle;
@property (nonatomic, copy) NSString *optOutButtonTitle;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)learnMoreButtonTitle;
- (id)message;
- (id)optInButtonTitle;
- (id)optOutButtonTitle;
- (void)setLearnMoreButtonTitle:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setOptInButtonTitle:(id)arg1;
- (void)setOptOutButtonTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
