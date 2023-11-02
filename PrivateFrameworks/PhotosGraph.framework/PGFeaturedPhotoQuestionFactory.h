
@interface PGFeaturedPhotoQuestionFactory : PGSurveyQuestionFactory {
    PGSuggestionSession * _suggestionSession;
}

- (void).cxx_destruct;
- (id)generateQuestionsWithLimit:(unsigned long long)arg1 progressBlock:(id /* block */)arg2;
- (id)initWithWorkingContext:(id)arg1 questionVersion:(short)arg2;
- (long long)questionOptions;
- (unsigned short)questionType;
- (id)randomAssetsUUIDsWithLimit:(unsigned long long)arg1;

@end
