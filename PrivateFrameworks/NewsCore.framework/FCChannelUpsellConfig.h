
@interface FCChannelUpsellConfig : NSObject {
    NSString * _channelID;
    FCEmailSignupConfig * _emailSignupConfiguration;
    long long  _engagedUserQuiescenceInterval;
    FCHideMyEmailSignupConfig * _hideMyEmailSignupConfiguration;
    long long  _presentationCap;
    long long  _presentationCountResetInterval;
    long long  _quiescenceInterval;
    FCSIWAPurchaseConfig * _siwaPurchaseConfiguration;
    NSDictionary * _triggersByMethod;
}

@property (nonatomic, copy) NSString *channelID;
@property (nonatomic, retain) FCEmailSignupConfig *emailSignupConfiguration;
@property (nonatomic) long long engagedUserQuiescenceInterval;
@property (nonatomic, retain) FCHideMyEmailSignupConfig *hideMyEmailSignupConfiguration;
@property (nonatomic) long long presentationCap;
@property (nonatomic) long long presentationCountResetInterval;
@property (nonatomic) long long quiescenceInterval;
@property (nonatomic, retain) FCSIWAPurchaseConfig *siwaPurchaseConfiguration;
@property (nonatomic, retain) NSDictionary *triggersByMethod;

- (void).cxx_destruct;
- (id)channelID;
- (id)emailSignupConfiguration;
- (long long)engagedUserQuiescenceInterval;
- (id)hideMyEmailSignupConfiguration;
- (id)initWithChannelID:(id)arg1 configDictionary:(id)arg2;
- (long long)presentationCap;
- (long long)presentationCountResetInterval;
- (long long)quiescenceInterval;
- (void)setChannelID:(id)arg1;
- (void)setEmailSignupConfiguration:(id)arg1;
- (void)setEngagedUserQuiescenceInterval:(long long)arg1;
- (void)setHideMyEmailSignupConfiguration:(id)arg1;
- (void)setPresentationCap:(long long)arg1;
- (void)setPresentationCountResetInterval:(long long)arg1;
- (void)setQuiescenceInterval:(long long)arg1;
- (void)setSiwaPurchaseConfiguration:(id)arg1;
- (void)setTriggersByMethod:(id)arg1;
- (id)siwaPurchaseConfiguration;
- (id)triggersByMethod;

@end
