
@interface FTMutableTextToSpeechSpeechFeatureModelIdentifier : FTTextToSpeechSpeechFeatureModelIdentifier

@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *type;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)language;
- (id)name;
- (void)setLanguage:(id)arg1;
- (void)setName:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end
