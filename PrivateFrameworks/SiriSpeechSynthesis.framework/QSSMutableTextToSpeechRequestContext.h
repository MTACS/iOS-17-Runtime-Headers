
@interface QSSMutableTextToSpeechRequestContext : QSSTextToSpeechRequestContext

@property (nonatomic, copy) NSArray *context_info;
@property (nonatomic, copy) NSString *dialog_identifier;

- (id)context_info;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dialog_identifier;
- (id)init;
- (void)setContext_info:(id)arg1;
- (void)setDialog_identifier:(id)arg1;

@end
