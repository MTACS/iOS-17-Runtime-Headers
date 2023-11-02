
@interface OPTTSMutableTextToSpeechVoice : OPTTSTextToSpeechVoice

@property (nonatomic, copy) NSString *gender;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *quality;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSString *version;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)gender;
- (id)init;
- (id)language;
- (id)name;
- (id)quality;
- (void)setGender:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setName:(id)arg1;
- (void)setQuality:(id)arg1;
- (void)setType:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)type;
- (id)version;

@end
