
@interface RKSentenceClassifier_en_US : RKSentenceClassifier

+ (id)preProcessTextMessageForLinguisticTagger:(id)arg1;

- (id)addSentenceTerminatorQuestion:(id)arg1;
- (id)alternativeConjunctions;
- (void)analyzeSentence;
- (id)classifySentence;

@end
