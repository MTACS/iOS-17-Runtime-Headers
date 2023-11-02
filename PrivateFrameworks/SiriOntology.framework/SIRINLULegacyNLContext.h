
@interface SIRINLULegacyNLContext : NSObject <NSSecureCoding> {
    bool  _dictationPrompt;
    bool  _fromPommes;
    int  _legacyContextSource;
    bool  _listenAfterSpeaking;
    NSString * _previousDomainName;
    NSArray * _renderedTexts;
    bool  _strictPrompt;
}

@property bool dictationPrompt;
@property bool fromPommes;
@property (nonatomic) int legacyContextSource;
@property bool listenAfterSpeaking;
@property (nonatomic, retain) NSString *previousDomainName;
@property (nonatomic, retain) NSArray *renderedTexts;
@property bool strictPrompt;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (bool)dictationPrompt;
- (void)encodeWithCoder:(id)arg1;
- (bool)fromPommes;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictationPrompt:(bool)arg1 strictPrompt:(bool)arg2 previousDomainName:(id)arg3 listenAfterSpeaking:(bool)arg4;
- (id)initWithDictationPrompt:(bool)arg1 strictPrompt:(bool)arg2 previousDomainName:(id)arg3 listenAfterSpeaking:(bool)arg4 renderedTexts:(id)arg5;
- (id)initWithDictationPrompt:(bool)arg1 strictPrompt:(bool)arg2 previousDomainName:(id)arg3 listenAfterSpeaking:(bool)arg4 renderedTexts:(id)arg5 legacyContextSource:(int)arg6;
- (int)legacyContextSource;
- (bool)listenAfterSpeaking;
- (id)previousDomainName;
- (id)renderedTexts;
- (void)setDictationPrompt:(bool)arg1;
- (void)setFromPommes:(bool)arg1;
- (void)setLegacyContextSource:(int)arg1;
- (void)setListenAfterSpeaking:(bool)arg1;
- (void)setPreviousDomainName:(id)arg1;
- (void)setRenderedTexts:(id)arg1;
- (void)setStrictPrompt:(bool)arg1;
- (bool)strictPrompt;

@end
