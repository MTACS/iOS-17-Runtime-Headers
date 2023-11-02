
@interface QSSMutableTextToSpeechResource : QSSTextToSpeechResource

@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *version;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)language;
- (void)setLanguage:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)version;

@end
