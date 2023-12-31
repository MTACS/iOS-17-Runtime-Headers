
@interface MPChangeLanguageOptionCommandEvent : MPRemoteCommandEvent {
    MPNowPlayingInfoLanguageOption * _languageOption;
    long long  _setting;
}

@property (nonatomic, readonly) MPNowPlayingInfoLanguageOption *languageOption;
@property (nonatomic, readonly) long long setting;

- (void).cxx_destruct;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (id)languageOption;
- (long long)setting;

@end
