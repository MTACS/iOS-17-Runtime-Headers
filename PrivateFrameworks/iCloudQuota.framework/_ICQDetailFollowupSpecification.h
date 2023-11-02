
@interface _ICQDetailFollowupSpecification : _ICQFollowupSpecification {
    NSString * _bundleId;
    NSDictionary * _followUpInfo;
    NSDictionary * _followupMesgTemplates;
    NSDictionary * _followupTitleTemplates;
    NSDictionary * _lockScreenInfo;
    NSDictionary * _mesgTemplates;
    NSDictionary * _subTitleTemplates;
    NSDictionary * _titleTemplates;
}

@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic, retain) NSDictionary *followUpInfo;
@property (nonatomic, retain) NSDictionary *followupMesgTemplates;
@property (nonatomic, retain) NSDictionary *followupTitleTemplates;
@property (nonatomic, retain) NSDictionary *lockScreenInfo;
@property (nonatomic, retain) NSDictionary *mesgTemplates;
@property (nonatomic, retain) NSDictionary *subTitleTemplates;
@property (nonatomic, retain) NSDictionary *titleTemplates;

+ (id)replaceWordsIn:(id)arg1 with:(id)arg2;

- (void).cxx_destruct;
- (id)bundleId;
- (id)followUpInfo;
- (id)followupMesgTemplates;
- (id)followupTitleTemplates;
- (id)initWithServerDictionary:(id)arg1;
- (id)lockScreenInfo;
- (id)mesgTemplates;
- (id)mesgWithKey:(id)arg1;
- (void)postFollowupWithController:(id)arg1 replaceExisting:(bool)arg2 completion:(id /* block */)arg3;
- (void)setBundleId:(id)arg1;
- (void)setFollowUpInfo:(id)arg1;
- (void)setFollowupMesgTemplates:(id)arg1;
- (void)setFollowupTitleTemplates:(id)arg1;
- (void)setLockScreenInfo:(id)arg1;
- (void)setMesgTemplates:(id)arg1;
- (void)setSubTitleTemplates:(id)arg1;
- (void)setTitleTemplates:(id)arg1;
- (id)subTitleTemplates;
- (id)subTitleWithKey:(id)arg1;
- (id)titleTemplates;
- (id)titleWithKey:(id)arg1;

@end
