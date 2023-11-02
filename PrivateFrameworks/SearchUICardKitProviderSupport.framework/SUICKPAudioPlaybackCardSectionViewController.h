
@interface SUICKPAudioPlaybackCardSectionViewController : SUICKPInteractiveCardSectionViewController <CRKEventResponding, SFFeedbackListener>

@property (nonatomic, retain) SFAudioPlaybackCardSection *cardSection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView<SearchUICardSectionViewUpdatable> *view;

+ (id)cardSectionClasses;

- (void)_performCommands:(id)arg1 applyingUserInfo:(id)arg2;
- (void)cardEventDidOccur:(unsigned long long)arg1 withIdentifier:(id)arg2 userInfo:(id)arg3;
- (void)didEngageCardSection:(id)arg1;

@end
