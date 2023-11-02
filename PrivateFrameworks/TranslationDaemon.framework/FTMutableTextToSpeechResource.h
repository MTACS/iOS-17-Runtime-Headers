
@interface FTMutableTextToSpeechResource : FTTextToSpeechResource

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *version;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)identifier;
- (id)init;
- (id)language;
- (void)setIdentifier:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)version;

@end
