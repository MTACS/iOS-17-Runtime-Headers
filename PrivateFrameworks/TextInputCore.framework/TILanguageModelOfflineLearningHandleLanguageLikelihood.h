
@interface TILanguageModelOfflineLearningHandleLanguageLikelihood : TILanguageModelOfflineLearningHandle

- (void)adaptToParagraph:(id)arg1 timeStamp:(double)arg2 adaptationType:(int)arg3;
- (void)didFinishLearning;
- (void)load;
- (void)updateAdaptationContext:(id)arg1;

@end