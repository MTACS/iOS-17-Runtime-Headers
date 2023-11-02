
@interface TILanguageModelOfflineLearningHandleMecabra : TILanguageModelOfflineLearningHandle {
    TIWordSearch * _wordSearch;
}

@property (nonatomic, retain) TIWordSearch *wordSearch;

- (void).cxx_destruct;
- (void)adaptToParagraph:(id)arg1 timeStamp:(double)arg2 adaptationType:(int)arg3;
- (void)didFinishLearning;
- (void)load;
- (void)setWordSearch:(id)arg1;
- (void)updateAdaptationContext:(id)arg1;
- (id)wordSearch;

@end
