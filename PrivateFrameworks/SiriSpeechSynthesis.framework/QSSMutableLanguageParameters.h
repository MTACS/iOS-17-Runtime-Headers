
@interface QSSMutableLanguageParameters : QSSLanguageParameters

@property (nonatomic, copy) NSString *fork_id;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *request_locale;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fork_id;
- (id)init;
- (id)language;
- (id)request_locale;
- (void)setFork_id:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setRequest_locale:(id)arg1;

@end
