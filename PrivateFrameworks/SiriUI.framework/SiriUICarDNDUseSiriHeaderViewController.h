
@interface SiriUICarDNDUseSiriHeaderViewController : UIViewController <SiriUICarDNDContextProviderDelegate> {
    SiriUICarDNDContextProvider * _contextProvider;
    <SiriUICarDNDDelegate> * _delegate;
    NSString * _localizedSubtitle;
    bool  _localizedSubtitleDisplayedAboveTitle;
    NSString * _localizedTitle;
    UIImageView * _siriOrbImageView;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (getter=_contextProvider, setter=_setContextProvider:, nonatomic, retain) SiriUICarDNDContextProvider *contextProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SiriUICarDNDDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_localizedSubtitle, setter=_setLocalizedSubtitle:, nonatomic, retain) NSString *localizedSubtitle;
@property (getter=_localizedTitle, setter=_setLocalizedTitle:, nonatomic, retain) NSString *localizedTitle;
@property (getter=_siriOrbImageView, setter=_setSiriOrbImageView:, nonatomic, retain) UIImageView *siriOrbImageView;
@property (getter=_subtitleLabel, setter=_setSubtitleLabel:, nonatomic, retain) UILabel *subtitleLabel;
@property (readonly) Class superclass;
@property (getter=_titleLabel, setter=_setTitleLabel:, nonatomic, retain) UILabel *titleLabel;

+ (bool)shouldShowCarDNDUseSiriHeaderViewController;

- (void).cxx_destruct;
- (void)_addContextProvider;
- (bool)_canShowWhileLocked;
- (id)_contextProvider;
- (id)_hintContext;
- (id)_localizedSubtitle;
- (id)_localizedTitle;
- (void)_removeContextProvider;
- (void)_sendCardAppearedAnalyticsEvent;
- (void)_setContextProvider:(id)arg1;
- (void)_setLocalizedSubtitle:(id)arg1;
- (void)_setLocalizedTitle:(id)arg1;
- (void)_setSiriOrbImageView:(id)arg1;
- (void)_setSubtitleLabel:(id)arg1;
- (void)_setTitleLabel:(id)arg1;
- (void)_setupImageView;
- (void)_setupSubtitleLabel;
- (void)_setupTitleAndSubtitleConstraints;
- (void)_setupTitleLabel;
- (void)_setupView;
- (id)_siriOrbImageView;
- (id)_subtitleLabel;
- (id)_titleLabel;
- (void)contextProvided:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
