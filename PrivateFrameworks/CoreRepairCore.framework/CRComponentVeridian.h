
@interface CRComponentVeridian : CRComponentBase {
    NSString * identiferBase64;
}

+ (id)sharedSingleton;

- (void).cxx_destruct;
- (id)_init;
- (void)challengeComponentWith:(id)arg1 withReply:(id /* block */)arg2;
- (id)identiferBase64;
- (id)init;
- (void)setIdentiferBase64:(id)arg1;
- (void)signVeridianWith:(id)arg1 withReply:(id /* block */)arg2;

@end
