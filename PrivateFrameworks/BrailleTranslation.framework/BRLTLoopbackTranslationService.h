
@interface BRLTLoopbackTranslationService : BRLTTranslationService {
    BRLTSLoopbackTranslationService * _loopbackService;
}

@property (nonatomic, retain) BRLTSLoopbackTranslationService *loopbackService;

- (void).cxx_destruct;
- (id)initWithServiceIdentifier:(id)arg1 connection:(id)arg2 loopbackService:(id)arg3;
- (bool)isLoopback;
- (id)loopbackService;
- (void)setLoopbackService:(id)arg1;

@end
