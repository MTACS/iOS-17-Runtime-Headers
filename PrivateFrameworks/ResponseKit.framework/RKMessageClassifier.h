
@interface RKMessageClassifier : NSObject

+ (id)messageClassification:(id)arg1 withLanguageIdentifier:(id)arg2;
+ (id)messageClassification:(id)arg1 withLanguageIdentifier:(id)arg2 conversationTurns:(id)arg3;
+ (id)preferredLanguages;
+ (bool)questionClassification:(id)arg1 withLanguageIdentifier:(id)arg2;
+ (void)setPreferredLanguages:(id)arg1;

@end
