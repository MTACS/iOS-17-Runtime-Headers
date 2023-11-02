
@interface BRLTJaJaForBrailleTranslationResultInternal : NSObject {
    void locations;
    void source;
    void target;
}

@property (nonatomic, copy) NSString *target;

- (void).cxx_destruct;
- (id)init;
- (id)initWithTranslator:(id)arg1 source:(id)arg2;
- (void)setTarget:(id)arg1;
- (id)target;

@end
