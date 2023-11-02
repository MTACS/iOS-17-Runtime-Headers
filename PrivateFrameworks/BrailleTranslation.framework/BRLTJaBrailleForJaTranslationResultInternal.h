
@interface BRLTJaBrailleForJaTranslationResultInternal : NSObject {
    void source;
    void target;
    void unicharLocations;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithTranslator:(id)arg1 source:(id)arg2;
- (long long)targetLocationForSourceLocation:(long long)arg1;

@end
