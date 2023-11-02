
@interface QSSMutableSanitizedPronToken : QSSSanitizedPronToken

@property (nonatomic, copy) NSString *pron_source;
@property (nonatomic, copy) NSString *token;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)pron_source;
- (void)setPron_source:(id)arg1;
- (void)setToken:(id)arg1;
- (id)token;

@end
