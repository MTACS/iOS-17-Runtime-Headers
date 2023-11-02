
@interface BRLTJaJaForBrailleTranslationResult : NSObject {
    BRLTJaJaForBrailleTranslationResultInternal * _underlyingObject;
}

@property (nonatomic, readonly, copy) NSString *target;
@property (readonly) BRLTJaJaForBrailleTranslationResultInternal *underlyingObject;

- (void).cxx_destruct;
- (id)initWithTranslator:(id)arg1 source:(id)arg2;
- (id)target;
- (id)underlyingObject;

@end
