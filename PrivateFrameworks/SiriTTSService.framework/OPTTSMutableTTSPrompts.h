
@interface OPTTSMutableTTSPrompts : OPTTSTTSPrompts

@property (nonatomic, copy) NSArray *prompts;
@property (nonatomic, copy) NSData *prompts_v2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)prompts;
- (id)prompts_v2;
- (void)prompts_v2:(id /* block */)arg1;
- (void)setPrompts:(id)arg1;
- (void)setPrompts_v2:(id)arg1;

@end
