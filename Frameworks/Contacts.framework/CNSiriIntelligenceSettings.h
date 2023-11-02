
@interface CNSiriIntelligenceSettings : NSObject <CNSiriIntelligenceSettingsProtocol> {
    int  _notificationToken;
    _Atomic bool  _shouldShowSiriSuggestions;
}

- (void)dealloc;
- (id)init;
- (void)setShouldShowSiriSuggestions:(bool)arg1;
- (bool)shouldShowSiriSuggestions;

@end
