
@interface PXSurveyQuestionsDataSource : NSObject {
    NSMutableSet * _answeredGadgetIdentifiers;
    unsigned long long  _numberOfQuestionsGenerated;
    PHPhotoLibrary * _photoLibrary;
    NSPredicate * _predicate;
}

@property (nonatomic, readonly) unsigned long long numberOfQuestionsRemainingToBeAnswered;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly, copy) NSPredicate *predicate;

- (void).cxx_destruct;
- (id)_fetchOptionsForShouldPrefetchCount:(bool)arg1;
- (bool)didAnswerQuestionForGadgetIdentifier:(id)arg1;
- (void)didGenerateNumberOfGadgets:(unsigned long long)arg1;
- (void)didRemoveGadgetWithIdentifier:(id)arg1;
- (id)fetchSortedAllUnansweredQuestionsWithLimit:(unsigned long long)arg1;
- (unsigned long long)fetchTotalNumberOfAnsweredYesOrNoQuestions;
- (unsigned long long)fetchTotalNumberOfUnansweredQuestions;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1 predicate:(id)arg2;
- (void)invalidateQuestions:(id)arg1;
- (id)mostRecentQuestionCreationDate;
- (unsigned long long)numberOfQuestionsRemainingToBeAnswered;
- (id)photoLibrary;
- (id)predicate;
- (void)resetGeneratedQuestions;

@end
