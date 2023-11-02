
@interface CRComponentTsid : CRComponentBase {
    NSString * identiferBase64;
}

+ (id)sharedSingleton;

- (void).cxx_destruct;
- (id)_init;
- (void)challengeComponentWith:(id)arg1 withReply:(id /* block */)arg2;
- (bool)connectToIO:(unsigned int*)arg1 withError:(id*)arg2;
- (id)identiferBase64;
- (id)init;
- (bool)issueChallenge:(id)arg1 index:(int)arg2 reponse:(id*)arg3 options:(unsigned long long)arg4 connection:(unsigned int)arg5 withError:(id*)arg6;
- (void)setIdentiferBase64:(id)arg1;

@end
