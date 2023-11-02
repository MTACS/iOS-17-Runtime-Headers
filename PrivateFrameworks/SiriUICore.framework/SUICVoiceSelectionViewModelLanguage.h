
@interface SUICVoiceSelectionViewModelLanguage : NSObject <NSCopying> {
    bool  _isCurrentOutputLanguage;
    NSString * _languageCode;
    NSString * _localizedDisplayName;
}

@property (nonatomic, readonly) bool isCurrentOutputLanguage;
@property (nonatomic, readonly, copy) NSString *languageCode;
@property (nonatomic, readonly, copy) NSString *localizedDisplayName;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithLanguageCode:(id)arg1 localizedDisplayName:(id)arg2 isCurrentOutputLanguage:(bool)arg3;
- (bool)isCurrentOutputLanguage;
- (id)languageCode;
- (id)localizedDisplayName;

@end
