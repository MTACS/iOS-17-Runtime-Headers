
@interface SFSpeechSynthesisRequest : NSObject {
    NSString * _clientBundleIdentifier;
    NSString * _devServiceType;
    NSString * _gender;
    bool  _isPrivate;
    NSString * _locale;
    long long  _phoneSetType;
    ProsodyTransferData * _prosodyTransferData;
    NSString * _requestIdentifer;
    bool  _returnFrontEndFeature;
    long long  _solutionType;
    NSString * _text;
    long long  _type;
    bool  _useCache;
    SFSpeechSynthesisVoice * _voice;
    NSString * _voiceName;
}

@property (nonatomic, copy) NSString *clientBundleIdentifier;
@property (nonatomic, retain) NSString *devServiceType;
@property (nonatomic, copy) NSString *gender;
@property (nonatomic) bool isPrivate;
@property (nonatomic, copy) NSString *locale;
@property (nonatomic) long long phoneSetType;
@property (nonatomic, retain) ProsodyTransferData *prosodyTransferData;
@property (nonatomic, copy) NSString *requestIdentifer;
@property (nonatomic) bool returnFrontEndFeature;
@property (nonatomic) long long solutionType;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long type;
@property (nonatomic) bool useCache;
@property (nonatomic) SFSpeechSynthesisVoice *voice;
@property (nonatomic, copy) NSString *voiceName;

- (void).cxx_destruct;
- (id)clientBundleIdentifier;
- (id)description;
- (id)devServiceType;
- (id)gender;
- (id)init;
- (bool)isPrivate;
- (id)locale;
- (long long)phoneSetType;
- (id)prosodyTransferData;
- (id)requestIdentifer;
- (bool)returnFrontEndFeature;
- (void)setClientBundleIdentifier:(id)arg1;
- (void)setDevServiceType:(id)arg1;
- (void)setGender:(id)arg1;
- (void)setIsPrivate:(bool)arg1;
- (void)setLocale:(id)arg1;
- (void)setPhoneSetType:(long long)arg1;
- (void)setProsodyTransferData:(id)arg1;
- (void)setRequestIdentifer:(id)arg1;
- (void)setReturnFrontEndFeature:(bool)arg1;
- (void)setSolutionType:(long long)arg1;
- (void)setText:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setUseCache:(bool)arg1;
- (void)setVoice:(id)arg1;
- (void)setVoiceName:(id)arg1;
- (long long)solutionType;
- (id)text;
- (long long)type;
- (bool)useCache;
- (id)voice;
- (id)voiceName;

@end
