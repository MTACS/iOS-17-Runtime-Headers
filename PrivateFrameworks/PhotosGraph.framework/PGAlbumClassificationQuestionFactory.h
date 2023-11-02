
@interface PGAlbumClassificationQuestionFactory : PGSurveyQuestionFactory

- (id)generateQuestionsWithLimit:(unsigned long long)arg1 progressBlock:(id /* block */)arg2;
- (long long)questionOptions;
- (unsigned short)questionType;

@end
