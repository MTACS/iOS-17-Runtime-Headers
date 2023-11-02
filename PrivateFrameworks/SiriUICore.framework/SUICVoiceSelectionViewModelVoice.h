
@interface SUICVoiceSelectionViewModelVoice : NSObject <NSCopying> {
    bool  _isCurrentSiriVoice;
    AFVoiceInfo * _voiceInfo;
}

@property (nonatomic, readonly) struct CGColor { }*associatedCGColor;
@property (nonatomic, readonly) bool isCurrentSiriVoice;
@property (nonatomic, readonly, copy) NSString *localizedDisplayName;
@property (nonatomic, readonly, copy) AFVoiceInfo *voiceInfo;

- (void).cxx_destruct;
- (struct CGColor { }*)associatedCGColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithVoice:(id)arg1 isCurrentSiriVoice:(bool)arg2;
- (bool)isCurrentSiriVoice;
- (id)localizedDisplayName;
- (id)voiceInfo;

@end
