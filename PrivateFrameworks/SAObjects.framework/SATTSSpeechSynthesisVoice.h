
@interface SATTSSpeechSynthesisVoice : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSString *contentVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *gender;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *keyString;
@property (nonatomic, copy) NSString *languageCode;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *quality;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *type;
@property (nonatomic) bool useServer;

+ (id)speechSynthesisVoice;
+ (id)speechSynthesisVoiceWithDictionary:(id)arg1 context:(id)arg2;

- (id)contentVersion;
- (id)encodedClassName;
- (id)gender;
- (id)groupIdentifier;
- (id)keyString;
- (id)languageCode;
- (id)name;
- (id)quality;
- (void)setContentVersion:(id)arg1;
- (void)setGender:(id)arg1;
- (void)setKeyString:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setName:(id)arg1;
- (void)setQuality:(id)arg1;
- (void)setType:(id)arg1;
- (void)setUseServer:(bool)arg1;
- (id)type;
- (bool)useServer;

@end
