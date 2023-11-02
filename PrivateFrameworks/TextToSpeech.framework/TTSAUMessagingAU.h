
@interface TTSAUMessagingAU : NSObject <AUMessageChannel> {
    id /* block */  _hostBlock;
    TTSFirstPartyAudioUnit * _owningAudioUnit;
}

@property (nonatomic, copy) id /* block */ callHostBlock;
@property (nonatomic, copy) id /* block */ hostBlock;
@property (nonatomic) TTSFirstPartyAudioUnit *owningAudioUnit;

- (void).cxx_destruct;
- (id)callAudioUnit:(id)arg1;
- (id)echo:(id)arg1;
- (id /* block */)hostBlock;
- (id)owningAudioUnit;
- (void)setCallHostBlock:(id /* block */)arg1;
- (void)setHostBlock:(id /* block */)arg1;
- (void)setOwningAudioUnit:(id)arg1;

@end
